#include <iostream>
using namespace std;

int main (){
    long long n, m, a, panjang, lebar, jumlah_keramik;
    cin >> n >> m >> a;
    if (n < 1 || n > 1000000000 || m < 1 || m > 1000000000 || a < 1 || a > 1000000000){
        cout << "masukkan angka yg di rentang 1 sampai 10^9";
    } else {
        if (n % a == 0){
            panjang  = n / a;
        } if (n % a != 0){
            panjang = (n / a) + 1;
        } if (m % a == 0){
            lebar = m / a;
        } if (m % a != 0){
            lebar = (m / a) + 1;
        }
        cout << panjang * lebar;
    }
    return 0;
}
