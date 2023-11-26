#include <iostream>
using namespace std;
int main() {
	int n, cari;
	bool ketemu = false;
	
//	Menentukan panjang array
	cout << "Input jumlah data : ";
	cin >> n;
	cout << endl;
	
//	Memasukkan nilai ke dalam array
	int list_data[n];
	for(int i = 0; i < n; i++) {
		cout << "Input data ke- " << i << ": ";
		cin >> list_data[i];
	}
	cout << endl;
	
//	Menentukan nilai yang ingin dicari
	cout << "Input bilangan yang dicari : ";
	cin >> cari;
	cout << endl;
	
//	Mencari dengan Sequential Search
	for(int i = 0; i < n; i++) {
		if(list_data[i] == cari) {
			ketemu = true;
			cout << "Data ditemukan pada Index ke- " << i;
			break;
		}
	}
	if(!ketemu) {
		cout << "Data tidak ditemukan";
	}
}