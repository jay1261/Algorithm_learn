#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int value)
{
    if (start > end)
    {
        return -1;
    }
    else if (start == end)
    {
        if (arr[start] == value)
            return start;
        else
            return -1;
    }
    else
    {
        int mid = (start + end) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            return binarySearch(arr, mid + 1, end, value);
        else
            return binarySearch(arr, start, mid - 1, value);
    }
}

int main()
{
    int n, m;
    int arr[100];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;

    int result = binarySearch(arr, 0, n - 1, m);

    cout << result;

    return 0;
}