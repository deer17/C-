#include <iostream>

using namespace std;

int main()
{

	int input;
	int output = 0;
	int iterCount;
	const int arrSize = 7;
	const int arrSize1 = 6;
	const int arrSize2 = 5;
	int arr[arrSize] = { 3,5,8,7,9,10,4 };
	int arr1[arrSize1] = { 2,4,3,5,1,10 };
	int arr2[arrSize2];
	bool operation = false;
	iterCount = arrSize2 - 1;
	while (output != 5)
	{
		cout << "Enter number : \n";
		cin >> input;
		for (int i = 0; i < arrSize2; i++)
		{
			if (input == arr2[i]) {
				cout << "This number is in the third array \n";
				operation = true;
			}
		}
		if (operation) {
			operation = false;
			continue;
	}
		for (int i = 0; i < arrSize; i++) {
			if (input == arr1[i]) {
				cout << "This number is in the second array, it can't copy \n";
				operation = true;
			}
		}
		if (operation) {
			operation = false;
			continue;

		}
		for (int i = 0; i < arrSize1; i++) {
			if (input == arr[i] && input != arr1[i] && (arr1[i] != arr2[i])) {
				cout << "This number is in the first array, you copied \n";
				arr2[output] = input;
				output++;
			}

		}

	}

	for (int i = 0; i < iterCount; i++)
	{
		for (int j = 0; j < iterCount; j++)
		{
			if (arr2[j] > arr2[j + 1]) {
				int tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < arrSize2; i++)
	{
		cout << arr2[i] << '\n';
	}

	




	

}