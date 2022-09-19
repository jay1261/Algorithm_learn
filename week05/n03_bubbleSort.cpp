// bubble sore 버블 정렬
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int arr[10] = {3, 1, 7, 5, 9, 2, 10, 4, 6, 8};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
