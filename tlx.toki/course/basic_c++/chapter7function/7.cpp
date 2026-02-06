#include <iostream>
using namespace std;

int kandang[11];

void kosongkan_kandang(){
    for (int i = 0; i < 11; i++){
        kandang[i] = 0;
    }
}

int bebek[7][3]{
    {1, 8, 2},
    {2, 9, 10},
    {5, 6, 1},
    {9, 10, 3},
    {1, 4, 7},
    {1, 4, 2},
    {4, 8, 6},
};

void isi_bebek_ke_dalam_kandang(int kAwal, int kAkhir, int banyakBebek){
    for (int i = kAwal; i < kAkhir; i++){
        kandang[i] += banyakBebek;
    }
}

int bebek_terbanyak(){
    int terbanyak = kandang[1];
    for(int i = 1; i <= 11; i++){
        terbanyak = max(terbanyak, kandang[i]);
    }
    return terbanyak;
}

int main(){
    kosongkan_kandang();

    for (int i = 0; i < 7; i++){
        int kAwal = bebek[i][0];
        int kAkhir = bebek[i][1];
        int banyakBebek = bebek[i][2];
        isi_bebek_ke_dalam_kandang(kAwal, kAkhir, banyakBebek); 
    }   

    cout << "bebek terbanyak di salah satu kandang adalah " << bebek_terbanyak() << endl;
}
