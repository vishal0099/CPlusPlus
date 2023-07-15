#include <iostream>

int main(){

    double temp; 
    char unit; 

    std::cout << "******Temperature conversion*******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";

    std::cout << "What unit would you like to convert to? ";

    std::cin >> unit; 

    if(unit == 'F' || unit == 'f'){

        std::cout << "Enter temperature in celcius: ";
        std::cin >> temp; 
        
        temp = (1.8*temp)+32.0;

        std::cout << "The temp in F is: " << temp << "\n";

    } 
    else if(unit == 'C' || unit == 'c'){

        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp; 

        temp = (temp - 32.0)/1.8;

        std::cout << "The temp in C is: " << temp << "\n";


    } 
    else{
        std::cout << "Invalid input. Try again.";
    }




    std::cout << "************\n";

    return 0; 

}