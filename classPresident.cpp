#include <iostream>

using namespace std;
// 5
// 2 3 1 7 3
// 4 1 9 6 8
// 5 5 2 4 4
// 6 5 2 6 7
// 8 4 2 2 2

int main()
{
	int n;
	cin >> n;
	int arr[n][n];
	int students[n] = {
		0,
	};
	//배열 넣기
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	//

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp = arr[i][j];
			for (int k = 0; k < n; k++)
			{
				if (tmp == arr[k][j])
				{
					students[i]++;
				}
			}
		}
	}

	int max = 0, index = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << students[i] << " ";
		if (students[i] > max)
		{
			max = students[i];
			index = i;
		}
	}
	cout << index;

	return 0;
}