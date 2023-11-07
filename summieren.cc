#include <iostream>
#include <fstream>

int main() {
    // Open the input file "daten.txt"
    std::ifstream inputFile("daten.txt");

    // Open the output file "datensumme.txt"
    std::ofstream outputFile("datensumme.txt");


    int num1, num2;
    while (inputFile >> num1 >> num2) {
        // Calculate the sum of the two numbers
        int sum = num1 + num2;

        // Write the sum to the output file
        outputFile << sum << std::endl;
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    return 0;
}