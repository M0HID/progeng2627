#include <iostream>

int main() {
    double pounds, euros, rate;
    std::cout << "Enter the amount in GBP" << std::endl;
    std::cin >> pounds;
    std::cout << "Enter the exchange rate to euros" << std::endl;
    std::cin >> rate;
    euros = pounds * rate;
    std::cout << "The equivalent in euros is " << euros << " euros" << std::endl;
}