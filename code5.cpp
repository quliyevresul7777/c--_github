#include <iostream>
using namespace std;

int main() {
    int secim;
    double derece;

    cout << "Hansy konversiyanı etmək istəyirsiniz?" << endl;
    cout << "1. Celsius -> Fahrenheit" << endl;
    cout << "2. Fahrenheit -> Celsius" << endl;
    cout << "Seçiminizi edin (1 və ya 2): ";
    cin >> secim;

    if (secim == 1) {
        // Celsius -> Fahrenheit
        cout << "Celsius dərəcəsini daxil edin: ";
        cin >> derece;
        double fahrenheit = (derece * 9.0 / 5.0) + 32;
        cout << derece << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    } else if (secim == 2) {
        // Fahrenheit -> Celsius
        cout << "Fahrenheit dərəcəsini daxil edin: ";
        cin >> derece;
        double celsius = (derece - 32) * 5.0 / 9.0;
        cout << derece << " Fahrenheit = " << celsius << " Celsius" << endl;
    } else {
        cout << "Yanlış seçim etdiniz!" << endl;
    }

    return 0;
}
