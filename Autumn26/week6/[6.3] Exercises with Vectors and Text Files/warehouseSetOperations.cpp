#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i < vin1.size(); i++) {
        if(std::count(vout.begin(), vout.end(), vin1[i]) == 0) {
            vout.push_back(vin1[i]);
        }
    }
    for (int i = 0; i < vin2.size(); i++) {
        if(std::count(vout.begin(), vout.end(), vin2[i]) == 0) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i < vin1.size(); i++) {
        if(count(vin2.begin(), vin2.end(), vin1[i]) > 0) {
            vout.push_back(vin1[i]);
        }
    }
}

int main(){
    std::vector<std::string> vin1, vin2, vout;

    std::ifstream infile;
    infile.open("warehouse1.txt");
    if (!infile.is_open()) {
        std::cout << "Error loading file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;

    while(infile >> tmp){
        vin1.push_back(tmp); 
    }

    infile.close(); 

    infile.open("warehouse2.txt");
    if (!infile.is_open()) {
        std::cout << "Error loading file" << std::endl;
        return EXIT_FAILURE;
    }

    while(infile >> tmp){
        vin2.push_back(tmp); 
    }

    union_vector(vin1, vin2, vout);

    std::ofstream outfile;
    outfile.open("union.txt");
    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < vout.size(); i++) {
        outfile << vout[i] << std::endl;
    }
    outfile.close();
    vout.clear();
    intersection_vector(vin1, vin2, vout);

    outfile.open("intersection.txt");
    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < vout.size(); i++) {
        outfile << vout[i] << std::endl;
    }


    outfile.close(); 

}