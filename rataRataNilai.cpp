#include <iostream>
#include <array>
using namespace std;

int main()
{
    float jumlah_nilai, jumlah_mahasiswa, rata_rata;
    cout << "----Program Menghitung Rata Rata Mahasiswa----" << endl;
    cout << "Masukkan jumlah mahasiswa: "; cin >> jumlah_mahasiswa;
    for (int i = 1; i <= jumlah_mahasiswa; i++)
    {
        int nilai[i];
        cout << "Masukkan nilai mahasiswa ke-" << i << ": "; cin >> nilai[i];
        jumlah_nilai += nilai[i];
    }
    cout << jumlah_nilai << endl;
    rata_rata = jumlah_nilai / jumlah_mahasiswa;
    cout << "Rata-rata nilai mahasiswa: " << rata_rata << endl;
    return 0;
}