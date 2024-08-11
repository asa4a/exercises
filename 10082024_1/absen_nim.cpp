#include <iostream>
using namespace std;

int main(){
    int kertas;
    cout << "Masukkan jumlah kertas kehadiran : ";
    cin >> kertas;

    int nim[kertas];
    for (int i = 1; i < kertas; i++){
        cout << "Masukkan NIM mahasiswa : ";
        cin >> nim[i];
        if (nim[i] > 999){
            return -1;
        }
    }

    for (int i = 1; i < kertas; i++){
        for(int j = i+1; j < kertas; j++){
            if (nim[j] < nim[i]){
                int temp = nim[j];
                nim[j] = nim[i];
                nim[i] = temp;
            }
        }
    }

    int rekap = 0;
    for (int i = 1; i < kertas; i++){
        rekap++;
        if (nim[i] != nim[i+1]){
            cout << nim[i] << " - " << rekap << " kali" << endl;
            rekap = 0;
        }
    }
}