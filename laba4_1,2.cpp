
#include <iostream>
using namespace std;
int main()
{
	int massiv[10];
	int c = 9;
	int sum = 0;
	for (int i = 0; i < c; i++) {
		massiv[i] = rand() % 100;
		cout << massiv[i] << " ";
		sum += massiv[i];

	}
	cout << " ";
	cout << "sum:" << sum << " ";
	int max = massiv[0];
	int min = massiv[0];
	for (int i = 0; i < c; i++) {
		if (massiv[i] < min) {
			min = massiv[i];
		}
		if (massiv[i] > max) {
			max = massiv[i];


		}
	}
	cout << " ";
	cout << "min:" << min;
	cout << " ";
	cout << "max:" << max;

	return 0;

}
