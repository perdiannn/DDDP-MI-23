#include <iostream>
using namespace std;
int main() {
    int a = 10;
	int b = 5;
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << a << endl; // 5
	cout << b << endl; // 10
}