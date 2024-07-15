#include <iostream>
using namespace std;

int peakarray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[5] = {3, 4, 5, 1};

    peakarray(arr, 5);

    cout << "the middle array is " << peakarray(arr, 4) << endl;
}
