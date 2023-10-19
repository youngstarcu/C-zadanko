#include <iostream>
using namespace std;

int main() {
    int AA[10];
    int* BB = nullptr;
    int ujemne = 0;
    int pominiete = 0;

    // Wczytywanie liczb do tablicy statycznej AA
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> AA[i];
        // Sprawdzenie czy liczba jest ujemna
        if (AA[i] < 0) {
            ujemne++;
        } else {
            pominiete++;
        }
    }

    // Alokacja pamięci dla tablicy dynamicznej BB
    if (ujemne > 0) {
        BB = new int[ujemne];

        // Przypisanie ujemnych liczb do tablicy dynamicznej BB
        int j = 0;
        for (int i = 0; i < 10; i++) {
            if (AA[i] < 0) {
                BB[j] = AA[i];
                j++;
            }
        }

        // Wyświetlanie ujemnych liczb w tablicy dynamicznej BB
        cout << "Ujemne liczby: ";
        for (int i = 0; i < ujemne; i++) {
            cout << BB[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Brak ujemnych liczb." << endl;
    }

    // Informacje o ilości ujemnych liczb i liczbach pominiętych
    cout << "Liczba ujemnych liczb: " << ujemne << endl;
    cout << "Liczba pominietych liczb: " << pominiete << endl;

    // Zwolnienie pamięci zaalokowanej dla tablicy dynamicznej BB
    delete[] BB;

    return 0;
}
