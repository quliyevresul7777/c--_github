#include <iostream>
#include <cmath>

int main() {
    long long x;
    std::cout << "Eded daxil edin: ";
    if (!(std::cin >> x)) {
        std::cerr << "Sehv giris\n";
        return 1;
    }

    x = std::llabs(x); // mənfi ədədi müsbətə çevir
    int sum = 0;
    if (x == 0) sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }

    std::cout << "Reqemlerinin cemi: " << sum << "\n";
    return 0;
}