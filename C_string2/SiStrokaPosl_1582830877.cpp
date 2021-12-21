#include <iostream>

using namespace std;

size_t slength(char array[])
{
	size_t	calculator = 0;

	while (array[calculator] != '\0')
	{
		calculator++;
	}
	return calculator;
}


char* operate(char array[])
{
	size_t size = slength(array);
	int operationStart = 0, operationEnd = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] != ' ') {
			operationStart = i;
			break;
		}
	}

	for (int i = size - 1; i > 0; i--)
	{
		if (array[i] != ' ') {
			operationEnd = i;
			break;
		}
	}

	int newSize = 0;
	for (int i = operationStart; i <= operationEnd; i++)
		newSize++;

	char* newArray = new char[newSize + 1];
	for (int i = operationStart, b = 0; b < newSize; b++, i++)
		newArray[b] = array[i];

	newArray[newSize] = '\0';
	return newArray;
}

int main()
{
	char name[] = "                   Code              ";

	char* total = operate(name);
	cout << "|" << total << "|";

	delete[] total;
}