#include <iostream>
#include <iomanip>

using namespace std;

bool  arrayRepeat(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < size; j++)
	{
		for (int i = j + 1; i < size; i++)
		{
			if (arr[j] == arr[i])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	const int size = 7;
	int arr[size];

	cout << boolalpha << arrayRepeat(arr, size);
}