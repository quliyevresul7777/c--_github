#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Birinci ededi daxil edin: ";
    cin >> a;

    cout << "Ikinci ededi daxil edin: ";
    cin >> b;

    if (a > b) {
        cout << "Boyuk eded: " << a << endl;
    } else if (b > a) {
        cout << "Boyuk eded: " << b << endl;
    } else {
        cout << "Her iki eded beraberdir." << endl;
    }

    return 0;
}
