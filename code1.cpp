#include <iostream>
#include <string>

int main() {
    std::string ad;
    std::cout << "Adinizi daxil edin: ";
    std::getline(std::cin, ad);                
    std::cout << "Salam '" << ad << "'\n";    
    return 0;
}
