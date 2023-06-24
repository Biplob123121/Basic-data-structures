#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);  // Read the input string

    std::istringstream iss(inputString);
    std::string firstPart, secondPart;

    iss >> firstPart;
    iss >> secondPart;

    // Display the divided parts
    std::cout << "First part: " << firstPart << std::endl;
    std::cout << "Second part: " << secondPart << std::endl;

    return 0;
}
