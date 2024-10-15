#include <iostream>
#include <ctime>  
#include <iomanip> 
using namespace std;

void COUT(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << mas[i] << " ";
    }
    cout << endl;
}

int El(int mas[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] % 2 == 1) {
            count++;
        }
    }
    return count;
}

int SUM(int mas[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] % 2 != 0) {
            sum += mas[i];
        }
    }
    return sum;
}

int main() {
    srand((unsigned)time(0));
    setlocale(LC_CTYPE, "ukr");

    const int SIZE = 10;
    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE);

    int sum = SUM(a, SIZE);
    int count = El(a, SIZE);

    if (count > 0) {
        cout << "Середнє арифметичне непарних елементiв: " << (double)sum / count << endl;
    }

    return 0;
}
