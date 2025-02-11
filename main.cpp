#include <iostream>
#include <string>


int add(double a, double b){
    double sum = a + b;
    return sum;
}
int sub(double a, double b){
    double sum = a - b;
    return sum;
}
int mutl(double a, double b){
    double sum = a * b;
    return sum;
}
int div(double a, double b){
    double sum = a / b;
    return sum;
}



int main(){
    double a;
    double b;
    std::string operation;
    std::cout << "+,-,*,/" << "\n";
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
    return 0;
}