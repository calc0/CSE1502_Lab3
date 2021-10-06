#include <iostream>
#include <string>

using namespace std;

//Main Program
int main() {

//Declare Variables
string yourInput;
int guess, guesses, answer;
guess = 0;
guesses = 5;
answer = 150;

//Operations
cout << "Welcome to Guessing Game!" << endl;
cout << "Please guess a number from 1 to 500:" << endl;
cin >> guess;

//Loop
for (int g = (guesses - 1); g > 0; g--) {
    if (guess < answer && guess > 0) {
        cout << "That's too low! (" << g << " guesses left.)" << endl;
    }
    else if (guess == answer) {
        cout << "You got it! Good Job" << endl;
        break;
    }
    else if (guess > answer && guess <= 500) {
        cout << "That's too high! (" << g << " guesses left.)" << endl;
    }
    else {
        g++;
        cout << "Invalid input. (" << g << " guesses left.)" << endl;
    }
    cin >> guess;
}

//If lost
if (guess != answer) {
    cout << "You lost! Better luck next time." << endl;
}

}
