// offset
// 문제
// 5x5 2차원 배열이 주어질 때 어떤 원소가 상하좌우에 있는 원소보다 작을 때 해당 위치에 * 을 표시하는 프로그램을 작성하시오. 경계선에 있는 수는 상하좌우 중 존재하는 원소만을 비교한다.

// 입력
// 5x5 행렬의 정보가 25 개의 수로 주어진다. 각 수는 0 에서 9 사이 수이다.

// 출력
// *를 포함한 행렬을 출력예의 형식으로 출력한다.

// 예제 입력
// copy3 4 1 4 9
// 2 9 4 5 8
// 9 0 8 2 1
// 7 0 2 8 4
// 2 7 2 1 4
// 예제 출력
// 3 4 * 4 9
// * 9 4 5 8
// 9 0 8 2 *
// 7 0 2 8 4
// * 7 2 * 4

#include <iostream>

using namespace std;

int main()
{

    int arr[5][5] = {
        0,
    };
    int u, r, l, d;

    //배열 받기
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    //시작
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            u = 0, r = 0, l = 0, d = 0;
            //상
            if (i > 0 && arr[i - 1][j] > arr[i][j] || i == 0)
            {
                u = 1;
            }
            //하
            if (i < 4 && arr[i + 1][j] > arr[i][j] || i == 4)
            {
                d = 1;
            }
            //좌
            if (j > 0 && arr[i][j - 1] > arr[i][j] || j == 0)
            {
                l = 1;
            }
            //우
            if (j < 4 && arr[i][j + 1] > arr[i][j] || j == 4)
            {
                r = 1;
            }
            int tmp = u + d + l + r;
            // cout << tmp << " ";
            if (tmp == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
