#include <iostream>
using namespace std;

int main() {
    int eded;

    cout << "Zehmet olmasa bir eded daxil edin: ";
    cin >> eded;

    if (eded > 0) {
        cout << "Daxil edilen eded musbetdir." << endl;
    } else if (eded < 0) {
        cout << "Daxil edilen eded menfidir." << endl;
    } else {
        cout << "Daxil edilen eded 0-dir." << endl;
    }

    return 0;
}
