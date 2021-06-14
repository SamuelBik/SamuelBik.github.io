#include <iostream>
#include <cstdlib>          // uses the c standard  Library - for random values
#include <ctime>            // uses the time function in C++

using namespace std;        

int main()
{
    srand(time(0));     // seeds a time in the computer's cloc at time 0
                        // ensures that different numbers are generated
                        // each time the progra runs
    int number;     // variable that hlds a number with no decimal places
    int number2;   //variable that holds a randomly generate number
    int guesses = 0; // variable that holds the number of guesses
    // generate the rando number
    // formula: min + rand() % (max - min)
    number2= 1 + rand() % 99;
    do 
    {
        // ask the user to input the value of the number
        cout << "Enter a whole number: ";
        cin >> number;
        
        // add on the guesses
        guesses++;       // sme as guesses=guesses +1;
        // display the number that was entered
        cout << endl << "You entered the number " << number << endl;
        
        // if statment that checks to see that if the user entered the right number
        if(number == number2)
        
        cout << "you gussed the right number!" << endl;
        else if(number < number2)
            cout << " you guessed too low. Try again." << endl;
        else
            cout << "you guessed too high. Try again." << endl;
    }while(number != number2);        
  

    return 0; 
}
