#include <iostream>
using namespace std;
int main() {
    int bil1, bil2, bil3;
    cin >> bil1 >> bil2 >> bil3;
    for (int hasil = bil1; hasil <= bil2; hasil += bil3) {
        cout << hasil << " ";
    }
    return 0;
}
