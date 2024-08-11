#include <iostream>
using namespace std;

int beruntung(int x){
    int jumlah = 0;
    for (int n = 1; n <= x; n++){
        int ruas1 = 0; int ruas2 = 0;
        for (int j = 1; j <= n-1; j++){
            ruas1 = ruas1+j;
        }
        for (int j = n+1; j <= x; j++){
            ruas2 = ruas2+j;
        }
        if (ruas1 == ruas2){
            jumlah++;
        }
    }
    return jumlah;
}

int main(){
    int t;
    cin >> t;
    int nilai_maks[t];
    for (int i = 0; i < t; i++){
        cin >> nilai_maks[i];
    }
    for (int i = 0; i < t; i++){
        cout << beruntung(nilai_maks[i]) << endl;
    }
}