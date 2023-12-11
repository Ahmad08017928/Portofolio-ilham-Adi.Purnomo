#include <iostream>
#include <stdlib.h>
#define tempat 300

using namespace std;

int main() {
    int mat1[tempat][tempat], mat2[tempat][tempat], hasil[tempat][tempat];
    int i, j, n, m;

    cout << "Membuat dan menjumlahkan dua matriks dengan ordo yang sama\n";
    cout << "-----------------------------------------------------------\n";

    cout << "Baris matriks: "; cin >> n;
    cout << "Kolom matriks: "; cin >> m;
    
    cout << "\n";

    // Input elemen matriks pertama
    cout << "Pengisian matriks pertama ordo " << n << " x " << m << ":\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << "Data ke-[" << i << "," << j << "] = ";
            cin >> mat1[i][j];
        }
        cout << "\n";
    }

    // Input elemen matriks kedua
    cout << "Pengisian matriks kedua ordo " << n << " x " << m << ":\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << "Data ke-[" << i << "," << j << "] = ";
            cin >> mat2[i][j];
        }
        cout << "\n";
    }

    // Menampilkan matriks pertama
    cout << "Matriks Pertama:\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << " " << mat1[i][j] << " ";
        }
        cout << "\n";
        cout << endl;
    }

    // Menampilkan matriks kedua
    cout << "Matriks Kedua:\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << " " << mat2[i][j] << " ";
        }
        cout << "\n";
        cout << endl;
    }

    // Menjumlahkan kedua matriks
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            hasil[i][j] = mat1[i][j] + mat2[i][j];
        }
        cout << "\n";
    }

    // Menampilkan hasil penjumlahan
    cout << "Hasil penjumlahan matriks:\n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << " " << hasil[i][j] << " ";
        }
        cout << "\n";
        cout << endl;
    }

    return 0;
}
