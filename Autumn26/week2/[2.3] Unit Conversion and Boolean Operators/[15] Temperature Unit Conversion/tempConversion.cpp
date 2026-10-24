#include <iostream>
#include <string>

int main(){
    double inputTemp, outputTemp;
    std::string unit, newUnit;
    std::cout << "Please enter a temperature in C or F" << std::endl;
    std::cin >> inputTemp >> unit;
    if(unit == "C" || unit == "c") {
        outputTemp = inputTemp*9/5.0 + 32;
        newUnit = "F";
    } else {
        outputTemp = (inputTemp-32)*5/9.0;
        newUnit = "C";
    }
    if (unit != "C" && unit != "F" && unit != "c" && unit != "f") {
        std::cout << "Invalid inputs! Should be either C or F.";
    } else {
        std::cout << inputTemp << unit << " is " << outputTemp << newUnit << std::endl;
    }
    }