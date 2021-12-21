#include <iostream>

using namespace std;

int main()
{
	int login;
	int password;
	cout << "login \n";
	cin >> login;
	cout << "password\n";
	cin >> password;
	if ((login == 9797) && (password == 7777)) {
		cout << "Hello \n";
	}
	else {
		cout << "Not true! ";
	}
	


	int rain;
	int wind;
	cout << "Is it rain : 1 true, 0 false \n";
	cin >> rain;
	cout << "Is it wind : 1 true , 0 false \n";
	cin >> wind;

	if (rain == 1) {
		cout << "Take an umbrella \n";
	}
	else if (rain == 0) {
		cout << " ";

	}
	if (wind == 1) {
		cout << "Take a cap\n";

	}
	else if (wind == 0) {
		cout << " ";
	}
	if ((rain == 0) && (wind == 0)) {
		cout << "OK";

	}
	

	
	 
}