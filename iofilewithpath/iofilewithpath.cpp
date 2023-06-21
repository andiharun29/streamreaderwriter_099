#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "masukkan nama file : ";
	cin >> namafile;

	//membuka file dalam mode menuis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' intuk keluar" << endl;

	//unlimited loop untuk mnulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
}