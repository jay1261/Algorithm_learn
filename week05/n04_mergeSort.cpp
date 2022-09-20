#include <iostream>
using namespace std;

void merging(int arr[], int start1, int end1, int start2, int end2)
{
    // 1 3 4 6   8 3 5 2
    //         p     q

    int p = start1, q = start2;
    int tmparr[100] = {
        0,
    };
    int tmpidx = 0;

    while (p <= end1 && q <= end2)
    {
        if (arr[p] <= arr[q])
        {
            tmparr[tmpidx] = arr[p];
            tmpidx++;
            p++;
        }
        else
        {
            tmparr[tmpidx] = arr[q];
            tmpidx++;
            q++;
        }
    }
    if (p > end1)
    {
        for (int i = q; i <= end2; i++)
        {
            tmparr[tmpidx] = arr[q];
            tmpidx++;
            q++;
        }
    }
    else
    {
        for (int i = p; i <= end1; i++)
        {
            tmparr[tmpidx] = arr[p];
            tmpidx++;
            p++;
        }
    }
    for (int i = start1; i <= end2; i++)
    {
        arr[i] = tmparr[i - start1];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merging(arr, start, mid, mid + 1, end);
    }
}

int main()
{

    int n;
    int arr[100] = {
        0,
    };
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
