#include<iostream>
#include<iomanip>

using namespace std;

void arrFill(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
}

void arrSort(int arr_n1[], int size)
{
	int count = size - 1;

	for (int a = 0; a < count; a++)
	{
		int  minElement = a;
		for (int i = a + 1; i < size; i++)
		{
			if (arr_n1[i] < arr_n1[minElement]) {
				minElement = i;

			}
		}

		if (minElement != a) {
			int tmp = arr_n1[a];
			arr_n1[a] = arr_n1[minElement];
			arr_n1[minElement] = tmp;
		}
	}

}

bool arrSearch(int arr_n1[], int arr_n2[], int size)
{

	for (int i = 0; i < size; i++)
	{
		if (arr_n1[i] != arr_n2[i]) {
			cout << '\n';
			cout << "Arrays are not the same \n";
			return false;
		}
	}
	cout << '\n';
	cout << "Arrays are same \n";
	return true;
}


int main()
{
	int const arrSize = 5;
	int arr1[arrSize];
	int arr2[arrSize];

	cout << '\n';
	cout << "Enter the first array \n";
	arrFill(arr1, arrSize);
	cout << '\n';
	cout << "Enter the second array \n";
	arrFill(arr2, arrSize);

	arrSort(arr1, arrSize);
	arrSort(arr2, arrSize);
	cout << boolalpha << arrSearch(arr1, arr2, arrSize);




}