#include <iostream>
using namespace std;
int main() {
    for (int i = 100; i < 1000; i++) {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        if (a + b + c == 10) cout << i << " ";
    }
}
