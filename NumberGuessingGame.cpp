#include <iostream>
#include <ctime>

int main(){

    //generate random numebrs 

    int num; 
    int guess; 
    int tries = 0; 

    srand(time(NULL)); 
    num = (rand()%100) +1; 

    std:: cout << "********** Number guessing game ******\n";
    do{
        std::cout << "Enter number(1-100): "; 
        std::cin >> guess; 
        tries++; 

        if (guess > num)
        {
            std:: cout << "Too high, guess lower\n"; 
        } else if (guess < num)
        {
            std:: cout << "Too low, guess higher\n";
        }else{
            std:: cout << "Correct! Congratulations! It took you "<< tries << " tries. \n";
        }
        
        


    }while (guess != num);

     std:: cout << "****************\n";
    
    return 0; 
}