#include <iostream>
using namespace std;

class Barang {
    private:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
    public:
        Barang(string n, int j, string k, string t) {
        nama = n;
        jumlah = j;
        kategori = k;
        tanggalProduksi = t;
    }
        void tampilkanSpesifikasi() {  // Method untuk menampilkan spesifikasi barang
            cout << "Nama Barang       = " << nama << endl;
            cout << "Jumlah Barang     = " << jumlah << endl;
            cout << "Kategori Barang   = " << kategori << endl;
            cout << "Tanggal Produksi  = " << tanggalProduksi << endl;
        }
};

int main() {
    Barang elektronik("Laptop", 150, "Elektronik", "2005-09-03");
    Barang nonElektronik("Kursi", 200, "Non-Elektronik", "2006-09-14");

    cout << "=== Data Barang Elektronik ===" << endl;
    elektronik.tampilkanSpesifikasi();

    cout << "=== Data Barang Non-Elektronik ===" << endl;
    nonElektronik.tampilkanSpesifikasi();

    return 0;
}