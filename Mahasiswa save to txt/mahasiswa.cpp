#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

struct tanggal {
    int hari ;
    int bulan ;
    int tahun ;
    
}; 

struct nilai_uts {
    float MTK;
    float BIN;
    float BIG;
    float IPA;
}; 

struct nilai_uas {
    float MTK;
    float BIN;
    float BIG;
    float IPA;
}; 

struct nilai_tugas {
    float MTK;
    float BIN;
    float BIG;
    float IPA;
}; 

struct mahasiswa  {
    int nisn ;
    string nama ;
    int umur ;
    string jurusan ;
    tanggal lahir ;
    nilai_uts data1;
    nilai_uas data2;
    nilai_uts data3;

};


float bobot_nilai_uts (mahasiswa &a1) {
    float total_uts ;
    total_uts = (a1.data1.MTK*0.35) + (a1.data1.BIN*0.25) + (a1.data1.BIG*0.2) + (a1.data1.IPA*0.2) ;
    return total_uts ; 
}

float bobot_nilai_uas (mahasiswa &a1) {
    float total_uas ;
    total_uas = (a1.data2.MTK*0.35) + (a1.data2.BIN*0.25) + (a1.data2.BIG*0.2) + (a1.data2.IPA*0.2) ;
    return total_uas ; 
}

float bobot_nilai_tugas (mahasiswa &a1) {
    float total_tugas ;
    total_tugas = (a1.data3.MTK*0.35) + (a1.data3.BIN*0.25) + (a1.data3.BIG*0.2) + (a1.data3.IPA*0.2) ;
    return total_tugas ; 
}

float semua_nilai (mahasiswa &a1) {
    float total ;
    total = (bobot_nilai_uts(a1) + bobot_nilai_uas(a1) + bobot_nilai_tugas(a1)) / 3 ;
    return total ;
}

void data_siswa (mahasiswa &a1) {
    cout << "====== ISI DATA MAHASISWA " << " ======\n" ;
    cout << "masukkan NISN : " ;
    cin >> a1.nisn ;
    cin.ignore () ;
    cout << "masukkan nama : " ;
    getline(cin,a1.nama);
    cout << "masukkan umur : " ;
    cin >> a1.umur ;
    cin.ignore () ;
    cout << "masukkan jurusan : " ;
    getline(cin,a1.jurusan) ;
    cout << "masukkan tanggal lahir [contoh: 29 11 2009 (kasih space jangan enter)]: " ;
    cin >> a1.lahir.hari >> a1.lahir.bulan >> a1.lahir.tahun ;
    cout << endl ;
}

void nilai_siswa_uts (mahasiswa &a1) {
    cout << "masukkan nilai UTS" << endl ;
    cout << "masukkan nilai MTK : ";
    cin >> a1.data1.MTK ;
    cout << "masukkan nilai BIN : ";
    cin >> a1.data1.BIN ;
    cout << "masukkan nilai BIG : ";
    cin >> a1.data1.BIG ;
    cout << "masukkan nilai IPA : ";
    cin >> a1.data1.IPA ;

}

void nilai_siswa_uas (mahasiswa &a1) {
    cout << "masukkan nilai UAS" << endl ;
    cout << "masukkan nilai MTK : ";
    cin >> a1.data2.MTK ;
    cout << "masukkan nilai BIN : ";
    cin >> a1.data2.BIN ;
    cout << "masukkan nilai BIG : ";
    cin >> a1.data2.BIG ;
    cout << "masukkan nilai IPA : ";
    cin >> a1.data2.IPA ;

}

void nilai_siswa_tugas (mahasiswa &a1) {
    cout << "masukkan nilai TUGAS" << endl ;
    cout << "masukkan nilai MTK : ";
    cin >> a1.data3.MTK ;
    cout << "masukkan nilai BIN : ";
    cin >> a1.data3.BIN ;
    cout << "masukkan nilai BIG : ";
    cin >> a1.data3.BIG ;
    cout << "masukkan nilai IPA : ";
    cin >> a1.data3.IPA ;

}

