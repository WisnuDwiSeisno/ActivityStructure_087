#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};


int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20220140087";
	mhs.umur = 19;
	mhs.nama = "Wisnu Dwi Seisno";
	mhs.alamat = "Bogor";

	cout << "Masukan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukan Umur : ";
	cin >> mhs2.umur;
	cout << "Masukan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukan Alamat : ";
	cin >> mhs2.alamat;

	cout << "\n\nMasukan NIM : " << mhs.nim;
	cout << "\nMasukan Umur : " << mhs.umur;
	cout << "\nMasukan Nama : " << mhs.nama;
	cout << "\nMasukan Alamat : " << mhs.alamat;

	cout << "\n\nMasukan NIM : " << mhs2.nim;
	cout << "\nMasukan Umur : " << mhs2.umur;
	cout << "\nMasukan Nama : " << mhs2.nama;
	cout << "\nMasukan Alamat : " << mhs2.alamat;
}