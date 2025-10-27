#include <iostream>
using namespace std;
int main() {
    int n, x, t = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i % 2 == 0) c = c + x;
        else t = t + x;
    }
    cout << c << " " << t;
}
