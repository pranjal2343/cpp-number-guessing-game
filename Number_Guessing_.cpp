#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator with the current time.
    srand(time(0)); 

    // Generate a random number between 1 and 100.
    // The % 100 gives a number from 0-99, so we add 1.
    int secretNumber = rand() % 100 + 1;
    int guess= 0;
    //Guessing the no.
    while (secretNumber != guess){
        
        std :: cout << " enter ur guess" << std :: endl;
        std :: cin >> guess ;
         
        if ( guess > secretNumber){
        std :: cout << " Too HIGH" <<std :: endl;
        
    } else { std :: cout << " Too low" <<std :: endl;;
        }
    } 
    

    std::cout << "Congratulations !! U guessed the Number " << std :: endl << " And the number is " << secretNumber << std::endl;

    return 0;
}