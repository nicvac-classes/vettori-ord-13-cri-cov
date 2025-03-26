#include <iostream>
using namespace std;
int main() {
    int n, i, j, t;
    bool scambio;

    cout << "quanti numeri vuoi ordinare?" << endl;
    cin >> n;
    int num[n];

    i = 0;
    scambio = true;
    while (i < n) {
        num[i] = rand() % (10 * n);
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (num[j] > num[j + 1]) {
                t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        if (num[i] % 2 == 0) {
            cout << "il numero pari è " << j + 1 << " & num[i]" << endl;
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    j = 0;
    while (i < n) {
        if (num[i] % 2 != 0) {
            cout << "il numero pari è " << j + 1 << " & num[i]" << endl;
            j = j + 1;
        }
        i = i + 1;
    }
    


