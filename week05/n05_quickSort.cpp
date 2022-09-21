#include <iostream>
using namespace std;

int getLeft(int arr[], int start, int end, int pivot, int result[]);
int getRight(int arr[], int start, int end, int pivot, int result[]);
void quickSort(int arr[], int start, int end);

int main()
{
    int n;
    int arr[100] = {
        0,
    };

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int getLeft(int arr[], int start, int end, int pivot, int result[])
{
    // 3 5 7 9   2 4 6 7
    // p
    // 피봇 보다 작거나 같은 애들은 왼쪽으로 보내기
    int index = 0;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            result[index++] = arr[i];
        }
    }
    return index;
}

int getRight(int arr[], int start, int end, int pivot, int result[])
{
    int index = 0;

    for (int i = start; i <= end; i++)
    {
        if (arr[i] > pivot)
        {
            result[index++] = arr[i];
        }
    }
    return index;
}

void quickSort(int arr[], int start, int end)
{
    // 기저조건
    // 피봇 설정
    // 왼쪽 옮기기, 오른쪽 옮기기
    if (start >= end)
    {
        return;
    }

    int pivot = arr[start];
    int left[100], right[100];

    int leftIndex = getLeft(arr, start + 1, end, pivot, left);
    int rightIndex = getRight(arr, start + 1, end, pivot, right);

    // left, right를 arr에 합치기
    // 3 5 7 9   2 1 6 7
    // 1 2 3 5 7 9 6 7
    //     p

    // for(int i=start; i<leftIndex; i++){
    //   arr[i] = left[i-start];
    // }
    // arr[leftIndex] = pivot;

    // for(int i=leftIndex+1; i<end; i++){
    //   arr[i] = right[i-leftIndex-1];
    // }
    for (int i = 0; i < leftIndex; i++)
    {
        arr[start + i] = left[i];
    }

    arr[start + leftIndex] = pivot;

    for (int i = 0; i < rightIndex; i++)
    {
        arr[start + leftIndex + 1 + i] = right[i];
    }
    // 재귀 호출
    quickSort(arr, start, start + leftIndex - 1);
    quickSort(arr, start + leftIndex + 1, end);
}