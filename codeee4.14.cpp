#include <iostream>
using namespace std;
int main() {
    int n, s = 0, t;
    cin >> n;
    t = n;
    while (n != 0) {
        s = s * 10 + n % 10;
        n = n / 10;
    }
    if (s == t) cout << "Yes";
    else cout << "No";
}
