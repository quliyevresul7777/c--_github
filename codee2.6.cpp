#include <iostream>
using namespace std;

int main() {
    int ay;

    cout << "Ay nomresini daxil edin (1-12): ";
    cin >> ay;

    if (ay < 1 || ay > 12) {
        cout << "Sehv ay nomresi daxil edilib!" << endl;
    } 
    else if (ay == 12 || ay == 1 || ay == 2) {
        cout << "Qis" << endl;
    } 
    else if (ay >= 3 && ay <= 5) {
        cout << " Yaz" << endl;
    } 
    else if (ay >= 6 && ay <= 8) {
        cout << " Yay" << endl;
    } 
    else {  
        cout << " Payiz" << endl;
    }

    return 0;
}
