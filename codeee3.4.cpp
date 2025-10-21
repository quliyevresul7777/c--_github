#include <iostream>
#include <limits>

int main() {
    unsigned long long n;
    std::cout << "Natural eded daxil edin (0 <= n <= 20 olaraq daxil edin): ";
    if (!(std::cin >> n)) {
        std::cerr << "Sehv giris\n";
        return 1;
    }

    // unsigned long long 20!- qədər saxlayir. 21! overflow edebilir.
    if (n > 20) {
        std::cout << "Xəbərdarlıq: n > 20 olarsa faktorial unsigned long long daxilində sığmaya bilər.\n";
    }

    unsigned long long fact = 1;
    for (unsigned long long i = 1; i <= n; ++i) fact *= i;

    std::cout << n << "! = " << fact << "\n";
    return 0;
}