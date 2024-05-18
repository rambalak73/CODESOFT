#include <iostream>
using namespace std;
#include <ctime>

int main() {
    srand(time(0));
    
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    
    do {
        cout << "Guess the number (1-100): ";
        cin >> guess;
        
        if (guess < secretNumber)
            cout << "Too low! Try higher." << std::endl;
        else if (guess > secretNumber)
            cout << "Too high! Try lower." << std::endl;
        
        attempts++;
        
    } while (guess != secretNumber);
    
    cout << "You got it in " << attempts << " attempts. Well done!" << endl;
    
    return 0;
}
