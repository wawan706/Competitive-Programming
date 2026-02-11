#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        int hasil = 1;
        for (int i = 2; i < n; i++){
            hasil *= i;
        }
        return n * hasil;
    }
}

int main() {
    cout << faktorial(12) << endl;
}
