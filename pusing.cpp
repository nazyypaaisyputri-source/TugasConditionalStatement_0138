#include <iostream>
#include <string>
using namespace std;

void masukanData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

int main() {
    return 0;
}