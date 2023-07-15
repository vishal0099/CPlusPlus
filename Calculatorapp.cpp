#include <iostream> 

int main(){

    char op; 
    double num1; 
    double num2; 
    double result; 

    std::cout << "********* Calculator *******\n"; 


    std::cout << "Enter either (+ - * /): ";
    std::cin >> op; 

    std::cout << "Enter number 1: ";
    std::cin >> num1; 

    std::cout << "Enter number 2: ";
    std::cin >> num2; 


    switch (op)
    {
    case '+':
        /* code */
        std::cout << "Result: " << num1 + num2 << "\n"; 
        break;

    case '-':
        /* code */
        std::cout << "Result: " << num1 - num2 << "\n"; 
        break;

    case '*':
        /* code */
        std::cout << "Result: " << num1 * num2 << "\n"; 
        break;
        
    case '/':
        /* code */
        std::cout << "Result: " << num1/num2 << "\n"; 
        break;

    default:
        break;
    }

    std::cout << "****************************"; 

    return 0; 
}