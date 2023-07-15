#include <iostream>
#include <cmath> 

int main(){
//find the H of a triangle 
double x; 
double y; 
double h = 0; 

std:: cout << "Enter the x of the triangle: " << std::endl; 
std::cin >> x; 

std:: cout << "Enter the y of the triangle: " << std::endl; 
std::cin >> y; 

h = sqrt(pow(x, 2)+pow(y,2));

std::cout<< "H of this triangle is: " << h << std::endl; 

return 0; 
}