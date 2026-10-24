#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int row = 0;
    int value = 0;
    while (row < n) {
        int col = 0;
        while (col < n) {
            value = (row+1)*(col+1);
            std::cout << value << "\t";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
}