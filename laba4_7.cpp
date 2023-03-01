#include <iostream>
using namespace std;
int main()
{
	int const SIZE = 10;
	int massiv[SIZE];
	cout << " orig arr:  ";
	for (int i = 0; i < SIZE; i++) {
		massiv[i] = rand() % 100;
		cout << massiv[i] << " ";
	}
	cout << endl;
	cout << " Reversed arr:  ";
	for (int i = 9; i>=0 ; i--) {
		cout << " " << massiv[i];
	}
	return 0;
}
