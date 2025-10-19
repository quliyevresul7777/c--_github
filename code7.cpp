#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Birinci ededi daxil edin (a): ";
    cin >> a;

    cout << "Ikinci ededi daxil edin (b): ";
    cin >> b;

  
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Yer deyisenden sonra:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
