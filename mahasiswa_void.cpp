#include <iostream>
using namespace std ;

struct tanggal {
    int hari ;
    int bulan ;
    int tahun ;
    
}; 

struct nilai {
    float uts;
    float uas;
    float tugas;
}; 

struct mahasiswa  {
    string nama ;
    int umur ;
    string jurusan ;
    tanggal lahir ;
    nilai data;
};

int input_jumlah () {
    int jumlah ;
    cout << "masukkan jumlah mahasiswa : " ;
    cin >> jumlah ;
    return jumlah ;
}

float bobot_nilai (mahasiswa &a1) {
    float total_nilai ;
    total_nilai = a1.data.uts * 0.4 + a1.data.uas * 0.35 + a1.data.tugas * 0.25;
    return total_nilai ; 
}

void data_siswa (mahasiswa &a1) {
    
    cout << "====== DATA MAHASISWA " << " ======\n" ;
    cout << "masukkan nama : " ;
    cin >> a1.nama ;
    cout << "masukkan umur : " ;
    cin >> a1.umur ;
    cout << "masukkan jurusan : " ;
    cin >> a1.jurusan ;
    cout << "masukkan tanggal lahir [contoh: 29 11 2009 (kasih space jangan enter)]: " ;
    cin >> a1.lahir.hari >> a1.lahir.bulan >> a1.lahir.tahun ;
    cout << endl ;
}

void nilai_siswa (mahasiswa &a1) {
    
    cout << "|| masukkan nilai || \n" ;
    cout << "UTS : " ;
    cin >> a1.data.uts ;
    cout << "UAS : " ; 
    cin >> a1.data.uas;
    cout << "TUGAS : " ; 
    cin >> a1.data.tugas;
    cout << endl ;
}

    
void tampil (mahasiswa &a1) {
    cout << "----|| Data Siswa ||----" << endl ;
    cout << "Nama             : " << a1.nama << endl ;
    cout << "Umur             : " << a1.umur << endl ;
    cout << "Jurusan          : " << a1.jurusan<< endl ;
    cout << "Tanggal lahir    : " << a1.lahir.hari << "/" << a1.lahir.bulan << "/" << a1.lahir.tahun << endl ;
    cout << endl ;
    cout << "-- DATA NILAI SISWA -- \n" ;
    cout << "UTS              : " << a1.data.uts << endl ;
    cout << "UAS              : " << a1.data.uas << endl ;
    cout << "TUGAS            : " << a1.data.tugas << endl ;
    cout << "|Bobot nilai       \n|uas 40% \n|uts 35% \n|tugas 25% \n|Nilai Akhir : " ;

    cout << bobot_nilai (a1) ;

    cout << endl ;
}

int main () {
    int jumlah = input_jumlah () ;

        for (int i = 0 ; i < jumlah ; i++) {
        mahasiswa a1 ;
        data_siswa (a1) ;
        nilai_siswa (a1) ;
        tampil (a1) ;

    }
    
    
}