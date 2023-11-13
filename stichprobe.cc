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

    double mean = double(sum)/count;
    std::cout<< "The mean is = "<< mean << std::endl;

    inputFile.close();

    inputFile.open("datensumme.txt");

    double square=0;

    while (inputFile >> number){
        double diff = double(number) - mean;
        square += diff*diff;
    }

    double variance = (square)/count;
    std::cout<< "The variance is = " << variance << std::endl;

    double standard_deviation = sqrt(variance);
    std::cout << "The standard deviation is = "<< standard_deviation << std::endl;

    inputFile.close();
}