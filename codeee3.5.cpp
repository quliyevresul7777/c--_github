
#include <iostream>
using namespace std;
int main() {
    int n, cem = 0;
    cin >> n;
    n = abs(n);
    while (n > 0) {
        cem += n % 10;
        n /= 10;
    }
    cout << cem;
    return 0;
}