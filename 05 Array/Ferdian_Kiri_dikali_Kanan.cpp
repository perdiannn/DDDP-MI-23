#include <iostream>
using namespace std;
int main() {
    int P, Q;
    cin >> P;
    cin >> Q;
    
    int matriks[P][Q];
    
    for (int i = 0; i < P; i++) {
        for(int j = 0; j < Q; j++) {
            matriks[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}