#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int row = 0;
    while (row < n) {
        int col = 0;
        while (col < n) {
            std::cout << "*";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
}