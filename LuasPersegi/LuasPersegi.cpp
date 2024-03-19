#include <iostream>
using namespace std;

int sisi;

void inputData() 
{
    cout << "Masukkan nilai sisi = ";
    cin >> sisi;
}

int hitungLuas() 
{
    return sisi * sisi;
}

void display()
{
    cout << "Luas persegi adalah " << hitungLuas() << endl;
}
int main()
{
    inputData();
    display();
}