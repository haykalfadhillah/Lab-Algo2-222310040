# termasuk  <iostream> _ _
menggunakan  namespace  std ;

// Fungsi Penukaran Nilai
void  swap ( int arr[], int pos1, int pos2){
  int suhu;
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = suhu;
}
// Mempartisi array
int  partisi ( int arr[], int rendah, int tinggi, int pivot){
  int i = rendah;
  int j = rendah;
  while (i<=tinggi){
    if (arr[i]>pivot){
      saya++;
    }
    lain {
      tukar (arr, i, j);
      saya++;
      j++;
    }
  }
  kembali j- 1 ;
}
// Fungsi Quicksort
void  quicksort ( int arr[], int rendah, int tinggi){
  if (rendah<tinggi){
    int pivot = arr[tinggi];
    int pos = partisi (arr, rendah, tinggi, pivot); // pos adalah indeks partisi

    quicksort (arr, low, pos- 1 ); // Quicksort pada bagian sebelum partisi
    quicksort (arr, pos+ 1 , tinggi); // Quicksort pada bagian setelah patisi
  }
}
// Menginput data array
int  utama () {
  int n;
  cout<< " Tentukan panjang array: " ;
  cin >> n;
  int arr[n];
  untuk ( int i= 0 ; i<n; i++){
    cin >> arr[i];
  }
  // Data array yang akan diurutkan
  quicksort (arr, 0 , n- 1 );
  cout<< " Berikut adalah array yang telah diurutkan: " ;
  untuk ( int i= 0 ; i<n; i++){
    cout << arr[i] << " \t " ;
  }
}