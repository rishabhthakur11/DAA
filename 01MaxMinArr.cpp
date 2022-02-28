#include <bits/stdc++.h>
using namespace std;
int maximum(int arr[], int n)
{
    int *ele = max_element(arr, arr + n);
    return (*ele);
}

int minimum(int arr[], int n)
{

    int *ele = min_element(arr, arr + n);
    return (*ele);
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

    int max_ele = maximum(arr, n);
    int min_ele = minimum(arr, n);

    cout << "Maximum element is :" << max_ele << endl;
    cout << "Minium element is:" << min_ele;

    return 0;
}