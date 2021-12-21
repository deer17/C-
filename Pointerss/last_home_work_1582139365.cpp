#include <iostream>

using namespace std; 


int* function(int arr[], int arrSize, int index)
{
	int* arrayPointer = new int[arrSize - index];
	for (int i = 0 + index, j = 0; i < arrSize; j++, i++)
	{
		arrayPointer[j] = arr[i];
	}
	return arrayPointer;
}

int main()
{
	const int arrSize1 = 10;
	int arr[arrSize1]{ 1,3,5,7,9,11,13,15,17,19	};

	int index = 3;

	int arrSize2 = arrSize1 - index;

	int* arr2 = function(arr, arrSize1, index);

	for (int i = 0; i < arrSize2; i++)
	{
		cout << arr2[i] << " ";
	}

	delete[] arr2;

}