void tampil (ofstream &file,mahasiswa &a1) {
    cout << "----|| Data Siswa ||----" << endl ;
    cout << "NISN             : " << a1.nisn << endl ;
    cout << "Nama             : " << a1.nama << endl ;
    cout << "Umur             : " << a1.umur << endl ;
    cout << "Jurusan          : " << a1.jurusan<< endl ;
    cout << "Tanggal lahir    : " << a1.lahir.hari << "/" << a1.lahir.bulan << "/" << a1.lahir.tahun << endl ;
    cout << endl ;
    cout << "-- DATA NILAI SISWA -- \n" ;
    cout << "UTS              : " << endl ;
    cout << "MTK : " << a1.data1.MTK << endl ;
    cout << "BIN : " << a1.data1.BIN << endl ;
    cout << "BIG : " << a1.data1.BIG << endl ;
    cout << "IPA : " << a1.data1.IPA << endl ;
    cout << "UAS              : " << endl ;
    cout << "MTK : " << a1.data2.MTK << endl ;
    cout << "BIN : " << a1.data2.BIN << endl ;
    cout << "BIG : " << a1.data2.BIG << endl ;
    cout << "IPA : " << a1.data2.IPA << endl ;
    cout << "TUGAS            : " << endl ;
    cout << "MTK : " << a1.data3.MTK << endl ;
    cout << "BIN : " << a1.data3.BIN << endl ;
    cout << "BIG : " << a1.data3.BIG << endl ;
    cout << "IPA : " << a1.data3.IPA << endl ;
    cout << "rata nilai UTS   : " << bobot_nilai_uts (a1) << endl ;
    cout << "rata nilai UAS   : " << bobot_nilai_uas (a1) << endl ;
    cout << "rata nilai TUGAS : " << bobot_nilai_tugas (a1) << endl ;
    cout << "Nilai Akhir      : " << semua_nilai (a1) << endl ;
    cout << endl ;

    file << "----|| Data Siswa ||----" << endl ;
    file << "NISN             : " << a1.nisn << endl ;
    file << "Nama             : " << a1.nama << endl ;
    file << "Umur             : " << a1.umur << endl ;
    file << "Jurusan          : " << a1.jurusan<< endl ;
    file << "Tanggal lahir    : " << a1.lahir.hari << "/" << a1.lahir.bulan << "/" << a1.lahir.tahun << endl ;
    file << endl ;
    file << "-- DATA NILAI SISWA -- \n" ;
    file << "UTS              : " << endl ;
    file << "MTK : " << a1.data1.MTK << endl ;
    file << "BIN : " << a1.data1.BIN << endl ;
    file << "BIG : " << a1.data1.BIG << endl ;
    file << "IPA : " << a1.data1.IPA << endl ;
    file << "UAS              : " << endl ;
    file << "MTK : " << a1.data2.MTK << endl ;
    file << "BIN : " << a1.data2.BIN << endl ;
    file << "BIG : " << a1.data2.BIG << endl ;
    file << "IPA : " << a1.data2.IPA << endl ;
    file << "TUGAS            : " << endl ;
    file << "MTK : " << a1.data3.MTK << endl ;
    file << "BIN : " << a1.data3.BIN << endl ;
    file << "BIG : " << a1.data3.BIG << endl ;
    file << "IPA : " << a1.data3.IPA << endl ;
    file << "rata nilai UTS   : " << bobot_nilai_uts (a1) << endl ;
    file << "rata nilai UAS   : " << bobot_nilai_uas (a1) << endl ;
    file << "rata nilai TUGAS : " << bobot_nilai_tugas (a1) << endl ;
    file << "Nilai Akhir      : " << semua_nilai (a1) << endl ;
    file << endl ;

}

void tulis_txt() {
    ifstream file("data_mahasiswa.txt");
    if (!file) {
        cout << "File tidak ditemukan atau gagal dibuka!" << endl;
        return;
    }

    string baris;
    cout << "\n=== Isi data_mahasiswa.txt ===\n";
    while (getline(file, baris)) {
        cout << baris << endl;
    }
    file.close();
}

