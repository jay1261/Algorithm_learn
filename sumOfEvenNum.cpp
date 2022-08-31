#include <stdio.h>
#include <iostream>
// 입력
// 첫째 줄에 N이 주어진다. (1 <= N <= 2000)

// 출력
// 1부터 N까지의 숫자 중 짝수의 합을 출력한다.

// 예제 입력
// 2
// 예제 출력
// 2
using namespace std;
int main()
{

    // Please Enter Your Code Here
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}