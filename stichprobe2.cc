// C++ Program to Find Average of N Numbers using While loop
#include <iostream>
#include <fstream>
#include <cmath>

int main() {

    std::ifstream inputFile("datensumme.txt");

    std::ofstream meanFile("mittelwerte.txt");

    std::ofstream varianceFile("varianzen.txt");

    double sum = 0;
    double count = 0;
    int sumofsquare = 0;
    double num;
    

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

    std::ifstream avgFile("mittelwerte.txt");
    std::ifstream varFile("varianzen.txt");

    while (avgFile >> num){
        sum += num;
        count++;
    }
    double average = double(sum) / count;
    std::cout << "The mean of 26 means is = " << average << std::endl;

    double sumv = 0;
    double countv = 0;
    double numv;

    while (varFile >> numv){
        sumv += numv;
        countv++;
    
        
    }
    double average1 = double(sumv) / countv;
    std::cout << "The mean of 26 variances is = " << average1 << std::endl;

    meanFile.close();
    varianceFile.close();
        
    }