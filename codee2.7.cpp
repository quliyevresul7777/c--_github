#include <iostream>
using namespace std;

int main() {
    double a, b, netice;
    char emeliyyat;

    cout << "Birinci ededi daxil edin: ";
    cin >> a;

    cout << "Emeliyyati daxil edin (+, -, *, /): ";
    cin >> emeliyyat;

    cout << "Ikinci ededi daxil edin: ";
    cin >> b;

    if (emeliyyat == '+') {
        netice = a + b;
    } else if (emeliyyat == '-') {
        netice = a - b;
    } else if (emeliyyat == '*') {
        netice = a * b;
    } else if (emeliyyat == '/') {
        if (b != 0) {
            netice = a / b;
        } else {
            cout << "Sifira bolme qeyri-mumkundur!" << endl;
            return 1;  // Proqramı səhv kodu ilə bitiririk
        }
    } else {
        cout << "Sehv emeliyyat daxil edilib!" << endl;
        return 1;
    }

    cout << "Netice: " << netice << endl;

    return 0;
}
