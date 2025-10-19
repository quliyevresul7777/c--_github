#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Iki tam eded daxil edin: ";
    cin >> a >> b;

    cout << "Cem: " << a + b << endl;
    cout << "Ferq: " << a - b << endl;
    cout << "Hasil: " << a * b << endl;

    if (b != 0)
        cout << "Qismet: " << (double)a / b << endl;
    else
        cout << "0-a bolme yoxdur!" << endl;

    return 0;
}
