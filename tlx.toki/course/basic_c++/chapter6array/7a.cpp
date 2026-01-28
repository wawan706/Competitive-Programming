// hitung total harga ketiga jenis kandang di semua toko 

#include <iostream>
using namespace std;

int main() {
    int luas[4][3]{
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int merk1 = 0;
    int merk2 = 0;
    int merk3 = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (j == 0){
                merk1 += luas[i][j] * 100;
            } else if (j == 1){
                merk2 += luas[i][j] * 120;
            } else if (j == 2){
                merk3 += luas[i][j] * 150;
            }
        }
    }

    cout << merk1 << '\n' << merk2 << '\n' << merk3 << endl;
}
