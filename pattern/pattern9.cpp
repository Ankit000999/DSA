#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j <= i) {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j <= i) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}