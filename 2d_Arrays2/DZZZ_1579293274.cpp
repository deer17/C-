#include <iostream>

using namespace std;

int main()
{
	const int rows = 2;
	const int cols = 5;

	int arr1[rows][cols];

	const int size = 10;
	int arr2[size];
	int calculator = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr1[i][j];

		}
	}

	cout << arr1[0][0] << ' ';
	arr2[calculator++] = arr1[0][0];

	for (int k = 0; k < rows; k++)
	{
		for (int l = 0; l < cols; l++)
		{
			bool duplicate = false;
			for (int g = 0; g < calculator; g++)
			{
				if (arr2[g] == arr1[k][l])
					duplicate = true;
			}

			if (!duplicate)
			{
				cout << arr1[k][l] << ' ';
				arr2[calculator++] = arr1[k][l];
			}

		}


	}
}