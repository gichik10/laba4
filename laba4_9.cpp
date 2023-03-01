#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int const ROW = 4;
    int const COL = 4;
    int arr[ROW][COL];
    int sum = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
        {
            sum += arr[i][j];
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "sum:" << sum;
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    cout << endl;
    cout << "min:" << min << endl;
    cout << "max:" << max;
    cout << endl;
    for (int i = 0; i < ROW; i++) {
        double summ = 0;
        for (int j = 0; j < COL; j++) {

            summ += arr[i][j];
        }
        double avg = summ / ROW;
        cout << "Среднее арифметическое элементов строки " << i << " = " << avg << endl;
       
    }
    cout << endl;
    cout << "главная диагональ:";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i == j) {
                cout << " " << arr[i][j];
            }
        }
    }
    cout << endl;
    cout << "побочная диагональ:";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i + j == ROW - 1) {
                cout << " " << arr[i][j];
            }
        }
    }
    cout << endl;
    cout << "под главной:";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i > j) {
                cout << " " << arr[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "над главной:";
    cout << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i < j) {
                cout << " " << arr[i][j];
            }
        }
        cout << endl;
    }
    for (int i = 0; i < ROW; i++) {
        int min1 = arr[0][0];
        int max1 = arr[0][0];
        for (int j = 0; j < COL; j++)
        {
                if (arr[j][i] < min1)
                {
                    min1 = arr[j][i];
                }
                if (arr[j][i] > max1) {
                    max1 = arr[j][i];
                } 
        }
        cout << "МАКСИМАЛЬНОЕ ЗНАЧЕНИЕ СТОЛБЦА " << i << ":" << max1 << endl;
        cout << "МИНИМАЛЬНОЕ ЗНАЧЕНИЕ ЗНАЧЕНИЕ СТОЛБЦА " << i << ":" << min1 << endl;
        cout << endl;
    }
    
    
    for (int i = 0; i < ROW; i++) {
        int sum2 = 0;
        for (int j = 0; j < COL; j++)
        {
            sum2 += arr[i][j];
        }
        cout << "Сумма чисел " << i << " строчки" << ":" << sum2 << endl;
    }
    
    return 0;
}
