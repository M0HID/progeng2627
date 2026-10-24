#include <iostream>

int main() {
    int max = 10000;
    int min = 0;
    bool correct = false;
    char feedback;
    std::cout << "Think of a number between 1 and " << max << "." << std::endl;
    int guess = max/2;
    while (correct == false) {
        std::cout << "Is your number higher or lower than " << guess << " (H, L, -)" << std::endl;
        std::cin >> feedback;
        if (feedback == 'H') {
            min = guess;
            guess = (max+min)/2;
        } else if (feedback == 'L') {
            max = guess;
            guess = (max+min)/2;
        } else if (feedback == '-') {
            std::cout << "Your number is " << guess << std::endl;
            correct = true;
        } else {
            std::cout << "Please enter one of the options!" << std::endl;
        }
    }

}