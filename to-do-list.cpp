#include <iostream>
#include <string>
using namespace std;

int main() {
    string todo[100];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=== To-Do List ===" << endl;
        cout << "1. Tambah Tugas" << endl;
        cout << "2. Lihat Semua Tugas" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if(pilihan == 1) {
            cout << "Masukkan tugas: ";
            getline(cin, todo[jumlah]);
            jumlah++;
        } 
        else if(pilihan == 2) {
            cout << "Daftar Tugas:" << endl;
            for(int i = 0; i < jumlah; i++) {
                cout << i+1 << ". " << todo[i] << endl;
            }
        }
    } while(pilihan != 3);

    return 0;
}
