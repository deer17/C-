#include <iostream>

using namespace std;


void arrPointers(int* array, const int& arrSize, int& negative, int& positive, int& zero)
	{
		for (int i = 0; i < arrSize; i++)
		{
			if (*(array + i) > 0) {
				positive++;
			}
			else if (*(array + i) < 0) {
				negative++;
			}
			else {
				zero++;
			}
		}
	}

int main()
{
	const int arrSize = 10;
	int positive = 0,
        negative = 0,
        zero = 0;

	int arr[arrSize]{ -5,-3,-2,0,5,7,10,34,40,21 };
	int* Parr = arr;

	arrPointers(Parr, arrSize, negative, positive, zero);

	cout << " positive = " << positive << '\n';
	cout << " negative = " << negative << '\n';
	cout << " zero = " << zero << '\n';
}