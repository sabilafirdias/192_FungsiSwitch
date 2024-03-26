// SwitchCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b) {
    return a + b;
}

int pengurangan(int a, int b) {
    return a - b;
}

int perkalian(int a, int b) {
    return a * b;
}

float pembagian(int a, int b) {
    return a / b;
}

void inputData() {
    cout << "\nMasukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
}

int main()
{
    int pilihan;
    do {
        system("CLS");
        cout << "Menu kalkulator sederhana" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            inputData();
            cout << "\nHasil penjumlahan: " << penjumlahan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 2:
            inputData();
            cout << "\nHasil pengurangan: " << pengurangan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        }
    }
}


