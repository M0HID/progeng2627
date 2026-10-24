#include <iostream>

int main() {
    double length, width, perimeter, area;
    std::cout << "Enter the length of the rectangle in meters" << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle in meters" << std::endl;
    std::cin >> width;
    perimeter = 2*length + 2*width;
    area = length*width;
    std::cout << "The perimeter of the rectangle is " << perimeter << "m and the area is " << area << "m." << std::endl;
}