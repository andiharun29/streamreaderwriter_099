#include <iostream>
using namespace std;

int main() {
	try {
		cout << "selamat belajar di prodi ti umy" << endl;
		throw 0.5; //melempar sebuah integer maka
		cout << "pengecualian tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "pengecualian akan di eksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan di eksekusi*/
		cout << "default pengecualian di eksekusi" << endl;
	}

	return 0;
}