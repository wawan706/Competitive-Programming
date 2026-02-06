// ngitung bebek jantan n betina

#include <iostream>
using namespace std;

int main() {
    int jantan[] = {0, 10, 50, 60};
    int betina[] = {7, 80, 9, 40};
    int harga[] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++){
        
        // jantan
        if (jantan[i] < 10){
            harga[i] += 100000 * jantan[i];
        } else if (jantan[i] >= 10 && jantan[i] <= 50){
            harga[i] += 75000 * jantan[i];
        } else if (jantan[i] > 50){
            harga[i] += 50000 * jantan[i];
        }

        // betina
        if (betina[i] < 10){
            harga[i] += 100000 * betina[i];
        } else if (betina[i] >= 10 && betina[i] <= 50){
            harga[i] += 75000 * betina[i];
        } else if (betina[i] > 50){
            harga[i] += 50000 * betina[i];
        }

        cout << "hari ke-" << i + 1 << " : Rp." << harga[i] << endl;
    }

}
