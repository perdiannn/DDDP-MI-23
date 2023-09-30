#include <iostream>
using namespace std;
int main() {
    int bilangan;
    cin >> bilangan;
    
    if (bilangan % 2 == 0) {
        cout << "Genap" << endl;
    } else {
        cout << "Ganjil" << endl;
    } 
    
    return 0;
}