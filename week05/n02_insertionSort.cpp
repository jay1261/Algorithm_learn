// insertion sort 삽입 정렬
#include <iostream>
using namespace std;

int main()
{

	int n = 10;
	int arr[10] = {3, 5, 9, 8, 6, 5, 2, 1, 7, 10};

	for (int i = 0; i < n; i++)
	{

		for (int j = i; j > 0; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				int tmp;
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
				for (int i = 0; i < n; i++)
				{
					cout << arr[i] << " ";
				}
				cout << endl;
			}
			else
				break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
