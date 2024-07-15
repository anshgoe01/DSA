#include <iostream>
using namespace std;

int bookAllo(int arr[], int n)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s / 2);
    
    while (s < e){

        if (ispossible(int arr,n,m,mid)){
             
        }
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40};

    bookAllo(arr, 5);
}