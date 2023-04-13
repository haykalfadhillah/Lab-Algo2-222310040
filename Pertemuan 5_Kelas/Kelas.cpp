#termasuk <iostream>
#sertakan <string>

menggunakan namespace std;

buku kelas {
pribadi:
  judul string;
  string pengarang;
  bool dipinjamkan;

publik:
  Buku(string j, string p) {
    judul = j;
    pengarang = p;
    dipinjamkan = palsu;
  }
  void setDipinjam(bool status) { dipinjam = status; }
  bool getDipinjam() { kembali dipinjam; }
  string getJudul() { mengembalikan judul; }
  string getPengarang() { return pengarang; }
};

kelas Pelajar {
pribadi:
  string nama;
  int umur;
  Buku *bukuPinjaman;

publik:
  Pelajar(string n, int u) {
    nama = n;
    umur = kamu;
    bukuPinjaman = nullptr;
  }
  void pinjamBuku(Buku *buku) {
    if (buku->getDipinjam()) {
      cout << "Buku sedang dipinjam" << endl;
    } kalau tidak {
      buku->setDipinjam(true);
      bukuPinjaman = buku;
      cout << "Buku " << buku->getJudul() << " berhasil dipinjam oleh " << nama
           << akhir;
    }
  }
  batal kembalikanBuku() {
    if (bukuPinjaman == nullptr) {
      cout << "Anda tidak memiliki buku yang dipinjam" << endl;
    } kalau tidak {
      bukuPinjaman->setDipinjam(false);
      cout << "Buku " << bukuPinjaman->getJudul()
           << " berhasil dikembalikan oleh " << nama << endl;
      bukuPinjaman = nullptr;
    }
  }
};

int utama() {
  Buku buku1("Harry Potter", "JK Rowling");
  Buku buku2("Percy Jackson", "Rick Riordan");
  Pelajar pelajar1("Adi", 18);
  Pelajar pelajar2("Budi", 17);

  pelajar1.pinjamBuku(&buku1);
  pelajar2.pinjamBuku(&buku1);
  pelajar2.pinjamBuku(&buku2);

  pelajar1.kembalikanBuku();
  pelajar2.kembalikanBuku();
  pelajar1.kembalikanBuku();

  kembali 0;
}