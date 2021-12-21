#include <iostream>
#include <iomanip>

using namespace std;

void arrayFill(int arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void arrayPrint(int arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
	}
}

void arrayFill(double arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void arrayPrint(double arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
	}
}

void arrayFill(char arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void arrayPrint(char arr[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
	}
}



int main()
{
	const int row = 4;
	const int size = 2;

	do
	{
		cout << "\n Choose :\n";
		cout << "1.Overloading function int \n";
		cout << "2.Overloading function char \n";
		cout << "3.Overloading function double \n";
		cout << "4.Exit \n";
		int selection;
		cin >> selection;
		if (selection == 1) {
			cout << "You chose overloading function int\n";

			int arr[size][row];
			cout << "Fill Array[" << size << "][" << row << "]\n";
			arrayFill(arr, size);
			cout << "Print Array[" << size << "][" << row << "]\n";
			arrayPrint(arr, size);
		}
		else if (selection == 2) {
			cout << "You chose overloading function char\n";

			char arr[size][row];
			cout << "Fill Array[" << size << "][" << row << "]\n";
			arrayFill(arr, size);
			cout << "Print Array[" << size << "][" << row << "]\n";
			arrayPrint(arr, size);
		}
		else if (selection == 3) {
			cout << "You select Overloading function double\n";

			double arr[size][row];
			cout << "Fill Array[" << size << "][" << row << "]\n";
			arrayFill(arr, size);
			cout << "Print Array[" << size << "][" << row << "]\n";
			arrayPrint(arr, size);
		}
		else if (selection == 4) {
			cout << "You exit\n";
			break;
		}
		else {
			cout << "Wrong choosing\n";
		}
	} while (true);

}

