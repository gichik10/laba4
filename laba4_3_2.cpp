#include <iostream>
using namespace std;
int main()
{
	int massiv[10];
	int c = 9;
	for (int i = 0; i < c; i++) {
		massiv[i] = rand() % 100;
	}
	for (int i = 0; i < c; i++) {
		int min = i;
		for (int j = i; j < c; j++) {
			if (massiv[min] > massiv[j]){
				min = j;

				}

		}
		int k = massiv[i];
		massiv[i] = massiv[min];
		massiv[min] = k;
	}
	for (int i = 0; i < c; i++) {
		cout << massiv[i] << " ";
	}
	return 0;
}