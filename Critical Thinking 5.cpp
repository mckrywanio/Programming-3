#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::reverse

void appendToFile(const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Open in append mode
    if (!outFile) {
        std::cerr << "Error opening file for appending." << std::endl;
        return;
    }

    std::string userInput;
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, userInput);

    outFile << userInput << std::endl;
    outFile.close();
}

void reverseFileContent(const std::string& inputFilename, const std::string& outputFilename) {
    std::ifstream inFile(inputFilename);
    if (!inFile) {
        std::cerr << "Error opening input file." << std::endl;
        return;
    }

    std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();

    std::reverse(content.begin(), content.end());

    std::ofstream outFile(outputFilename);
    if (!outFile) {
        std::cerr << "Error opening output file." << std::endl;
        return;
    }

    outFile << content;
    outFile.close();
}

int main() {
    const std::string inputFile = "CSC450_CT5_mod5.txt";
    const std::string outputFile = "CSC450-mod5-reverse.txt";

    appendToFile(inputFile);
    reverseFileContent(inputFile, outputFile);

    std::cout << "Process completed. Check the files for results." << std::endl;

    return 0;
}