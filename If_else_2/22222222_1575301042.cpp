#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	char c;


	cout << " ";
	cin >> a;
	cin >> c;

	cout << " ";
	cin >> b;

	if (c == '+' ){
		cout << a + b << '\n';
	} if ((c == '/') && (b == 0)) {
		cout << "Na 0 delit nelza \n";



	} else if (c == '-') {
		cout << a - b << '\n';
	} else if (c == '*') {
		cout << a * b << '\n';

	} else if (c == '/') {
		cout << a / b << '\n';
	
	} else {
		cout << "Error \n";
	}


}