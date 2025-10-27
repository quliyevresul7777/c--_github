#include <iostream>
using namespace std;
int main() {
    int n, say = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) say = say + 1;
    cout << say;
}
