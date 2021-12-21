#include <iostream>

using namespace std;

int main()
{

	cout << "Cat pet Kitty \n";
	cout << "Energy is 0 -10 \n";
	cout << "Energiy of Kitty is 10 \n";
	int action;
	int energy = 4;
	int sleepAmount = 0;
	int foodAmount = 0;
	int playAmount = 0;
	do {
		cout << "Kitty's energy = " << energy << '\n';
		cout << "You can \n";
		cout << "1- Put to sleep the cat (+3 energiya) \n";
		cout << "2- Wake up the cat \n";
		cout << "3- Feed the cat (+3)\n";
		cout << "4- To play with Kitty (+3)\n";
		cout << "5- Leave the game \n";
		
		cin >> action;
		if (action == 1) {
			if (energy <= 7) {
			cout << "You  put to sleep the cat , Kitty is sleeping (+3 energiya)\n";
			energy += 3;
			sleepAmount++;
			do {
				
				cout << "Kitty's energy = " << energy << '\n';
				cout << "You can \n";
				cout << "1- Put to sleep the cat (+3 energiya) \n";
				cout << "2- Wake up the cat \n";
				cout << "3- Feed the cat (+3)\n";
				cout << "4- To play with Kitty (+3)\n";
				cout << "5- Leave the game \n";
				cin >> action;
				if (action == 1) {
					cout << "Kitty is sleeping , you can't put him sleep \n";
				}
				else if (action == 2) {
					cout << "Yo waked up a Kitty \n";
					break;
				}
				else if ((action == 3)|| (action ==4)) {
					cout << "Kitty is sleeping , wake up him \n";
				}
				else if (action == 5) {
					cout << "Leave the game \n";
					break;
				}
				else {
					cout << "Incorrect choose \n";
				}
			} while (true);
			}
			else {
				cout << "He doesn't want to sleep \n";
			}
		} else if (action == 2) {
			cout << "Kitty is not sleep , put him to sleep \n";

		} else if (action == 3) {
			
			
			
			
			
			do
			{

				cout << "Kitty's energy = " << energy << '\n';

				cout << "1- Milk (+1 energy)\n";
				cout << "2- Fish (+3energy) \n";
				cout << "3- Bread (+1 enegry)\n";
				cout << "4 -Back \n";
				cout << "5- Leave the game \n";

				cin >> action;
				if (action == 1) {
					if (energy <= 9) {

						energy += 1;
						foodAmount++;

						cout << "Kitty drank milk (+1 energy)\n";
						break;
					}
					else {
						cout << "Kitty is not hungry \n";
					}
				}
				else if (action == 2) {
					if (energy <= 7) {

						energy += 3;
						foodAmount++;
						cout << "Kitty ate a fish (+3 energy) \n";
						break;
					}
					else {
						cout << "Kitty is not hungry \n";
					}
				}
				else if (action == 3) {
					if (energy <= 9) {
						energy += 1;
						foodAmount++;
					cout << "Kitty ate bread (+1 energy)\n";
					break;
					}
					else {
						cout << "Kitty is not hungry \n";
					}
				}
				else if (action ==4) {
					cout << "Back \n";
					break;
				}
				else if (action == 5) {
					cout << "Leave the game \n";
					break;
				}
				else {
					cout << "Incorrect choose \n";
				}
			} while (true);


		} else if (action == 4) {
			
			do
			{
				cout << "Kitty's energy = " << energy << '\n';
				cout << "Play with Kitty \n";
				cout << "1-Play with ball(-2 energy) \n";
				cout << "2- To stroke head of cat (-1 energy) \n";
				cout << "3- Give pet's little toy (-2 energy)\n";
				cout << "4- Back \n";
				cout << "5- Leave the game \n";

				cin >> action;
				if (action == 1) {
					if (energy >= 2) {
						energy -= 2;
						playAmount++;
					cout << "Kitty plays with a ball (-2 energy)\n";

					break;
					}
					else {
						cout << "Kitty doesn't want to play, Kitty is hungry\n";
					}
				}
				else if (action == 2) {
					if (energy >= 1) {
						energy -= 1;
						playAmount++;
					cout << "You stroked head of cat(-1 energy) \n";
					break;
					}
					else {
						cout << "Kitty doesn't want to play , Kitty is hungry\n";
					}
				}
				else if (action == 3) {
					if (energy >= 2) {
						energy -= 2;
						playAmount++;
					cout << "Kitty played with his toy (-2 energy) \n";
					break;
					}
					else {
						cout << "Kitty doesn't want to play, Kitty is hungry \n";
					}
				}
				else if (action == 4) {
					cout << "Back \n";
					break;
				}
				else if (action == 5) {
					cout << "Leave the game \n";
					break;
				}
				else {
					cout << "Incorrect choose \n";
				}

			} while (true);
		}
		else if (action ==5 ){
			cout << "You leave the game \n";
			break;
		}
		else {
			cout << "Incorrect choose \n";
		}
		
	} while (action !=5);

	cout << "sleepAmount = " << sleepAmount << '\n';
	cout << "foodAmount = " << foodAmount << '\n';
	cout << "playAmount = " << playAmount << '\n';
}