// penyederhanaan dari sebelumnya

#include <iostream>
using namespace std;

int main() {
    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    int hasil = 0, luasTotal = 0;

    for (int i = 0; i < 5; i++) {
        if (luas[i] >= 80000) {
            hasil++;
            luasTotal += luas[i];
        }
    }

    cout << "Jumlah kandang yang mau dibeli: " << hasil << endl;
    cout << "Total luas ke-" << hasil << " kandang tersebut: " << luasTotal << endl; 
}
