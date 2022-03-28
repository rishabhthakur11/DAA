#include <bits/stdc++.h>
using namespace std;
void swap(int *start, int *end)
{
    int temp = *start;
    *start = *end;
    *end = temp;
}
void SelectionSort(int arr[], int n)
{
    int comparison = 0;
    int i, j, min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            comparison++;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        swap(&arr[min_idx], &arr[i]);
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

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//! No. of comparision made in the Selection Sort  is n(n-1)/2