// 나무 자르기
// 이전다음
// 문제
// 얼마전에 큰맘 먹고 새로운 절단기를 구입한 목수 윤성이는 나무 M미터가 필요하다.

// 절단기는 다음과 같이 동작한다. 먼저, 윤성이는 절단기에 높이 H를 지정해야 한다. 높이를 지정하면 톱날이 땅으로부터 H미터 위로 올라간다. 그 다음, 한 줄에 연속해있는 나무를 모두 절단해버린다. 따라서, 높이가 H보다 큰 나무는 H 위의 부분이 잘릴 것이고, 낮은 나무는 잘리지 않을 것이다. 예를 들어, 한 줄에 연속해있는 나무의 높이가 20, 15, 10, 17이라고 하자. 상근이가 높이를 15로 지정했다면, 나무를 자른 뒤의 높이는 15, 15, 10, 15가 될 것이고, 윤성이는 길이가 5인 나무와 2인 나무를 들고 집에 갈 것이다. (총 7미터를 집에 들고 간다)

// 목수 윤성이는 과유불급을 좌우명으로 삼고 있기에 나무를 필요한 만큼만 가져가려고 한다. 이때 적어도 M미터의 나무를 가져가기 위해서 절단기에 설정할 수 있는 높이의 최대값을 구하는 프로그램을 작성하라

// 입력
// 첫째 줄에 나무의 수 N과 윤성이가 집으로 가져가려고 하는 나무의 길이 M이 주어진다. (1 ≤ N ≤ 1,000,000, 1 ≤ M ≤ 2,000,000,000)

// 둘째 줄에는 나무의 높이가 주어진다. 나무의 높이의 합은 항상 M을 넘기 때문에, 윤성이는 집에 필요한 나무를 항상 가져갈 수 있다. 높이는 1,000,000,000보다 작거나 같은 자연수이다.

// 출력
// 적어도 M미터의 나무를 집에 가져가기 위해서 절단기에 설정할 수 있는 높이의 최대값을 출력한다.

// 예제 입력
// 4 7
// 20 15 10 17
// 예제 출력
// 15

#include <iostream>
using namespace std;
// 4 7
// 20 15 10 17
// 15 -> 5 + 0 + 0 + 2

// ***** 높은 숫자의 합에 관련한 부분으로 int를 반환하면 오버플로우가 일어나는 문제가 있었다.
long long int cutTrees(int arr[], int n, int height)
{
    // 나무를 자르고 남은 길이를 반환하는 함수
    // n은 나무 개수
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - height) >= 0)
        {
            sum += arr[i] - height;
        }
    }
    return sum;
}

int binarySearch(int arr[], int n, int start, int end, long long value)
{
    // value는 m(가져가려는 나무 길이 가 되고)
    // start와 end가 붙을 때 까지 진행, start는 m미만, end는 m이상
    // start 는 0 end 는 나무중에 제일 높은 나무
    // cout << "start : " << start << " end : " << end << endl;
    if (start >= end)
        return end;
    if (start + 1 == end)
    {
        // if(value == 0) return end;
        return start;
    }
    // 20 20 20 20
    // 4 8 12 16 ...
    // 3 7 10
    else
    {
        int mid = (start + end) / 2;
        // if(cutTrees(arr, n, mid) == value) return mid;
        if (cutTrees(arr, n, mid) < value)
            return binarySearch(arr, n, start, mid, value);
        else
            return binarySearch(arr, n, mid, end, value);
    }
}

int main()
{

    int n, m;
    int *trees = new int[1000000];

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }

    // int tmp = cutTrees(trees, n, 0);
    // cout << tmp;
    int tallestTree = trees[0];
    for (int i = 0; i < n; i++)
    {
        if (tallestTree < trees[i])
        {
            tallestTree = trees[i];
        }
    }
    // cout << tallestTree << endl;
    int result = binarySearch(trees, n, 0, tallestTree, m);
    cout << result << endl;

    return 0;
}