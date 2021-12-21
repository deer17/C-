#include <iostream>

using namespace std;

int main()
{
	
	int mas1[5] = { 1,3,6,7,9 };
	int mas2[5] = { 10,2,6,5,20 };
	int mas3[5];
	for (int i = 0; i < 5; i++)
	{
		mas3[i] = mas1[i] + mas2[i];

	}
	for (int i = 0; i < 5; i++)
	{
		cout << mas3[i] << ' ';
	}
	


	int mas[10];
	int max;
	int min;
	cin >> mas[0];
	max = mas[0];
	min = mas[0];

	for (int i = 1; i < 10; i++)
	{
		cin >> mas[i];
		if (mas[i] > max)
		{
			max = mas[i];
		}
		if (mas[i] < min)
		{
			min = mas[i];
		}
	}
	cout << "max = " << max << '\n';
	cout << "min = " << min << '\n';
}