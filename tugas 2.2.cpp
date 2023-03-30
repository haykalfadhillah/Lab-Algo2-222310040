# termasuk  <iostream> _ _
menggunakan  namespace  std ;
int  const UKURAN = 5 ;

batal  menukar ( int &a, int &b) {
  int suhu;
  suhu = a;
  a = b;
  b = suhu;
}

batal  PrintArray ( int *array, int n) {
  int saya;

  untuk (i = 0 ; i < n; i++)
    cout << larik[i] << ' , ' ;
}

int  SplitArray ( int *array, int pivot, int startIndex, int endIndex) {
  int batas kiri = startIndex;
  int batas kanan = indeks akhir;
  while (batas kiri < batas kanan) {
    while (pivot < array[batas kanan] && batas kanan > batas kiri) {
      batas kanan--;
    }
    tukar (larik[bataskiri], larik[bataskanan]);
    while (pivot >= array[Batas kiri] && Batas kiri < Batas kanan) {
      batas kiri++;
    }
    tukar (larik[bataskanan], larik[bataskiri]);
  }
  kembali batas kiri;
}

void  QuickSort ( int *array, int startIndex, int endIndex) {
  int pivot = array[indeksawal];
  int titik-pisah;
  if (endIndex > startIndex) {
    splitPoint = SplitArray (array, pivot, startIndex, endIndex);
    array[splitPoint] = pivot;
    QuickSort (array, startIndex, splitPoint - 1 );
    QuickSort (array, splitPoint + 1 , endIndex);
  }
}
int  utama () {
  int array[UKURAN];
  cout << " Program ini mendemonstrasikan quick sort menggunakan algoritma "
          " rekursif "
       << akhir;
  for ( int i = 0 ; i < UKURAN; i++) {
    cout<< " masukan nilai : " ;
    cin >> larik[i];
  }
  cout<<endl<< " Daftar yang Anda masukkan adalah : " <<endl;
  PrintArray (larik, UKURAN);
  QuickSort (array, 0 , SIZE - 1 );
  cout << endl << " Daftarnya sudah diurutkan, sekarang sudah : " << endl;
  PrintArray (larik, UKURAN);
  cin. sinkronisasi ();
  cin. dapatkan ();
}