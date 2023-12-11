#include <iostream>
using namespace std;

int main() {
    int hargaMinyakGoreng = 17000;
    int hargaBeras = 13000;
    int hargaGula = 13500;

    int literMinyakGoreng, kgBeras, kgGula;
    cout << "Masukkan jumlah liter Minyak Goreng: ";
    cin >> literMinyakGoreng;
    cout << "Masukkan jumlah kilogram Beras: ";
    cin >> kgBeras;
    cout << "Masukkan jumlah kilogram Gula: ";
    cin >> kgGula;

    int totalHarga = (hargaMinyakGoreng * literMinyakGoreng) + (hargaBeras * kgBeras) + (hargaGula * kgGula);

    if (totalHarga >= 70000) {
        totalHarga -= (totalHarga * 0.1); // 10% discount
    }

    cout << "Total Harga: Rp. " << totalHarga << endl;

    return 0;
}
