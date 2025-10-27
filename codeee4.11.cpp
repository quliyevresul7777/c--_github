#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 1, c;
    while (b < 1000) {
        cout << b << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
