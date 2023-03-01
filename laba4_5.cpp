#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int const SIZE = 10;
	int massiv[SIZE];
	int numb;
	int index =-1;
	for (int i = 0; i < SIZE; i++) {
		massiv[i] = rand() % 100;
		cout <<" " << massiv[i];
	}
	cout << " " << endl;
	cout << "введите число:";
	cin >> numb;
	for (int i = 0; i < SIZE; i++) {
		if (massiv[i] == numb) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		cout << "индекс числа " << numb << " в массиве: " << index << endl;
	}
	else {
		cout << "Число " << numb << " не найдено в массиве." << endl;
	}
	return 0;
}