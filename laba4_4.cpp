
#include <iostream>
using namespace std;
int main()
{
	int const SIZE = 11;
	int massiv[SIZE];
	double avg = 0;
	for (int i = 0; i < SIZE; i++) {
		massiv[i] = rand() % 100;
		cout << " ";
		cout << massiv[i];
		avg += massiv[i];
	}
	cout << " " << endl;
	cout << "arithmetic mean:" << avg / SIZE;
	return 0;
}


