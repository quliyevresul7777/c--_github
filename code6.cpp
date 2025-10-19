#include <iostream>
using namespace std;

int main() {
    double a, b, c, ortalama;

    cout << "Birinci ededi daxil edin: ";
    cin >> a;

    cout << "Ikinci ededi daxil edin: ";
    cin >> b;

    cout << "Ucuncu ededi daxil edin: ";
    cin >> c;

    // Aritmetik ortanı hesablayırıq
    ortalama = (a + b + c) / 3;

    cout << "Ededlerin ortasi: " << ortalama << endl;

    return 0;
}
