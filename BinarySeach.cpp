#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\nJumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }

    cout << "==============================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "==============================" << endl;

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << "= ";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int i = 0; i <= nPanjang - pass - 1; i++)
        {
            if (element[i] > element[i + 1])
            {
                int temp = element[i];
                element[i] = element[i + 1];
                element[i + 1] = temp;
            }
        }
        pass++;
    } while (pass < nPanjang);
}
