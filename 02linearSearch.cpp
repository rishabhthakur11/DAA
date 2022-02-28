#include <bits/stdc++.h>
using namespace std;

int linerSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)

    {
        if (arr[i] == key)
        {
            return (i + 1);
        }
    }

    return -1;
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

    int key;
    cout << "Enter the element to be searched";
    cin >> key;

    int pos = linerSearch(arr, n, key);

    cout << "Element is find at position:" << pos;

    return 0;
}