#include <iostream>
#include <string>

using namespace std;

int main() {
    int* dynamic_int = new int;
    string* dynamic_str = new string;

    cout << "Please enter an integer value: ";
    cin >> *dynamic_int;
    cout << "Dynamically allocated integer: " << *dynamic_int << endl;

    cin.ignore(); 
    cout << "Please enter a string value: ";
    getline(cin, *dynamic_str);
    cout << "Dynamically allocated string: " << *dynamic_str << endl;

    delete dynamic_int;
    delete dynamic_str;

    return 0;
}
