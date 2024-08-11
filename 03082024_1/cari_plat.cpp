#include <iostream>
using namespace std;

int main(){
    int jumlah;
    cout << "Masukkan jumlah mobil : ";
    cin >> jumlah;
    int mobil[jumlah];
    cout << "Masukkan 4 nomor mobil yang ada : " << endl;

    // masukkan nilai plat mobil
    for (int i = 0; i < jumlah; i++){
        cin >> mobil[i];
    }
    
    // urutkan nilai plat mobil
    for (int i = 0; i < jumlah; i++){
            for (int j = i+1; j < jumlah; j++){
                if (mobil[j] < mobil[i]){
                int temp = mobil[j];
                mobil[j] = mobil[i];
                mobil[i] = temp;
            }
        }
    }

    // cari plat
    int total, besar;
    for (int i = 1; i < jumlah; i++){
        if (mobil[i] - mobil[i-1] == 2){
            total++;
            besar = mobil[i];
        }
    }
    if (total == 1){
        cout << "Mobil Charlie adalah mobil dengan nomor " << besar-1 << endl;
    } else {
        cout << "Tidak ada mobil yang merupakan mobil Charlie" << endl;
    }
}