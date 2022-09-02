#include <stdio.h>
// 입력
// 첫째 줄부터 셋째 줄까지 각 줄에 각각 한 번 던진 윷짝들의 상태를 나타내는 네 개의 정수(0 또는 1)가 빈칸을 사이에 두고 주어진다.

// 출력
// 첫째 줄부터 셋째 줄까지 한 줄에 하나씩 결과를 도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E로 출력 한다.

// 예제 입력
// 0 1 0 1
// 1 1 1 0
// 0 0 1 1

// 예제 출력
// B
// A
// B

int main()
{

    // Please Enter Your Code Here
    int a, b, c, d, sum;

    for (int i = 0; i < 3; i++)
    {

        scanf("%d %d %d %d", &a, &b, &c, &d);

        sum = a + b + c + d;

        if (sum == 0)
        {
            printf("D\n");
        }
        else if (sum == 1)
        {
            printf("C\n");
        }
        else if (sum == 2)
        {
            printf("B\n");
        }
        else if (sum == 3)
        {
            printf("A\n");
        }
        else if (sum == 4)
        {
            printf("E\n");
        }
    }

    return 0;
}