#include <stdio.h>
// 입력
// 첫째 줄에 자연수 N이 주어진다.
// 출력
// 첫째 줄에 N이 짝수라면 “even”, N이 짝수가 아니라면 “not even"를 출력한다.

// 예제 입력
// 10
// 예제 출력
// even
int main()
{

    // Please Enter Your Code Here
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("not even");
    }
    return 0;
}