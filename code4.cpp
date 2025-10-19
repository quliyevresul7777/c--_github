#include <iostream>
using namespace std;

int main() {
    double r;                 
    const double PI = 3.14;      

    cout << "Dairenin radiusunu daxil edin: ";
    cin >> r;

    double sahe = PI * r * r;       
    double cevre = 2 * PI * r;      

    cout << "Dairenin sahesi: " << sahe << endl;
    cout << "Dairenin cevresi: " << cevre << endl;

    return 0;
}
