#termasuk <iostream>
menggunakan namespace std;

int utama()
{
    int data[] = {0, 6, 12, 18, 24};
    int cari, posisi = -1, tm = 0, R = 5, L = 0;

    cout<<"Masukkan data yang ingin dicari: ";
    cin >> cari;

    sementara (L <= R)
    {
        tm = (L + R) / 2;

        jika (data[tm] == cari)
        {
            posisi = tm;
            merusak;
        }
        lain jika (data[tm] < cari)
        {
            L = tm + 1;
        }
        kalau tidak
        {
            R = tm - 1;
        }
    }

    jika (posisi != -1)
    {
        cout << "Data ditemukan pada posisi ke-" << posisi + 1 << endl;
    }
    kalau tidak
    {
        cout<<"Data tidak ditemukan"<<endl;
    }

    kembali 0;
}