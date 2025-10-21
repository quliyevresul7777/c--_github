#include <iostream>
int main() {
    for (int i = 2; i <= 100; i += 2) {
        std::cout << i;
        if (i < 100) std::cout << " ";
    }
    std::cout << "\n";
    return 0;
}