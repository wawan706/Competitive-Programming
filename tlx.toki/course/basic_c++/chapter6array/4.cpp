// ngitung jumlah bebek dari hasil pembelian dan penjualan tiap hari

#include <iostream>
using namespace std;

int main() {
    int beli[] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

    int totalBebek = 0;
    cout << "jumlah bebek tiap hari:" << endl;

    for (int i = 0; i < 10; i++){
        totalBebek += beli[i] - jual[i];
        cout << "tanggal " << i + 1 << ": " << totalBebek << endl;
    }

    cout << "total bebek saat ini: " << totalBebek;

    return 0;
}
