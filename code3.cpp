#include <iostream>
using namespace std;

int main() {
    int eded;
    cout << "Bir eded daxil edin: ";
    cin >> eded;

    int kvadrat = eded * eded;
    int kub = eded * eded * eded;

    cout << "Kvadrati: " << kvadrat << endl;
    cout << "Kubu: " << kub << endl;

    return 0;
}
