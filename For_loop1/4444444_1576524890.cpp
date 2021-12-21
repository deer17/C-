#include <iostream>

using namespace std;

int main()
{

	
	char begining;
	char starting;
	char ending;
	cout << "Enter the beginning of character  \n";
	cin >> begining;

	

	if (('a' <= begining && begining <= 'z') || ('A' <= begining && begining <= 'Z')) {
		cout << "Enter the ending of character";
		cin >> ending;

	if (('a' <= ending && ending <= 'z') || ('A' <= ending && ending <= 'Z')) {
		ending++;
	do
	{

	  if (begining == ending) {
	    cout << "Correct \n";
		break;
	}
	cout << "Enter the diapason of sequence \n";
	cin >> starting;

	    if (starting == begining) {
			begining++;

		}
		else {
		cout << "Incorrect sequence \n";
		break;
   }

	} while (true);
		}
		else {
			cout << "Incorrect ending of diapason\n";
		}
	}
	else {
		cout << "Incorrect begining of diapason \n";
	}








}