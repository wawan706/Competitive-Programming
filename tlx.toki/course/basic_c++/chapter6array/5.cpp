// menghitung lampu yang menyala dari jam 1-10, lampu kedap kedip sesuai jamnya

#include <iostream>
using namespace std;

int main() {
    bool lampu[101];

    for (int i = 1; i <= 100; i++){
        lampu[i] = false;
    }

    for (int j = 1; j <= 10; j++){
        for (int i = 1; i <= 100; i++){
            if (i % j == 0){
                lampu[i] = !lampu[i];
            }
        }
    }

    int lampuNyala = 0;
    for (int i = 1; i <= 100; i++){
        if (lampu[i] = true){
            lampuNyala++;
        }
    }

    cout << lampuNyala << endl;

    return 0;
}
