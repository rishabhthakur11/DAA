#include <bits/stdc++.h>
using namespace std;
void swap(int *start, int *end)
{
    int temp = *start;
    *start = *end;
    *end = temp;
}
void insertionSort(int arr[], int n)
{
    int comparison = 0;
    int i, j, key;
    for (int i = 0; i < n - 1; i++)
    {
        key = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            comparison++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

