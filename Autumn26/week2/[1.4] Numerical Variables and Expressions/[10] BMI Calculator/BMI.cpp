#include <iostream>

int main() {
    double weight, height, BMI;
    std::cout << "Enter your height in meters" << std::endl;
    std::cin >> height;
    std::cout << "Enter your weight in kg" << std::endl;
    std::cin >> weight;
    BMI = weight/pow(height, 2);
    std::cout << "Your BMI is " << BMI << std::endl;
}