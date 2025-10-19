#include <iostream>
using namespace std;

int main() {
    int bal;

    cout << "Telebenin balini daxil edin (0-100): ";
    cin >> bal;

    if (bal < 0 || bal > 100) {
        cout << "Sehv bal daxil etmisiniz!" << endl;
    }
    else if (bal <= 50) {
        cout << "Qiymet: F" << endl;
    }
    else if (bal <= 60) {
        cout << "Qiymet: E" << endl;
    }
    else if (bal <= 70) {
        cout << "Qiymet: D" << endl;
    }
    else if (bal <= 80) {
        cout << "Qiymet: C" << endl;
    }
    else if (bal <= 90) {
        cout << "Qiymet: B" << endl;
    }
    else { 
        cout << "Qiymet: A" << endl;
    }

    return 0;
}
