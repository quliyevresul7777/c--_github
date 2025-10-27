#include <iostream>
using namespace std;
int main() {
    int n, say = 0;
    cin >> n;
    while (n != 0) {
        say = say + 1;
        n = n / 10;
    }
    cout << say;
}
