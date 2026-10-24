#include <iostream>

int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 3;

    if(rem == 0){
        // if the remainder is 0...
        std::cout << "the number is a multple of 3" << std::endl;
    }
    else{
        // otherwise...
        std::cout << "the number is not a multiple of 3" << std::endl;
    }
}