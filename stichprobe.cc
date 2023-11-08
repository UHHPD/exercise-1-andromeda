// C++ Program to Find Average of N Numbers using While loop
#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    std:: ifstream inputFile("datensumme.txt");

    int sum= 0;
    int count = 0;
    int number;

    while(inputFile >> number){
        sum += number;
        count++;
    }

    double mean = static_cast<double>(sum)/count;
    std::cout<< "The mean is = "<< mean << std::endl;

    inputFile.close();
}