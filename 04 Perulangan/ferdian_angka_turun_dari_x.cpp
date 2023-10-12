#include <iostream>
using namespace std;
int main() {
    int nilai1, nilai2;
    cin >> nilai1 >> nilai2;
    for (int hasil = nilai1; hasil >= nilai2; hasil--) {
        cout << hasil << " " << endl;
    }
    return 0;
}