#include <iostream>
using namespace std;

class Motor {
public :
    string Brand;
    string nama;
    int tahun_keluar;
    int seri;

    void printData() {
        cout << "Brand   = " << Brand << endl;
        cout << "Nama  = " << nama << endl;
        cout << "Tahun Keluar = " << tahun_keluar << endl;
        cout << "Seri = " << seri << endl;
    }
};

int main() {
Motor motor1;

motor1.Brand = "Honda";
motor1.nama = "CBR 150R";
motor1.tahun_keluar = 2020;
motor1.seri = 1;
motor1.printData();
return 0;
}