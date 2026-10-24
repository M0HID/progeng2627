#include <iostream>

int main(){
    int n, count, max;
    count = 0;
    max = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    while (n != 1) {
        if ( n/2 != n/2.0) {
            n = 3*n+1;
        } else {
            n /= 2;
        }
        if (n > max){max = n;}
        count++; 
        std::cout << n << std::endl;
    }
    std::cout << "Took " << count << " iterations. Highest number was " << max << "." << std::endl;
}