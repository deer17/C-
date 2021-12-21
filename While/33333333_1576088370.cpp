#include <iostream>

using namespace std;

int main()
{
	
	
	int a = 1;
	while (a < 1000)
	{
		cout << a; 
		cout << "\n";
		a = a * 2;
	}
	
	int a;
	int b;
	int d;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	d = 0;
	--b;
	while (a < b)	
	{
		if (a % 2 == 0) {
			d += (a * 0) + 1;
		}
		a++;
	}
	cout << d;
	
}