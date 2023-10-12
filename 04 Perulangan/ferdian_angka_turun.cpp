#include <iostream>
using namespace std;
int main() {
    int bilangan;
    cin >> bilangan;
    for (int nilai = 1; nilai >= bilangan; nilai--) {
        cout << nilai << " ";
    }
    return 0;
}