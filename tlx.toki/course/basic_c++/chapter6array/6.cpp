// array 2 dimensi

#include <iostream>
using namespace std;

int main() {
    int luas[4][3]{
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int kandang = 0;

    cout << "-----------------------------------------------------------" << endl;
    cout << "ini adalah program yang mencari kandang yang memiliki luas \n80000 atau lebih dari 4 toko, dan tiap toko punya 3 jenis kandang" << endl;
    cout << "-----------------------------------------------------------" << endl;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (luas[i][j] > 80000){
                kandang++;
            }
            cout << "merk " << j + 1 << " toko " << i + 1 << ": " << kandang << " kandang" << endl;
        }
    }

    cout << "jumlah kandang yang luasnya lebih dari sama dengan 80000 adalah " << kandang << " kandang" << endl;

}
