#include <iostream>
using namespace std;

int panjang, lebar;

void inputData() 
{
    cout << "Masukkan Nilai Panjang : ";
    cin >> panjang;
    cout << "Masukkan Nilai Lebar : ";
    cin >> lebar;
}
int hitungLuas() 
{
    return panjang * lebar;
}
void display() 
{
    cout << "Luas Persegi Panjang adalah " << hitungLuas() << endl;
}
int main()
{
    inputData();
    display();
}