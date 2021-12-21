#include <iostream>

using namespace std;

int main()
{
	const int arrSize1 = 3;
	int arrOne[arrSize1]{ 10,20,30 };

	const int arrSize2 = 4;
	int arrTwo[arrSize2]{ 40,50,60,70 };


	int arrSize3 = arrSize1 + arrSize2;
	int* arrThree = new int[arrSize3];
	for (int i = 0; i < arrSize1; i++)
	{
		arrThree[i] = arrOne[i];
	}
	int j = 0;
	for (int i = arrSize1; i < arrSize3; i++)
	{
		arrThree[i] = arrTwo[j];
		j++;
	}


	cout << "\nPrint the third array\n";
	for (int i = 0; i < arrSize3; i++)
	{
		cout << arrThree[i] << " ";
	}

	delete[] arrThree;
}