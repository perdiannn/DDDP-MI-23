#include <iostream>
using namespace std;
int main() {
    int bilangan;
    cin >> bilangan;
    
    if (bilangan < 0) {
        cout << "Negatif";
    } else if (bilangan %2 == 0) {
        cout << "Positif Genap"; 
    } else if (bilangan != 2) {
        cout << "Positif Ganjil";
    }
    return 0;
}