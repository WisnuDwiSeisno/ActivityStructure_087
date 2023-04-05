#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};


int main() {
	Mahasiswa mhs;

	cout << "Masukan NIM : ";
	cin.getline(mhs.nim, 12);
	cout << "Masukan Umur : ";
	cin >> mhs.umur;
	cout << "Masukan Nama : ";
	cin.getline(mhs.nama, 20);
	cout << "Masukan Alamat : ";
}