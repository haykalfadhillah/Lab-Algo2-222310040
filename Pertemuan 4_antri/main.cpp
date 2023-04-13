#termasuk <iostream>
#termasuk <antrean>
menggunakan namespace std;

struct Tiket {
  string nama;
  int jumlah;
};

int utama() {
  antrian<Tiket> antrian_tiket;
  int opsi;

  Mengerjakan {
    cout<<"=========================="<<endl;
    cout<<"TIKET LOKET ANTRIAN"<<endl;
    cout<<"=========================="<<endl;
    cout << "1. Tambah Tiket" << endl;
    cout << "2. Proses Antrian Tiket" << endl;
    cout<<"3.Keluar"<<endl;
    cout << "Pilih opsi (1-3): ";
    cin >> opsi;

    beralih (opsi) {
    kasus 1: {
      Tiket t;
      cout<<"Masukkan nama tiket: ";
      cin >> t.nama;
      cout<<"Masukkan jumlah tiket: ";
      cin >> t.jumlah;
      antrian_tiket.push(t);
      cout<<"Tiket berhasil ditambahkan ke antrian"<<endl;
      merusak;
    }
    kasus 2: {
      if (antrian_tiket.kosong()) {
        cout<<"Antrian kosong"<<endl;
      } kalau tidak {
        Tiket t = antrian_tiket.depan();
        antrian_tiket.pop();
        cout << "Tiket " << t.nama << " sejumlah " << t.jumlah
             << "telah diproses"<<endl;
      }
      merusak;
    }
    kasus 3: {
      cout<<"Program selesai"<<endl;
      merusak;
    }
    bawaan: {
      cout<<"Opsi tidak valid"<<endl;
      merusak;
    }
    }
  } while (opsi != 3);

  kembali 0;
}