#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 1000; i++) {
        int t = i, s = 0;
        while (t != 0) {
            s = s * 10 + t % 10;
            t = t / 10;
        }
        if (s == i) cout << i << " ";
    }
}
