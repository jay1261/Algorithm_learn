#include <stdio.h>
//배수의 개수 구하기

// 입력
// 첫 번째 줄에 A, B, C가 주어진다. (1 <= A, B, C <= 1000)

// 출력
// A부터 B까지 숫자 중에서 C의 배수의 개수를 출력한다.

// 예제 입력
// 3 9 2
// 예제 출력
// 3

int main()
{

    // Please Enter Your Code Here
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int count = 0;

    if ((b - a) >= 0)
    {
        for (int i = a; i <= b; i++)
        {
            if (i % c == 0)
            {
                count++;
            }
        }
    }

    else
    {
        for (int i = b; i <= a; i++)
        {
            if (i % c == 0)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}