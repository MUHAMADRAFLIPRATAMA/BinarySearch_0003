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

void display()
{
    cout << "==============================\n";
    cout << "Elemen Array Setelah Diurutkan (Asc)\n";
    cout << "==============================\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << element[i];
        if (i < nPanjang - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==============================\n";
        cout << "Pencarian Binary Search\n";
        cout << "==============================\n";

        int item;
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> item;

        int low = 0;
        int high = nPanjang - 1;

        do
        {
            int mid = (low + high) / 2;

            if (element[mid] == item)
            {
                cout << "\nElemen " << item << " ditemukan pada indeks ke-" << mid << ".\n";
                return;
            }
            else if (item < element[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        } while (low <= high);

        cout << "\nMaaf! Elemen " << item << " tidak ditemukan dalam array.\n";

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}


int main()
{
    input();
    bubbleSortArray();
    display();
    binarySearch();
}