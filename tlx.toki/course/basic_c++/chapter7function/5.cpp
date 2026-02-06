#include <iostream>
using namespace std;

int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

int denda(int a, int b){
    int bayar;
    if (a > b || a < b){
        if (a > b){
            bayar = (a - b) * 1000;
        } else if (a < b){
            bayar = (b - a) * 1000;
        } else {
            bayar = 0;
        }
    }
    return bayar;
}

int main (){
    int bayar;
    for (int i = 0; i < 4; i++){
        bayar = denda(jantan[i], betina[i]);
        cout << "denda hari ke-" << i + 1 << ": Rp." << bayar << endl;
    }
    return 0;
}
