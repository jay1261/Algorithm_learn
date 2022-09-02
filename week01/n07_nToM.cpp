// n부터 m 까지 출력하는 문제
// 입력
// 첫째 줄에 자연수 N과 자연수 M이 공백을 가지고 주어진다. (N ≤ M ≤ 1,000)

// 출력
// 첫째 줄에 N부터 M까지의 자연수를 공백을 사이에 두고 차례대로 출력한다. (단, 한 줄에 최대 8개씩 출력해야 한다.)

// 예제 입력
// 1 7
// 예제 출력
// 1 2 3 4 5 6 7

#include <stdio.h>

int main()
{

    // Please Enter Your Code Here
    int n, m;
    scanf("%d %d", &n, &m);
    int count = 0;

    for (int i = n; i <= m; i++)
    {
        printf("%d ", i);
        count++;

        if (count == 8)
        {
            count = 0;
            printf("\n");
        }
    }

    return 0;
}