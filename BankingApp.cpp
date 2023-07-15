#include <iostream> 
#include <iomanip>


void showBalance(double balance); 
double deposit(); 
double withdraw(double balance); 
//overloaded function: more than one fuction of same name with different arguments
int main(){
    
    double balance = 125; 
    
    int choice = 0; 

    

    do
    {
        std::cout << "********BANK OF KARER********\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice; 
        std::cin.clear();//stop program if enter a character
        fflush(stdin);
         switch (choice)
                {
                case 1:
                    showBalance(balance); 
                    break;
                case 2:
                    balance += deposit(); 
                    showBalance(balance);
                    break; 
                case 3: 
                    balance = withdraw(balance);
                    showBalance(balance);
                    break;
                case 4: 
                    std::cout << "thanks for visiting\n";
                    break;
                default: std::cout << "invalid choice.\n";
                    //break;
                }
    } while (choice != 4);
    
   


    return 0; 
}

void showBalance(double balance){
    std::cout << "Your current balance is: $" << std::setprecision(2)<< std::fixed << balance << ".\n"; 
}

double deposit(){ 

    double amount = 0;
    std::cout << "Enter deposit amount: "; 
    std::cin >> amount; 
    if(amount > 0){
    return amount;
    }else{
        std::cout << "return valid amount\n";
        return 0;
    }

}

double withdraw(double balance){ 
    
    double sum;
    std::cout << "Enter withdraw amount: "; 
    std::cin >> sum; 
    if(sum > balance){
    
    std::cout<< "Insufficient funds. Enter a valid amount. \n"; 
    return balance;
    }else if(sum < 0){
        std::cout<< "Enter a valid amount. \n"; 
        return balance;
    }else{
        return balance - sum;
    }
}

