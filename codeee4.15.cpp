#include <iostream>
using namespace std;
int main() {
    int x, enb = -100000;
    while (cin >> x && x != 0) {
        if (x > enb) enb = x;
    }
    cout << enb;
}
