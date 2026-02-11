#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    int n = data.size();
    
    vector<long long> angka(n);
    
    for (int i = 0; i < n; i++){
        angka[i] = stoi(data[i]);
    }
    
    long long sum = 0.0, times = 1.0;
    
    if (op == '+'){
        for (int i = 0; i < n; i++){
            sum += angka[i];
        }
        return to_string(sum);
    } else if (op == '*'){
        for (int i = 0; i < n; i++){
            times *= angka[i];
        }
        return to_string(times);
    } else {
        return "KESALAHAN";
    }
    
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}

