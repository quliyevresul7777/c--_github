#include <iostream>
using namespace std;

int main() {
    int eded;

    cout << "Bir eded daxil edin: ";
    cin >> eded;

    if (eded % 2 == 0) {
        cout << "Daxil edilen eded cutdur." << endl;
    } else {
        cout << "Daxil edilen eded tekdir." << endl;
    }

    return 0;
}
