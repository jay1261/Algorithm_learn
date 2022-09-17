// Selection sort 선택 정렬
#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	int arr[10] = {10, 5, 4, 9, 3, 6, 7, 22, 19, 11};

	for (int i = 0; i < n; i++)
	{
		int min = arr[i];
		int minindex = i;
		for (int j = i; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				minindex = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
