
#include <iostream>
using namespace std;
int main()
{
	int const SIZE = 10;
	int massiv1[SIZE];
	int massiv2[SIZE];
	int massiv_res[SIZE*2];
	cout << "arr 1:";
	for (int i = 0; i < SIZE; i++) {
		massiv1[i] = rand() % 100;
		cout << " " << massiv1[i];
	}
		cout << endl;
		cout << "arr 2:";
		for (int i = 0; i < SIZE; i++) {
			massiv2[i] = rand() % 100;
			cout << " " << massiv2[i];
		}
		
		
		cout << endl;
		for (int i = 0; i < SIZE; i++) {
			massiv_res[i] = massiv1[i];
			massiv_res[ SIZE+i] = massiv2[i];

		}
		cout << "arr res:";
		for (int i = 0; i < SIZE*2; i++) {
			cout << " " << massiv_res[i];
		}
	return 0;


}