#include <iostream>
using namespace std;
int main() {
    int nilai;
    cin >> nilai;
    if (nilai >= 0 && nilai <= 9) {
        cout << "Satuan" << endl;
    } else if (nilai >= 10 && nilai <= 99) {
        cout << "Puluhan" << endl;
    } else if (nilai >= 100 && nilai <= 999) {
        cout << "Ratusan" << endl;
    } else if (nilai >= 999) {
        cout << "Tidak Tahu" << endl;
    } else {
        cout << "Tidak Tahu" << endl;
    }
    return 0;
}