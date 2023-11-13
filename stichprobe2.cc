// C++ Program to Find Average of N Numbers using While loop
#include <iostream>
#include <fstream>
#include <cmath>

int main() {

    std::ifstream inputFile("datensumme.txt");

    std::ofstream meanFile("mittelwerte.txt");

    std::ofstream varianceFile("varianzen.txt");

    int sum = 0;
    int count = 0;
    int sumofsquare = 0;
    int num;
    

    while (inputFile >> num) {
        sum += num;
        sumofsquare += num * num;
        ++count;

        if (count == 9) {
            double mean = double(sum) / 9.0;
            double variance = double(sumofsquare) / 9.0 - mean * mean;

            meanFile << mean << std::endl;

            varianceFile << variance << std::endl;

            sum = 0;
            sumofsquare = 0;
            count = 0;
        }
    }

    

    inputFile.close();
    meanFile.close();
    varianceFile.close();
        
    }