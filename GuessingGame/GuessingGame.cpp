

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numberCheck(int numberInput, int randomNumber) {
    if (numberInput == randomNumber) {
        cout << "Congrats you got the right number" << endl;
    }
    else {
        cout << "Wrong number sorry!" << endl;
    }
    if (numberInput <= randomNumber) {
        cout << "Go Higher" << endl;
    }
    else {
        cout << "Go Lower" << endl;
    }
}

int main() {
    int minNumber = 0;
    int maxNumber = 20;
    int numberInput;
    int numberOfTries = 3;
    srand(time(0));
    int randomNumber = rand() % 20 + 1;

    do {
    cout << "Guess a number between " << minNumber << " and " << maxNumber << endl;
    cin >> numberInput;
    if (numberInput< minNumber || numberInput > maxNumber) {
        cout << "Can't choose beyond the bounds" << endl;
        break;
    }
    numberCheck(numberInput, randomNumber);
    cout << "You entered: " << numberInput << endl;
    numberOfTries--;
    cout << "Number of Tries left " << numberOfTries << endl;
    } while (numberOfTries != 0);
    cout << "Random number was: " << randomNumber << endl;

    return 0;
}

