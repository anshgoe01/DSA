#include <iostream>
using namespace std;

int firstOccur(int even[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (even[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (even[mid] < key)
        {
            start = mid + 1;
        }
        else if (even[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int even[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (even[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (even[mid] < key)
        {
            start = mid + 1;
        }
        else if (even[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int even[5] = {1, 2, 3, 3, 5};

    cout << "index of key first occurrence " << firstOccur(even, 5, 3) << endl;

    cout << "index of key first occurrence " << lastOccur(even, 5, 3) << endl;

    cout << " total no. of occurrences" << (lastOccur(even, 5, 3) - firstOccur(even, 5, 3)) + 1 << endl;

    return 0;
}
