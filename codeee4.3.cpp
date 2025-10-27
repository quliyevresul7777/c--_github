#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n; i++) {
        int sade = 1;
        for (int j = 2; j < i; j++)
            if (i % j == 0) sade = 0;
        if (sade == 1) cout << i << " ";
    }
}
