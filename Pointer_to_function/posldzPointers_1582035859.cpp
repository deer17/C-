#include <iostream>

using namespace std;

int numberX2(int a)
{
	return a * 2;
}

typedef int (*func)(int);

int arrayPrint(int number[], int arrSize, func box)
{
	int summa = 0;
	for (int i = 0; i < arrSize; i++)
	{
		summa += box(number[i]);
	}
	return summa;
}


int main()
{
	const int arrSize = 5;
	int arr[arrSize]{ 1,2,3,4,5 };

	cout << arrayPrint(arr, arrSize, numberX2) << '\n';

}