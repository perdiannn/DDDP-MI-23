#include <iostream>
using namespace std;
int main() {
    string kata;
    cout << "";
    getline(cin, kata);
    
    for (char abjad : kata) {
        cout << abjad << endl;
    }
    return 0;
}