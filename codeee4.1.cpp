#include <iostream>
using namespace std;
int main() {
    int n, s = 0;
    cin >> n;
    for (int i = 2; i <= n; i = i + 2)
        s = s + i * i;
    cout << s;
}
