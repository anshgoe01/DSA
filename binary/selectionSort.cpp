#include <iostream>
#include <algorithm> // for std::swap
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[10] = {6, 2, 8, 4, 10};
    int n = 10;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}