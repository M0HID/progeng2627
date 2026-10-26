#include <iostream>
#include <cmath>
int sumPower(int x, int n) {
    int sum;
    for (int i = 1; i <= n; i++) {
        sum = sum+std::pow(x, i);
    }
    return sum;
}
int main() {
    int x, n;
    std::cout << "Enter numbers x and n to calculate power sum:" << std::endl;
    std::cin >> x >> n;
    std::cout << sumPower(x, n);
}