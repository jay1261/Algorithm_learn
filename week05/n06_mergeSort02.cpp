// 합병정렬
// 절반으로 나누고, 합친다~
#include <iostream>
using namespace std;

void merging(int arr[], int start1, int end1, int start2, int end2);
void mergeSort(int arr[], int start, int end);

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 3 7 5 4   9 2 1 5
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
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

void merging(int arr[], int start1, int end1, int start2, int end2)
{
    // 3 7 5 4  9 2 1 5
    //     p            q
    int p = start1, q = start2;
    int tempindex = 0;
    int temparr[100000];

    while (p <= end1 && q <= end2)
    {
        if (arr[p] <= arr[q])
        {
            temparr[tempindex++] = arr[p];
            p++;
        }
        else
        {
            temparr[tempindex++] = arr[q];
            q++;
        }
    }
    if (p > end1)
    {
        for (int i = q; i <= end2; i++)
        {
            temparr[tempindex++] = arr[q];
            q++;
        }
    }
    else
    {
        for (int i = p; i <= end1; i++)
        {
            temparr[tempindex++] = arr[p];
            p++;
        }
    }
    for (int i = start1; i <= end2; i++)
    {
        arr[i] = temparr[i - start1];
    }
}
