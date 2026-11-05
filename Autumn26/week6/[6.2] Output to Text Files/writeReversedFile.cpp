#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::string input, output;
    std::cout << "Enter the input file name" << std::endl;
    std::cin >> input;
    std::cout << "Enter the output file name" << std::endl;
    std::cin >> output;

    std::ifstream infile; 
    infile.open(input);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close(); 

    std::ofstream outfile;
    outfile.open(output);
    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 1; i <= v.size(); i++) {
        outfile << v[v.size() - i] << std::endl;
    }
}