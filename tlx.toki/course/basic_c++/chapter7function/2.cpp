// soalnya sama dgn yg sblmnya, cmn pake fungsi

#include <iostream>
using namespace std;

int jantan[] = {0, 10, 50, 60};
int betina[] = {7, 80, 9, 40};
int harga[] = {0, 0, 0, 0};

int biaya(int jumlahBebek){
    int hargaBebek;

    if (jumlahBebek < 10){
        hargaBebek = 100000;
    } else if (jumlahBebek >= 10 && jumlahBebek <= 50){
        hargaBebek = 75000;
    } else if (jumlahBebek > 50){
        hargaBebek = 50000;
    }

    return hargaBebek * jumlahBebek;
}

int main() {

    for (int i = 0; i < 4; i++) {
        harga[i] = biaya(jantan[i]) + biaya(betina[i]);
        cout << "Hari ke-" << i + 1 << " : Rp." << harga[i]<< endl;
    }
}
