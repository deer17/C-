#include<iostream>

using namespace std;

int main() {

	cout << R"( 1) Whats color banana ?
    a. red
    b. blue 
    c. yellow 
    d. orange )";


	cout << "You can use : \n";
	cout << "F- 50/50 \n";
	cout << "P- to call a friend \n";
	cout << "O- the help of hall \n";


	char question1;
	cin >> question1;

	if (question1 == 'C' || question1 == 'c') {
		cout << "Your choose : c. yellow \n";
		cout << "Correct \n";
		cout << "You win 100 azn! \n";
	}
	else if (question1 == 'F' || question1 == 'f') {
		cout << "You used help 50/50 \n";
		cout << "Choose variant A or C \n";
		cin >> question1;
		if (question1 == 'C' || question1 == 'c') {
			cout << "Your choose : c. yellow \n";
			cout << "Correct \n";
			cout << "You win 100 azn! \n";

		}
	}
	else if (question1 == 'P' || question1 == 'p') {
		cout << "You used call a friend \n";
		cout << "Your friend answer is C \n";
		cin >> question1;

		if (question1 == 'C' || question1 == 'c') {
			cout << "Your choose : c. yellow \n";
			cout << "Correct \n";
			cout << "You win 100 azn! \n";
		}
	}
	else if (question1 == 'o' || question1 == 'O') {
		cout << "You used the hall help \n";
		cout << "The hall answer is C \n";
		cin >> question1;

		if (question1 == 'C' || question1 == 'c') {
			cout << "Your choose : c. yellow \n";
			cout << "Correct \n";
			cout << "You win 100 azn! \n";
		}
	}
	else {
		cout << "Your choose\t";
		cout << "Incorrect \n";
		return 0;
	}





	cout << R"( 2) Choose the correct variant ?
    a. Planet Earth is square
    b. Moscow is the capital of Russia
    c. Dog has 6 fingers
    d. The frog is an insect )";

	cout << "You can use : \n";
	cout << "F- 50/50 \n";
	cout << "P- to call a friend \n";
	cout << "O- the help of hall \n";

	char question2;
	cin >> question2;

	if (question2 == 'B' || question2 == 'b') {
		cout << "Your choose : b. Moscow is the capital of Russia \n";
		cout << "Correct \n";
		cout << "You win 200 azn! \n";
	}
	else if (question2 == 'F' || question2 == 'f') {
		cout << "You used help 50/50 \n";
		cout << "Choose variant A or B \n";
		cin >> question2;
		if (question2 == 'B' || question2 == 'b') {
			cout << "Your choose : b. Moscow is the capital of Russia\n";
			cout << "Correct \n";
			cout << "You win 200 azn! \n";

		}
	}
	else if (question2 == 'P' || question2 == 'p') {
		cout << "You used call a friend \n";
		cout << "Your friend answer is B \n";
		cin >> question2;

		if (question2 == 'B' || question2 == 'b') {
			cout << "Your choose : b. Moscow is the capital of Russia \n";
			cout << "Correct \n";
			cout << "You win 200 azn! \n";
		}
	}
	else if (question2 == 'o' || question2 == 'O') {
		cout << "You used the hall help \n";
		cout << "The hall answer is B \n";
		cin >> question2;

		if (question2 == 'B' || question2 == 'b') {
			cout << "Your choose : b. Moscow is the capital of Russia \n";
			cout << "Correct \n";
			cout << "You win 200 azn! \n";
		}
		else {
			cout << "Your choose\t";
			cout << "Incorrect \n";
			return 0;
		}

	}
	cout << R"( 3) Who is an artist ?
    a. Vincent Van Gogh
    b. Mozart
    c. Newton
    d. Beethoven )";


	cout << "You can use : \n";
	cout << "F- 50/50 \n";
	cout << "P- to call a friend \n";
	cout << "O- the help of hall \n";

	char question3;
	cin >> question3;
	if (question3 == 'A' || question3 == 'a') {
		cout << "Your choose : a. Vincent Van Gogh \n";
		cout << "Correct \n";
		cout << "You win 300 azn! \n";
	}
	else if (question3 == 'F' || question3 == 'f') {
		cout << "You used help 50/50 \n";
		cout << "Choose variant A or C \n";
		cin >> question3;
		if (question3 == 'A' || question3 == 'a') {
			cout << "Your choose : a. Vincent Van Gogh \n";
			cout << "Correct \n";
			cout << "You win 300 azn! \n";

		}
	}
	else if (question3 == 'P' || question3 == 'p') {
		cout << "You used call a friend \n";
		cout << "Your friend answer is A \n";
		cin >> question3;

		if (question3 == 'A' || question3 == 'a') {
			cout << "Your choose : a. Vincent Van Gogh \n";
			cout << "Correct \n";
			cout << "You win 300 azn! \n";

		}
	}
	else if (question3 == 'o' || question3 == 'O') {
		cout << "You used the hall help \n";
		cout << "The hall answer is A \n";
		cin >> question3;

		if (question3 == 'a' || question3 == 'A') {
			cout << "Your choose : a. Vincent Van Gogh \n";
			cout << "Correct \n";
			cout << "You win 300 azn! \n";
		}
	}
	else {
		cout << "Your choose\t";
		cout << "Incorrect \n";
		return 0;
	}


	cout << R"( 4) Which of these is country ?
    a. Prague
    b. Barcelona
    c. London 
    d. Poland )";


	cout << "You can use : \n";
	cout << "F- 50/50 \n";
	cout << "P- to call a friend \n";
	cout << "O- the help of hall \n";

	char question4;
	cin >> question4;
	if (question4 == 'A' || question4 == 'a') {
		cout << "Your choose : a. Prague \n";
		cout << "Correct \n";
		cout << "You win 400 azn! \n";
	}
	else if (question4 == 'F' || question4 == 'f') {
		cout << "You used help 50/50 \n";
		cout << "Choose variant A or C \n";
		cin >> question4;
		if (question4 == 'A' || question4 == 'a') {
			cout << "Your choose : a. Prague \n";
			cout << "Correct \n";
			cout << "You win 400 azn! \n";

		}
	}
	else if (question4 == 'P' || question4 == 'p') {
		cout << "You used call a friend \n";
		cout << "Your friend answer is A \n";
		cin >> question4;

		if (question4 == 'A' || question4 == 'a') {
			cout << "Your choose : a. Prague \n";
			cout << "Correct \n";
			cout << "You win 400 azn! \n";
		}
	}
	else if (question4 == 'o' || question4 == 'O') {
		cout << "You used the hall help \n";
		cout << "The hall answer is A \n";
		cin >> question4;

		if (question4 == 'a' || question4 == 'A') {
			cout << "Your choose : a. Prague \n";
			cout << "Correct \n";
			cout << "You win 400 azn! \n";
		}
	}
	else {
		cout << "Your choose\t";
		cout << "Incorrect \n";
		return 0;
	}

	cout << R"( 5) Which of these birds cannot fly )?
    a. Ostrich
    b. Swallow 
    c. Sparrow 
    d. Crow )";


	cout << "You can use : \n";
	cout << "F- 50/50 \n";
	cout << "P- to call a friend \n";
	cout << "O- the help of hall \n";

	char question5;
	cin >> question5;
	if (question5 == 'A' || question5 == 'a') {
		cout << "Your choose : a. Ostrich \n";
		cout << "Correct \n";
		cout << "You win 500 azn! \n";
	}
	else if (question5 == 'F' || question5 == 'f') {
		cout << "You used help 50/50 \n";
		cout << "Choose variant A or C \n";
		cin >> question5;
		if (question4 == 'A' || question5 == 'a') {
			cout << "Your choose : a. Ostrich \n";
			cout << "Correct \n";
			cout << "You win 500 azn! \n";

		}
	}
	else if (question5 == 'P' || question5 == 'p') {
		cout << "You used call a friend \n";
		cout << "Your friend answer is A \n";
		cin >> question5;

		if (question5 == 'A' || question5 == 'a') {
			cout << "Your choose : a. Ostrich \n";
			cout << "Correct \n";
			cout << "You win 500 azn! \n";
		}
	}
	else if (question5 == 'o' || question5 == 'O') {
		cout << "You used the hall help \n";
		cout << "The hall answer is A \n";
		cin >> question5;

		if (question5 == 'a' || question5 == 'A') {
			cout << "Your choose : a. Ostrich \n";
			cout << "Correct \n";
			cout << "You win 500 azn! \n";
			cout << "Congratulations you Win!!! \n";

		}
	}
	else {
		cout << "Your choose\t";
		cout << "Incorrect \n";
	}

}