#include <iostream>
#include <cmath>
#include <string>

double add(double a, double b){
    double sum = a + b;
    return sum;
}
double sub(double a, double b){
    double sum = a - b;
    return sum;
}
double mutl(double a, double b){
    double sum = a * b;
    return sum;
}
double div(double a, double b){
    double sum = a / b;
    return sum;
}
double pow(double a, double b){
    double sum = pow(a,b);
    return sum;
}
double root(double a){
    double sum = sqrt(a);
    return sum;
}


int main(){
    double a;
    double b;
    std::string operation;
    std::cout << "+,-,*,/,^,root" << "\n";
    std::cin >> operation;
    if (operation == "+"){
            std::cout << "number:";
            std::cin >> a;
            std::cout << "number:";
            std::cin >> b;
            double sum = add(a,b);
            std::cout << a << "+" << b << "=" << sum << "\n";
        }
    if (operation == "-"){
            std::cout << "number:";
            std::cin >> a;
            std::cout << "number:";
            std::cin >> b;
            double sum = sub(a,b);
            std::cout << a << "-" << b << "=" << sum << "\n";
        }
    if (operation == "*"){
            std::cout << "number:";
            std::cin >> a;
            std::cout << "number:";
            std::cin >> b;
            double sum = mutl(a,b);
            std::cout << a << "*" << b << "=" << sum << "\n";
        }
    if (operation == "/"){
            std::cout << "number:";
            std::cin >> a;
            std::cout << "number:";
            std::cin >> b;
            double sum = div(a,b);
            std::cout << a << "/" << b << "=" << sum << "\n";
        }
    if (operation == "^"){
        std::cout << "number:";
        std::cin >> a;
        std::cout << "number:";
        std::cin >> b;
        double sum = pow(a,b);
        std::cout << a << "^" << b << "=" << sum << "\n";
        }
    if (operation == "root"){
        std::cout << "number:";
        std::cin >> a;
        double sum = root(a);
        std::cout << "√" << a <<"=" << sum << "\n";
        }
    
    
    return 0;
}