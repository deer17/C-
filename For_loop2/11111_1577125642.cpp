#include <iostream>

using namespace std;

int main()
{
	
	int length;
	int width;
	cout << "Enter lenght : ";
	cin >> length;
	cout << "Enter width : ";
	cin >> width;

	for (int a = 1; a <= length; a++)
	{
		for (int b = 1; b <= width; b++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	




	int length;
	int width;
	cout << "Enter length : ";
	cin >> length;
	cout << "Enter width : ";
	cin >> width;
	for (int a = 1; a <= length; a++)
	{
		
		for (int b = 1; b <= width;b++)
		{
			if ((a == length) || (a == 1) || (b == 1) || (b == width)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
			
		}
	
		cout << "\n";
	}
}