#include <iostream>
using namespace std;
int main() {
    int p, q, r;
    cin >> p >> q >> r;
    
    for (int i = p; i >= q; i += r) {
        cout << i << " ";
    }
    return 0;
}