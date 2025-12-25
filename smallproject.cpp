#include <iostream>
#include <cstdlib>
#include <ctime>     
using namespace std;

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "?? Welcome to Number Guessing Game!\n";
    cout << "Guess a number between 1 and 100\n\n";
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > number) {
            cout << "Too High! Try again.\n";
        } 
        else if (guess < number) {
            cout << "Too Low! Try again.\n";
        } 
        else {
            cout << "\n?? Congratulations! You guessed the number.\n";
            cout << "Total attempts: " << attempts << endl;
        }
    } while (guess != number);

    return 0;
}

