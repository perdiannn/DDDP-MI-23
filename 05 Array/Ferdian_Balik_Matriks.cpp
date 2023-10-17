#include <iostream>
using namespace std;
int main() {
    int pola1, pola2;
    cin >> pola1 >> pola2;
    
    int matriks[pola1][pola2];
    
    for (int i = 0; i < pola1; i++) {
        for (int j = 0; j < pola2; j++) {
            cin >> matriks[i][j];
        }
    }
    for (int i = pola1 - 1; i >= 0; i--) {
        for (int j = pola2 - 1; j >= 0; j--) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}