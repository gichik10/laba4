#include <iostream>
using namespace std;
int main()
{
	int massiv[] = { 1,4,1,4,5,6,7,8,66,44,1 };
	int massiv2[11];
	cout << " sort arr:  ";
	int c = 0;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (i != j) {
				if (massiv[i] == massiv[j]) {
					c = 1;
				}

			}
		}
		if (c == 1) {
		}
		else {
			cout << " " << massiv[i];
		}
		c = 0;
	}
	return 0;
}