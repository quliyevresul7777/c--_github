#include <iostream>
using namespace std;
int main() {
    int n, x, enb, enk, cem = 0;
    cin >> n;
    cin >> x;
    enb = x;
    enk = x;
    cem = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > enb) enb = x;
        if (x < enk) enk = x;
        cem = cem + x;
    }
    cout << enb << " " << enk << " " << cem / n;
}
