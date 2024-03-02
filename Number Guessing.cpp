#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	//To generate a random number with current time
	    
    srand((time(0)));

    // Generate a random number between 1 and 100
    
    int Hide_Number = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the Hide_Number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        ++attempts;

        if (guess == Hide_Number) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess < Hide_Number) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

    } while (guess != Hide_Number);

    return 0;
}

