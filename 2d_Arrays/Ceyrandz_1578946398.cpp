#include <iostream>

using namespace std;

int main()
{


	const int size = 5;
	bool heart1 = false, heart2 = false, heart3 = false;
	int number = 1;
	int health = 10;
	int row, col;
	int game[size][size] = { };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			game[i][j] = number++;

		}
	}


	do
	{
		row = 0, col = 0;
		cout << "You are in the 0 coordinate - " << game[row][col] << '\n';
		cout << "Your health is - " << health << '\n';
		cout << "Let's move \n Along cow and col\n\n";
		cout << "Enter row :\n";
		cin >> row;
		cout << "Enter col :\n";
		cin >> col;
		if (row == 1 && col == 0)
		{


			do
			{
				cout << "You found a heart\n\n";
				if (health == 5)
				{
					if (heart1 == false)
					{
						cout << "You used health\n\n";
						health += 5;
						heart1 = true;
					}
					else {
						cout << "You already get a heart\n";
					}

				}
				else {
					cout << "You have full health, you needn't a heart\n\n";
				}
				row = 1; col = 0;
				cout << "You are in the 5 coordinate " << game[row][col] << '\n';

				cout << "Your health is  " << health << '\n';
				cout << "Make a move\ncow and col\n\n";
				cout << "Enter row :\n";
				cin >> row;
				cout << "Enter col :\n";
				cin >> col;
				if (row == 0 && col == 0)
				{
					break;
				}
				else if (row == 1 && col == 1) {
					health -= 5;
					cout << "You stepped a mine , you lost your 5 health\n";

					do
					{
						cout << "You are in the 6 coordinate " << game[row][col] << "\n";
						row = 1; col = 1;
						cout << "You are in  " << game[row][col] << "\n";
						cout << "Your health is - " << health << '\n';
						cout << "Make a move\ncow and col\n\n";
						cout << "Enter row :\n";
						cin >> row;
						cout << "Enter col :\n";
						cin >> col;
						if (row == 1 && col == 0)
						{
							cout << "You are in the 5 coordinate " << game[row][col] << "\n";
						}
						else if (row == 0 && col == 1) {
							health -= 5;
							cout << "You stepped a mine, you lost your 5 health\n";
							cout << "You are in the 1-nd coordinate" << game[row][col] << "\n";
							cout << "Your health is " << health << '\n';
							cout << "You died\n";
							break;
						}
						else if (row == 1 && col == 2) {
							health -= 5;
							cout << "You stepped a mine , you lost your 5 health\n";
							cout << "You are in the 7 coordinate " << game[row][col] << "\n";
							cout << "Your health is " << health << '\n';
							cout << "You died\n";
							break;
						}
						else if (row == 2 && col == 1) {
							health -= 5;
							cout << "You stepped a mine, you lost your 5 health\n";
							cout << "You are in the 11-th coordinate " << game[row][col] << "\n";
							cout << "Your health is  " << health << '\n';
							cout << "You died\n";
							break;
						}
						else {
							cout << "Incorrect choose :\n";

						}
					} while (health != 0);
				}
				else if (row == 2 && col == 0)
				{

					do
					{
						row = 2; col = 0;
						cout << "You are in the 10 coordinate " << game[row][col] << '\n';
						cout << "Your health is" << health << '\n';
						cout << "Make a move\ncow and col\n\n";
						cout << "Enter row :\n";
						cin >> row;
						cout << "Enter col :\n";
						cin >> col;
						if (row == 1 && col == 0)
						{
							break;
						}
						else if (row == 2 && col == 1) {

							health -= 5;
							cout << "You stepped a mine , you lost your 5 health\n";
							do
							{
								row = 2; col = 1;
								cout << "You are in the 11 coordinate " << game[row][col] << "\n";
								cout << "Your health is  " << health << '\n';
								cout << "Make a move\ncow and col\n\n";
								cout << "Enter row :\n";
								cin >> row;
								cout << "Enter col :\n";
								cin >> col;
								if (row == 2 && col == 0)
								{
									break;
								}
								else if (row == 3 && col == 1) {
									health -= 5;
									cout << "You stepped a mine , you lost your 5 health\n";
									cout << "You are in the 16 coordinate " << game[row][col] << "\n";
									cout << "Your health is " << health << '\n';
									cout << "You died\n";
									break;

								}
								else if (row == 1 && col == 1) {
									health -= 5;
									cout << "You stepped a mine, you lost your 5 health \n";
									cout << "Your are in the 6-th coordinate" << game[row][col] << "\n";
									cout << "Your health is " << health << '\n';
									cout << "You died\n";
									break;
								}
								else if (row == 2 && col == 2) {
									health -= 5;
									cout << "You stepped a mine, you lost your 5 health\n";
									cout << "You are in the 12 coordinate " << game[row][col] << "\n";
									cout << "Your health is" << health << '\n';
									cout << "You died\n";
									break;
								}
								else {
									cout << "Incorrect choose :\n";

								}
							} while (health != 0);
						}
						else if (row == 3 && col == 0)
						{

							do
							{
								row = 3; col = 0;
								cout << "You are in the 15-th coordinate " << game[row][col] << "\n";
								cout << "Your health is" << health << '\n';
								cout << "Make a move\ncow and col\n\n";
								cout << "Enter row :\n";
								cin >> row;
								cout << "Enter col :\n";
								cin >> col;
								if (row == 2 && col == 0)
								{
									break;
								}
								else if (row == 4 && col == 0) {

									do
									{
										row = 4; col = 0;
										cout << "You are in the 21 coordinate " << game[row][col] << "\n";
										cout << "Your health is" << health << '\n';
										cout << "Make a move\ncow and col\n\n";
										cout << "Enter row :\n";
										cin >> row;
										cout << "Enter col :\n";
										cin >> col;
										if (row == 3 && col == 0)
										{
											break;

										}
										else if (row == 4 && col == 1) {

											do
											{
												row = 4; col = 1;
												cout << "You are in the 21 coordinate " << game[row][col] << "\n";
												cout << "Your health is " << health << '\n';
												cout << "Make a move\ncow and col\n\n";
												cout << "Enter row :\n";
												cin >> row;
												cout << "Enter col :\n";
												cin >> col;
												if (row == 4 && col == 0)
												{
													break;

												}
												else if (row == 3 && col == 1) {
													cout << "You are in the 16 coordinate " << game[row][col] << "\n";
													health = 0;
													cout << "You stepped 2 mine , you lost your 10 health hp\n";
													cout << "You are at " << game[row][col] << "\n";
													cout << "Your health is " << health << '\n';
													cout << "You died\n";
													break;

												}
												else if (row == 4 && col == 2)
												{
													do
													{
														cout << "You found  a heart\n\n";
														if (health == 5)
														{
															if (heart2 == false)
															{
																cout << "You used health\n\n";
																health += 5;
																heart1 = true;
															}
															else {
																cout << "You already get a heart\n";
															}

														}
														else {
															cout << "You have full health, you needn't a heart\n\n";
														}


														row = 4; col = 2;
														cout << "You are in the 22 coordinate " << game[row][col] << "\n";
														cout << "Your health is  " << health << '\n';
														cout << "Make a move\ncow and col\n\n";
														cout << "Enter row :\n";
														cin >> row;
														cout << "Enter col :\n";
														cin >> col;
														if (row == 4 && col == 1)
														{
															break;
														}
														else if (row == 4 && col == 3) {
															
															

															do
															{///////////////////////////////////////////////////////////
																row = 4; col = 4;
																cout << "You are in the 24 coordinate " << game[row][col] << "\n";
																cout << "Your health is " << health << '\n';
																cout << "Make a move\ncow and col\n\n";
																cout << "Enter row :\n";
																cin >> row;
																cout << "Enter col :\n";
																cin >> col;
																if (row == 4 && col == 4)
																{
																	health = 0;
																	cout << "\n\n\n\n!!!!!!!!!!!!!!!!!!YOU FINISH!!!!!!!!!!!!!!!";
																	break;
																}
																else if (row == 4 && col == 4) {

																}
																else if (row == 4 && col == 2) {
																	break;
																}
																else
																{
																	cout << "Incorrect choose\n";
																}


															} while (health != 0);
														}
														else if (row == 3 && col == 2)
														{
															cout << "You are in the " << game[row][col] << "\n";
															health = 0;
															cout << "You stepped 2 mine , you lost your 10 health\n";
															cout << "You are in the " << game[row][col] << "\n";
															cout << "Your health is" << health << '\n';
															cout << "You died\n";
															break;
														}
														else {
															cout << "Incorrect choose :\n";
														}
													} while (health != 0);
												}
												else {
													cout << "Incorrect choose :\n";
												}
											} while (health != 0);
										}
										else {
											cout << "Incorrect choose :\n";
										}
									} while (health != 0);
								}
								else if (row == 3 && col == 1)
								{
									health = 0;
									cout << "You stepped a two mine, you lost your 10 health\n";
									cout << "You are in the " << game[row][col] << "\n";
									cout << "Your health is " << health << '\n';
									cout << "You died\n";
									break;
								}
								else {
									cout << "Incorrect choose :\n";
								}
							} while (health != 0);
						}
						else {
							cout << "Incorrect choose :\n";
						}
					} while (health != 0);
				}
				else {
					cout << "Incorrect choose :\n";
				}
			} while (health != 0);
		}
		else if (row == 0 && col == 1) {
			health -= 5;
			cout << "You stepped two mine , you lost your 10 health\n";
			do
			{
				row = 0; col = 1;
				cout << "You are in the " << game[row][col] << "\n";
				cout << "Your health is " << health << '\n';
				cout << "Make a move\ncow and col\n\n";
				cout << "Enter row :\n";
				cin >> row;
				cout << "Enter col :\n";
				cin >> col;
				if (row == 0 && col == 0)
				{
					break;
				}
				else if ((row == 1 && col == 1) || (row == 0 && col == 2)) {
					health -= 5;
					cout << "You stepped a mine , you lost your 5 health\n";
					cout << "You are in the " << game[row][col] << "\n";
					cout << "Your health is" << health << '\n';
					cout << "You died\n";
					break;
				}
				else {
					cout << "Incorrect choose :\n";
				}
			} while (health != 0);
		}
		else {
			cout << "Incorrect choose :\n";
		}
	} while (health != 0);
}