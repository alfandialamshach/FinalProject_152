#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar { 
public:
	Lingkaran() {
		cout << "Lingkaran Dibuat" << endl;
	}
	int Jejari;

	void input() {
		cout << "Masukkan Jejari =";
		cin >> Jejari;
		setX(Jejari);
	}
	
	float Luas() {
		return 3.14 * getX();
	}
	float Keliling() {
		return 2 * 3.14 * getX();
	}
	void cekUkuran() {
		if (Keliling() > 40)
			cout << "Ukuran lingkaran adalah besar" << endl;
		/*if (Keliling() a & < 20)
			cout << "Ukuran lingkaran adalah sedang" << endl;
		else if (Keliling()  < 10)
			cout << "Ukuran lingkaran adalah kecil" << endl;
		return;
}*/
	}
};

class Persegipanjang :public bidangDatar {
public:
	Persegipanjang() {
		cout << "Persegi Panjang dibuat" << endl;
	}
	int panjang;
	int lebar;

	void input() {
		cout << "Masukkan Panjang =";
		cin >> panjang;
		setX(panjang);
		cout << "Masukkan Lebar =";
		cin >> lebar;
		setY(lebar);
	}
	float Luas() {
		return getX() * getY();
	}
	float keliling() {
		return (2 * getX()) * getY();
	}
	/*void cekUkuran() {
		if (Keliling() > 40) {
			cout << "Ukuran lingkaran adalah besar" << endl;
		}
		else if (Keliling() < 20)
			cout << "Ukuran lingkaran adalah sedang" << endl;
		else if (Keliling() < 10)
			cout << "Ukuran lingkaran adalah kecil" << endl;
	}*/
};
	int main() {
		bidangDatar* obyek;

		Lingkaran L;
		L.input();
		cout << "Luas Lingkaran = " << L.Luas() << endl;
		cout << "Keliling Lingkaran = " << L.Keliling() << endl;
		L.cekUkuran();
		cout << "Lingkaran" << L.cekUkuran() << endl;
		Persegipanjang P;
		P.input();
		cout << "Luas Lingkaran = " << P.Luas() << endl;
		cout << "Keliling Lingkaran = " << P.keliling() << endl;
		P.cekUkuran();
	}
