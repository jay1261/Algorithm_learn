// 세 개의 숫자 중 최댓값 찾기

// 입력
// 첫째 줄에 3개의 정수a,b,c 가 주어진다. (0≤a,b,c≤10,000)

// 출력
// 첫째 줄에 a,b,c 중 최댓값을 출력한다.

// 예제 입력
// 10 2 5
// 예제 출력
// 10

#include <stdio.h>

int main()
{

    // Please Enter Your Code Here
    int a, b, c;
    int max = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("%d", max);

    return 0;
}