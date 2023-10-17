#include <iostream>
using namespace std;
int main() {
    string terbalik;
    getline(cin, terbalik);
    
    for (int i = terbalik.length() - 1; i >= 0; i--) {
        cout << terbalik[i];
    }
    cout << endl;
    return 0;
}