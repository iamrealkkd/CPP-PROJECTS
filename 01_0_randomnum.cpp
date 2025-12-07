#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int randomNum = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (1-100). You have 3 chances.\n\n";

    for(int i = 1; i <= 3; i++) {
        cout << "Attempt " << i << ": Enter your guess: ";
        cin >> guess;

        if (guess == randomNum) {
            cout << "Perfect! You guessed the number correctly!" << endl;
            return 0;
        }

        int diff = abs(guess - randomNum);

        if (guess > randomNum) {
            if (diff >= 20)
                cout << "Too High!\n";
            else
                cout << "High!\n";
        } else {
            if (diff >= 20)
                cout << "Too Low!\n";
            else
                cout << "Low!\n";
        }
    }

    cout << "\nYour chances are over! The correct number was: " << randomNum << endl;

    return 0;
}
