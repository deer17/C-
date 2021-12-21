#include <iostream>

using namespace std;


/*
		ДОМАШНЕЕ ЗАДАНИЕ:
		1. Напишите функцию, которая принимает в качестве параметров
		две Си-строки и возвращает содержимое первой строки,
		которая дополнена второй строкой слева, справа или
		с обеих сторон в зависимости от третьего параметра
*/

size_t slength(char str[])
{
	size_t result = 0;

	while (str[result] != '\0')
	{
		result++;
	}

	return result;
}

char* method(char firstArray[], char secondArray[], int operation)
{
	enum { left = 1, middle, right };


	size_t size1 = slength(firstArray);
	size_t size2 = slength(secondArray);
	int sumSize2 = size1 + size2;
	int sumSize3 = size2 + size1 + size2;

	char* arr1 = new char[sumSize2 + 1];

	switch (operation)
	{
	case right:

		
		for (int i = 0; i < size1; i++)
		{
			arr1[i] = firstArray[i];
		}
		for (int i = size1, j = 0; i < sumSize2; j++, i++)
		{
			arr1[i] = secondArray[j];
		}
		arr1[sumSize2] = '\0';
		return arr1;
		break;

	case left:
	
		for (int i = 0; i < size2; i++)
		{
			arr1[i] = secondArray[i];
		}
		for (int i = size2, j = 0; i < sumSize2; j++, i++)
		{
			arr1[i] = firstArray[j];
		}
		arr1[sumSize2] = '\0';
		return arr1;
		break;
	case middle:
		char* arr1 = new char[sumSize3 + 1];
		for (int i = 0; i < size2; i++)
		{
			arr1[i] = secondArray[i];
		}
		for (int i = size2, j = 0; i < sumSize2; j++, i++)
		{
			arr1[i] = firstArray[j];
		}
		for (int i = sumSize2, j = 0; i < sumSize3; j++, i++)
		{
			arr1[i] = secondArray[j];
		}
		arr1[sumSize3] = '\0';
		return arr1;
		break;
	}
	return nullptr;
}


int main()
{
	char arr1[] = "Machine ";
	char arr2[] = "Code ";
	int left = 1;
	int middle = 2;
	int right = 3;

	char* total = method(arr1, arr2, middle);

	cout << total;

	delete[] total;
}