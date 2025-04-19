// serazeni_pole.cpp - program pro serazeni pole bez pouziti vestavenych funkci
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Zadejte pocet prvku v poli: ";
    cin >> n;
    if (n <= 0) {
        cout << "Neplatna velikost pole.\n";
        return 1;
    }

    // Alokace pole
    int *pole = new int[n];
    cout << "Zadejte " << n << " celych cisel: \n";
    for (int i = 0; i < n; ++i) {
        cin >> pole[i];
    }

    // Bubble sort algoritmus
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (pole[j] > pole[j + 1]) {
                // Prohozeni prvku
                int tmp = pole[j];
                pole[j] = pole[j + 1];
                pole[j + 1] = tmp;
            }
        }
    }

    // Vypis serazeneho pole
    cout << "Serazene pole: ";
    for (int i = 0; i < n; ++i) {
        cout << pole[i] << " ";
    }
    cout << "\n";

    delete[] pole;
    return 0;
}
