#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main () {
    int number {};

    while (true) {
        while (!(cout << "Enter an integer value between 5 and 10: ") || !(cin >> number) || number < 5 || number > 10) {
            if (!cin) {
                cout << "Sorry you entered an invalid number, please try again\n";

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            } else {
                cout << "you entered " << number << ". Please enter a number between 5 and 10\n";

            }
        }

        cout << "Your input value (" << number << ") has been accepted.\n";
        
        break;
    }

    return 0;
}
