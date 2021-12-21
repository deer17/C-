#include <iostream>

using namespace std;

void variant1(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "\n\na = " << *a;
	cout << "\nb = " << *b;
}


void variant2(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout << "\n\na = " << *a;
	cout << "\nb = " << *b;

}
int main()
{
	int a = 7;
	int b = 9;

	cout << "\n\na = " << a;
	cout << "\nb = " << b;

	 variant1(&a, &b);
	//variant2(&a, &b);

}