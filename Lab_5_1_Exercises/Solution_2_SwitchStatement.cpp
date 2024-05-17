#include <iostream>
#include <cstdlib>
#include <ctime>  // needed for time function

using namespace std;

int main () {

    srand(time(0));

    int daysUntilExpiration = rand() % 12;  // generate a random number between 0 and 11

cout<<"daysUntilExpiration is : "<<daysUntilExpiration<<endl;


    switch(daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription ends within a day!\nRenew now and save 20%!" << endl;
            break;
        case 2 ... 5:
            cout << "Your subscription ends in " << daysUntilExpiration << " days.\nRenew now and save 10%!" << endl;
            break;
        case 6 ... 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }


    return 0;
}
