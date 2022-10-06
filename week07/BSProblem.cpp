// 이진 탐색 문제
// 문제
// n개의 오름차순으로 정렬된 숫자가 주어지고, 그 후 q개의 질문이 주어진다. 각각의 질문은 특정 숫자가 n개의 숫자 내에 존재하는지를 판별하는 것이다. 모든 q개의 질문에 대하여 답을 하는 프로그램을 작성하시오.

// 입력
// 첫 번째 줄에 숫자의 개수 n, 그리고 질문의 개수 q가 주어진다 ( 1 ≤ n ≤ 100,000, 1 ≤ q ≤ 100,000) 이는 오름차순으로 정렬되어 주어진다. 두 번째 줄에 n개의 숫자가 주어진다. 세 번째 줄에 q개의 질문이 주어진다. 각 수는 21억보다 작은 정수다.

// 출력
// 각 질문에 대하여 숫자가 존재하면 YES, 아니면 NO를 한 줄에 하나씩 출력한다.

// 예제 입력
// 10 4
// 1 2 4 8 10 11 12 14 15 19
// 4 5 8 17
// 예제 출력
// YES
// NO
// YES
// NO
#include <iostream>
using namespace std;

// 1 3 5 7 9 10
// s   m     e

int binarySearch(int arr[], int start, int end, int value)
{
    // start 부터 end 까지 중에서 value를 찾아 반환

    if (start > end)
        return -1;
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
        else if (arr[mid] > value)
            return binarySearch(arr, start, mid - 1, value);
        else
            return binarySearch(arr, mid + 1, end, value);
    }
}

int main()
{
    int n, q, m;
    int arr[100000];
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> m;
        int result = binarySearch(arr, 0, n - 1, m);
        // cout << result << endl;
        if (result == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}