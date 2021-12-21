#include<iostream>
#include<iomanip>

using namespace std;


template<typename T>
void arrayFill(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];

	}
}

template<typename T>
void arrayPrint(T arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';

	}

}

template<typename T1, typename T2>
void arrSearch(T1 arr[], int size, T2 number)
{
	for (int i = 0; i< size; i++)
	{
		if (number == arr[i])
		{
			cout << i;
			return;
		}
	}
}


int main()
{
	const int size = 5;

	int searchNumber = 7;
	int arr1[size];

	//	char searchNumber = '+';
	//	char arr1[size];

	//	double searchNumber = 7.3;
	//	double arr1[size];


	cout << "\nFill the array\n";
	arrayFill(arr1, size);
	cout << "\nPrint the array\n";
	arrayPrint(arr1, size);
	cout << "\n\n";
	arrSearch(arr1, size, searchNumber);

}
