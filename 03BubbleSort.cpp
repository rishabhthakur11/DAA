#include <bits/stdc++.h>
using namespace std;
void swap(int *start, int *end)
{
    int temp = *start;
    *start = *end;
    *end = temp;
}
void bubbleSort(int arr[], int n)
{
    int comparison = 0;
    int i, j;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparison++;
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[i]);
        }
    }

    cout << "No. of Comparisons are:" << comparison << endl;
}
int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//! No. of comparision made in the bubble sort is n(n-1)/2