void cari_nisn() {
    ifstream file("data_mahasiswa.txt");
    if (!file) {
        cout << "File tidak ditemukan!" << endl;
        return;
    }

    string nisn, baris;
    bool ketemu = false;
    bool tampilkan = false;

    cout << "Masukkan NISN yang dicari: ";
    cin >> ws;
    getline(cin, nisn);

    cout << endl;

    while (getline(file, baris)) {
        if (baris.rfind("NISN", 0) == 0) {
    size_t pos = baris.find(":");
    if (pos != string::npos) {
        string nisn_file = baris.substr(pos + 2);
        if (nisn_file == nisn) {
            ketemu = true;
            tampilkan = true;
            cout << "\n=== Data Siswa Ditemukan ===\n";
            cout << baris << endl;
            continue;
        }
    }
}
        if (tampilkan) {
            if (baris.find("----|| Data Siswa ||----") != string::npos && ketemu) {
                break;
            }
            cout << baris << endl;
        }
    }

    if (!ketemu)
        cout << "Data dengan NISN " << nisn << " tidak ditemukan.\n";

    file.close();
}

void urutkan_data() {
    ifstream file("data_mahasiswa.txt");
    if (!file) {
        cout << "File data_mahasiswa.txt tidak ditemukan!\n";
        return;
    }

    struct data_ringkas {
        string nisn;
        string nama;
        string jurusan;
        float rata;
    };

    data_ringkas daftar[100]; 
    int jumlah = 0;
    string baris;
    data_ringkas data;

    while (getline(file, baris)) {
        if (baris.find("NISN") != string::npos) {
            data = {}; 
            data.nisn = baris.substr(baris.find(":") + 2);
        } 
        else if (baris.find("Nama") != string::npos) {
            data.nama = baris.substr(baris.find(":") + 2);
        } 
        else if (baris.find("Jurusan") != string::npos) {
            data.jurusan = baris.substr(baris.find(":") + 2);
        } 
        else if (baris.find("Nilai Akhir") != string::npos) {
            string nilaiStr = baris.substr(baris.find(":") + 2);
            try {
                data.rata = stof(nilaiStr);
            } catch (...) {
                data.rata = 0;
            }
            daftar[jumlah++] = data;
        }
    }
    file.close();

    if (jumlah == 0) {
        cout << "Tidak ada data nilai ditemukan.\n";
        return;
    }

    // === Bubble sort manual ===
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (daftar[j].rata < daftar[j + 1].rata) {
                data_ringkas temp = daftar[j];
                daftar[j] = daftar[j + 1];
                daftar[j + 1] = temp;
            }
        }
    }

    cout << "\n=== Data Siswa Berdasarkan Nilai Tertinggi ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "Rangking  : " << i + 1 << endl;
        cout << "NISN      : " << daftar[i].nisn << endl;
        cout << "Nama      : " << daftar[i].nama << endl;
        cout << "Jurusan   : " << daftar[i].jurusan << endl;
        cout << "Nilai Akhir: " << daftar[i].rata << endl;
        cout << "-----------------------------\n\n";
    }
}

int main () {
    int pilih ;
    mahasiswa a1 ;
    ofstream file ("data_mahasiswa.txt", ios::app) ;
        
    do {
        cout << "-----------------------------\n";
        cout << "Menu untuk siswa : " << endl ;
        cout << "1.Tambah data siswa " << endl ;
        cout << "2.Tampilkan data siswa " << endl ;
        cout << "3.Cari siswa dengan NISN " << endl ;
        cout << "4.Data siswa menurut rangking" << endl ;
        cout << "5.KELUAR" << endl ;
        cout << "pilih menu :" ;
        cin >> pilih ;
        
            switch (pilih) {
                case 1 :
                data_siswa (a1) ;
                nilai_siswa_uts (a1) ;
                nilai_siswa_uas (a1) ;
                nilai_siswa_tugas (a1) ;
                tampil (file ,a1) ;
                cout << " " << endl ;
                cout << "Data siswa berhasil di simpan"  << endl ;
                
                file.close () ;
                break;
                
                case 2 :
                tulis_txt () ;
                break;

                case 3 :
                cari_nisn () ;
                break;
                
                case 4 :
                urutkan_data () ;
                break;

                case 5 :
                cout << "keluar dari program" << endl ;
                break;

                default:
                cout << "MENU TIDAK ADA DI DAFTAR SILAHKAN INPUT KEMBALI" << endl  ;
            }

        } while (pilih != 5);  
                
        return 0 ;
    
}

