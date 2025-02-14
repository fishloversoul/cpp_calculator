#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept> 

int main() {
    double num1;
    double num2;
    std::string input;
    std::cout << "cmath:";
    std::getline(std::cin, input);

    size_t pos =input.find_first_of("+-*/^%");
    if (pos == std::string::npos) {
        std::cerr << "Error did not find operation.\n";
        return 1;
    }

    char operation = input[pos];

    std::string firstPart = input.substr(0, pos);
    std::string secondPart = input.substr(pos + 1);
    try {
        num1 = std::stod(firstPart);
        num2 = std::stod(secondPart);
    
    } catch (const std::invalid_argument& e) {
        std::cerr << "Conversion error: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Number out of range: " << e.what() << std::endl;
    }

    if (operation == '+'){
        std::cout << num1 << " + " << num2 << " = " << num1+num2 << "\n";
    }
    if (operation == '-'){
        std::cout << num1 << " - " << num2 << " = " << num1-num2 << "\n";
    }
    if (operation == '*'){
        std::cout << num1 << " * " << num2 << " = " << num1*num2 << "\n";
    }
    if (operation == '/'){
        std::cout << num1 << " / " << num2 << " = " << num1/num2 << "\n";
    }
    if (operation == '^'){
        std::cout << num1 << " ^ " << num2 << " = " << std::pow(num1,num2) << "\n";
    }
    if (operation == '%'){
        std::cout << num1 << " % " << " = " << std::sqrt(num1) << "\n";
    }

    return 0;
}
