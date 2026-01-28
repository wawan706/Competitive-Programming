// hitung terbesar

#include <iostream>
using namespace std;

int main() {
    int luas[] = {225*335, 215*394, 198*400, 314*298, 299*278};
    int kandang[] = {1, 2, 3, 4, 5};

    int terbesar = luas[0];
    int kandangKe = kandang[0]; 

    for (int i = 1; i < 5; i++){
        if (luas[i] > terbesar){
            terbesar = luas[i];
            kandangKe = kandang[i];
        }
    }

    cout << "kandang terbesar adalah kandang ke-" << kandangKe << ", luasnya adalah " << terbesar << endl;

    return 0;
}
