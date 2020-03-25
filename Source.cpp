#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Mahasiswa
{
public:
	string nama;
	string NIM;
	string jurusan;
	double IPK;

};

int main(int argc, char const *argv[])
{
	Mahasiswa data1;
	data1.nama = "Rizky Khapidsyah";
	data1.NIM = "87392487";
	data1.jurusan = "Tata Boga";
	data1.IPK = 4.0;

	Mahasiswa data2;
	data2.nama = "Bambang Aditya";
	data2.NIM = "85723454";
	data2.jurusan = "Tata Busana";
	data2.IPK = 4.1;

	cout << "Nama dari data1     = " << data1.nama << endl;
	cout << "NIM dari data1      = " << data1.NIM << endl;
	cout << "Jurusan dari data1  = " << data1.jurusan << endl;
	cout << "IPK dari data1      = " << data1.IPK << endl << endl;

	cout << "Nama dari data2     = " << data2.nama << endl;
	cout << "NIM dari data2      = " << data2.NIM << endl;
	cout << "Jurusan dari data2  = " << data2.jurusan << endl;
	cout << "IPK dari data2      = " << data2.IPK << endl << endl;

	_getch();
	return 0;
}
