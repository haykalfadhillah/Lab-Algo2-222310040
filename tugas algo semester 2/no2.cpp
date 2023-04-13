#termasuk <iostream>
#sertakan <string>
menggunakan namespace std;

// fungsi pencarian biner
int binarySearch(string arr[], int l, int r, string x)
{
    sementara (l <= r) {
        int pertengahan = l + (r - l) / 2;

        // Jika elemen yang dicari ditemukan di tengah
        jika (arr[mid] == x)
            kembali pertengahan;

        // Jika elemen yang dicari lebih besar dari tengah,
        // abaikan setengah kiri dan cari di setengah kanan
        jika (arr[pertengahan] < x)
            l = pertengahan + 1;

        // Jika elemen yang dicari lebih kecil dari tengah,
        // abaikan setengah kanan dan cari di setengah kiri
        kalau tidak
            r = pertengahan - 1;
    }

    // jika elemen tidak ditemukan
    kembali -1;
}

int utama()
{
    string books[] = { "The Great Gatsby", "To Kill a Mockingbird", "1984", "Animal Farm", "Pride and Prejudice" };
    int n = sizeof(buku) / sizeof(buku[0]);
    string nama buku;
    
    cout<<"Masukkan judul buku yang ingin dicari: ";
    getline(cin, namabuku);

    int result = binarySearch(buku, 0, n - 1, namabuku);

    jika (hasil == -1)
        cout<<"Buku tidak ditemukan"<<endl;
    kalau tidak
        cout<<"Buku ditemukan pada indeks ke-"<<hasil<<endl;

    kembali 0;
}