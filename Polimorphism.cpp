#include <iostream>
#include <cstring>
using namespace std;

class mahasiswa {
  public:
  virtual void status (){
    cout <<"  " <<endl;
  }
  virtual void nama (){
    cout <<"  " <<endl;
  }
  virtual void umur (){
    cout <<"  " <<endl;
  }
  virtual void jurusan (){
    cout <<"  " <<endl;
  }
  virtual void fakultas (){
    cout <<"  " <<endl;
  }
};

class haykal : public mahasiswa  {
public :
void status (){
  cout <<"Mahasiswa aktif "<<endl;
 }
void nama (){
  cout<<"Muhammad Haykal Fadhillah"<<endl;
 }
void umur (){
  cout<<"19 Tahun"<<endl;
 }
void jurusan (){
  cout<<"Teknologi Informasi"<<endl;
 }
void fakultas (){
  cout<<"Informatika"<<endl;
 }
};

class albian : public mahasiswa  {
public :
void status (){
  cout <<"Mahasiswa aktif "<<endl;
 }
void nama (){
  cout<<"Albian Restu Nugraha"<<endl;
 }
void umur (){
  cout<<"18 Tahun"<<endl;
 }
void jurusan (){
  cout<<"Menegement"<<endl;
 }
void fakultas (){
  cout<<"Bisnis"<<endl;
 }
};

int main (){
  mahasiswa *data1 = new risma ();
  mahasiswa *data2 = new feby ();

  cout <<"========POLIMORPHISM======="<<endl;
  cout <<"===Tugas Muhammad Haykal Fadhillah==="<<endl;
  cout <<"\nData Mahasiswa 1: "<<endl;
  cout <<"Status Mahasiswa : "; data1  ->  status ();
  cout <<"Nama Mahasiswa : "; data1  ->  nama ();
  cout <<"Umur : "; data1  ->  umur ();
  cout <<"Jurusan : ";data1  ->  jurusan ();
  cout <<"Fakultas : ";data1  ->  fakultas ();
  
  cout <<"\n\nData Mahasiswa 2: "<<endl;
  cout <<"Status Mahasiswa : ";data2  ->  status ();
  cout <<"Nama Mahasiswa : ";data2  ->  nama ();
  cout <<"Umur : ";data2  ->  umur ();
  cout <<"Jurusan : ";data2  ->  jurusan ();
  cout <<"Fakultas : ";data2  ->  fakultas ();
  return 0;
}