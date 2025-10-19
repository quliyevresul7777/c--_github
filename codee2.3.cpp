#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Birinci ededi daxil edin: ";
    cin >> a;

    cout << "Ikinci ededi daxil edin: ";
    cin >> b;

    cout << "Ucuncu ededi daxil edin: ";
    cin >> c;

    int boyuk;

    if (a >= b && a >= c) {
        boyuk = a;
    } else if (b >= a && b >= c) {
        boyuk = b;
    } else {
        boyuk = c;
    }

    cout << "En boyuk eded: " << boyuk << endl;

    return 0;
}
