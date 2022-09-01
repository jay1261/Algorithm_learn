#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
// 입력
// 첫째 줄에 N과 K가 빈칸을 사이에 두고 주어진다. N은 1 이상 10,000 이하이다. K는 1 이상 N 이하이다.

// 출력
// 첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다. 만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는 0을 출력하시오.

// 예제 입력
// 6 3
// 예제 출력
// 3
int main()
{

    // Please Enter Your Code Here
    int n, k;
    list<int> a;
    list<int>::iterator iter = a.begin();

    cin >> n;
    cin >> k;

    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            a.push_front(i);
        }
    }

    if (a.size() < k)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            iter++;
        }
        cout << *iter << endl;
    }
    return 0;
}