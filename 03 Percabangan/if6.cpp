#include <iostream>
using namespace std;
int main(){
    int nilai;
    cin >> nilai;
    if (nilai < 0) {
        cout << "Negatif" << endl;
    } else if (nilai > 0 && nilai % 2 == 0) {
        cout << "Positif Genap" << endl;
    } else if (nilai != 2) {
        cout << "Positif Ganjil" << endl;
    }
    return 0;
}