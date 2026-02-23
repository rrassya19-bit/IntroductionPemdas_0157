#include <iostream>
using namespace std;

int main() {  //mulai
    int p, l, luas;

    //langkah 2
    cout << "Masukkan panjang: ";
    cin >> p;

    //langkah 3
    cout << "Masukkan lebar: ";
    cin >> l;

    //langkah 4
    luas = p * l;

    //langkah 5
    cout << "Haasilnya= " << luas;   
}  //selesai

int main() {
    int r;
    double luas;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    
    luas = 3.14 * r * r;
    cout << "Luas lingkaran adalah: " << luas;

}