#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for (i = 60; i > 10; i -= 10) 
    {
        cout << 1 << "Selamat Pagi Dunia" << endl;
    }

    cout << "Nilai i terakhir : " << i << endl;

    for (i = 0; i < 5; i++) 
    {
        cout << "Masukkan nilai index ke-" << i << ":";
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++) 
    {
        cout << "Data array ke-" << i << ":" << arr[i] << endl;
    }
    return 0;
}