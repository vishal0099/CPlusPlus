#include <iostream>

int main(){

    std::string questions[] = {"What year was C++ created? ", 
                                "who invested c++? ",
                                "Who is the precedecessor of C++", 
                                "is earth round?"}; 

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"}, 
                                {"A. Guido", "B. Bjarne", "C. John", "D. Mark"},
                                {"A. C", "B. C+", "C. C#", "D. C--"}, 
                                {"A. yes", "B. No", "C. Sometimes", "D. I dont know I'm god."}}; 

    char answerKey[] = {'C', 'B', 'A', 'A'};


    int size = sizeof(questions)/sizeof(questions[0]);
    char guess; 
    int score; 

    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i] << '\n'; 

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }
        
    std::cin >> guess; 
    guess = toupper(guess); 

    if(guess == answerKey[i]){

        std::cout << "corrent!\n";
        score++; 
    }else{
        std::cout << "Wrong! \n"; 
        std::cout << "Answer is " << answerKey[i] << '\n';
    }
    }

    std::cout << "results:\n"; 
     std::cout << "correct guesses: "<< score << '\n';
     std::cout << "# of questions: " << size << '\n'; 
     std::cout << "Score: " << (score/(double)size)*100 << "%\n";
    return 0; 
}