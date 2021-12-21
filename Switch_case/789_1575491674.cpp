#include <iostream>

using namespace std;

int main()
{

	enum { internet, mobile, TV };
	enum { katv, ailetv, azstarnet };
	enum { azercell, bakcell, narmobile };
	enum { katv1, ailetv1, atv };

	cout << "Select category \n";
	cout << internet<< " - Internet \n";
	cout << mobile<< " - Mobile \n";
	cout << TV<< " - TV \n\n";

	

	

	int katvNumber = 123456789;
	int katvNumber1;
	int ailetvNumber = 222333;
	int ailetvNumber1;
	int azstarnetNumber = 987654321;
	int azstarnetNumber1;
	int azercellNumber = 994516666666;
	int azercellNumber1;
	int bakcellNumber = 994557777777;
	int bakcellNumber1;
	int narmobileNumber = 994709999999;
	int narmobileNumber1;
	int katv1Number = 777555;
	int katv1Number1;
	int ailetv1Number = 777666;
	int ailetv1Number1;
	int atvNumber = 555888;
	int atvNumber1;


	


	int category;
	cin >> category;


	cout << "Select TV category \n";
	cout << katv1 << " - katv1 \n";
	cout << ailetv1 << " - ailetv1 \n";
	cout << atv << " - atv \n\n";

	int TVcategory;
	cin >> TVcategory;

	switch (category)
	{
	case internet:
		cout << "internet \n";
		cout << "Select internetcategory \n";
		cout << katv << " - katv \n";
		cout << ailetv1 << " - ailetv \n";
		cout << azstarnet << " - azstarnet \n\n";

		int internetCategory;
		cin >> internetCategory;
		switch (internetCategory)
		{
		case katv:
			cout << "katv \n";
			cout << "Enter katv number \n";
			cin >> katvNumber1;
			if (katvNumber == katvNumber1) {
				int azn1;
				cout << "Please enter azn : \n";
				cin >> azn1;
				cout << "Operation completed succesfully \n";
				cout << "Chek \n";
				cout << "Service name : internet \n";
				cout << "Number of account :  " << katvNumber1;
				cout << "\nPayment amount (AZN) " << azn1;
			}
			else {
				cout << "Wrong number, pleace enter number again \n\n";
			}
			break;
		case ailetv:
			cout << "ailetv \n";
			cout << "Enter ailetv number \n";
			cin >> ailetvNumber1;
			if (ailetvNumber == ailetvNumber1) {
				int azn2;
				cout << "Please enter azn : \n";
				cin >> azn2;
				cout << "Operation completed succesfully \n";
				cout << "Check \n";
				cout << "Service name : internet \n";
				cout << "Number of account : " << ailetvNumber1;
				cout << "\nPayment amount (AZN) " << azn2;
			}
			else {
				cout << "Wrong number, pleace enter number again \n";
			}
			break;
		case azstarnet:
			cout << "azsatrnet \n";
			cout << "Enter azsatrnet number \n";
			cin >> azstarnetNumber1;
			if (azstarnetNumber == azstarnetNumber1) {
				int azn3;
				cout << "Please enter azn : \n";
				cin >> azn3;
				cout << "Operation completed succesfully \n ";
				cout << "Check \n";
				cout << "Service name : internet \n";
				cout << "Number of account : " << azstarnetNumber1;
				cout << "\nPayment amount (AZN) " << azn3;
			}
			else {
				cout << "Wrong number, pleace enter number again \n";
			}
			break;
		}
		break;
	case mobile:
		cout << "mobile \n";
		cout << "Select mobileCategory \n";
		cout << azercell << " - azercell \n";
		cout << bakcell << " - bakcell \n";
		cout << narmobile << " - narmobile \n\n";

		int mobileCategory;
		cin >> mobileCategory;
		switch (mobileCategory)
		{
		case azercell:
			cout << "azercell \n";
			cout << "Enter azercell number \n";
			cin >> azercellNumber1;
			if (azercellNumber == azercellNumber1) {
				int manat1;
				cout << "Please enter manat : \n";
				cin >> manat1;
				cout << "Operation completed succesfully \n";
				cout << "Check \n";
				cout << "Service name : mobile \n";
				cout << "Number of account : " << azercellNumber1;
				cout << "\nPayment amount (AZN) : " << manat1;
			}
			else {
				cout << "Wrong number, pleace enter number again \n\n";
			}
			break;
		case bakcell:
			cout << "bakcell \n";
			cout << "Enter bakcell number \n";
			cin >> bakcellNumber1;
			if (bakcellNumber == bakcellNumber1) {
				int manat2;
				cout << "Please enter manat : \n";
				cin >> manat2;
				cout << "Operation compeleted succesfully \n";
				cout << "Check \n";
				cout << "Service name : mobile \n";
				cout << "Number of account : " << bakcellNumber1;
				cout << "\nPayment amount (AZN) : " << manat2;
			}
			else {
				cout << "Wrong number, pleace enter number again \n\n";
			}
			break;
		case narmobile:
			cout << "narmobile \n";
			cout << "Enter narmobile number \n";
			cin >> narmobileNumber1;
			if (narmobileNumber == narmobileNumber1) {
				int manat3;
				cout << "Please enter manat : \n";
				cin >> manat3;
				cout << "Operation completed succesfully \n";
				cout << "Check \n";
				cout << "Service name : mobile \n";
				cout << "Number of account : " << narmobileNumber1;
				cout << "\nPayment amount (AZN) : " << manat3;
			}
			else {
				cout << "Wrong number, please enter number again \n\n";
			}
			break;
		}
		break;
	case TV:
		cout << "TV \n";
		switch (TVcategory)
		{
		case katv1:
			cout << "katv1 \n";
			cout << "Enter katv1 number \n";
			cin >> katv1Number1;
			if (katv1Number = katv1Number1) {
				int azManat1;
				cout << "Please enter AZN : \n";
				cin >> azManat1;
				cout << "Operation completed succesfully \n";
				cout << "Check \n";
				cout << "Service name : TV \n";
				cout << "Number of account : " << katv1Number1;
				cout << "\\nPayment amount (AZN) : " << azManat1;
			}
			else {
				cout << "Wrong number , please enter number again \n\n";
			}
			break;

		case ailetv1:
			cout << "ailetv1 \n";
			cout << "Enter ailetv1 number \n";
			cin >> ailetv1Number1;
			if (ailetv1Number == ailetv1Number1) {
				int azManat2;
				cout << "Please enter AZN : \n";
				cin >> azManat2;
				cout << "Operation completed succesfully \n";
				cout << "Check \n";
				cout << "Service name : TV \n";
				cout << "Number of account : " << ailetv1Number1;
				cout << "\nPayment amount (AZN) : " << azManat2;
			}
			else {
				cout << "Wrong number , please enter number again \n\n";
			}
			break;

		case atv:
			cout << "atv \n";
			cout << "Enter atv number \n";
			cin >> atvNumber1;
			if (atvNumber == atvNumber1) {
				int azManat3;
				cout << "Please enter AZN : \n";
				cin >> azManat3;
				cout << "Operation compeleted succesfully \n";
				cout << "Check \n";
				cout << "Service name : TV \n";
				cout << "Number of account : " << atvNumber1;
				cout << "\nPayment amount (AZN) : " << azManat3;
			}
			else {
				cout << "Wrong number , please enter number again \n\n";
			}
			break;
		}
		break;

	}


	




	

	



	


}