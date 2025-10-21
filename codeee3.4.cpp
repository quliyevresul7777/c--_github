
#include <iostream>
using namespace std;
int main() {
    int n;
    long long fakt = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        fakt *= i;
    cout << fakt;
    return 0;
}
    std::cout << n << "! = " << fact << "\n";
    return 0;
}