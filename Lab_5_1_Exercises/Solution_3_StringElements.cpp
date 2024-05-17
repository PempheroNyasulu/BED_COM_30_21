#include <iostream>
#include <string>

using namespace std;

int main () {

string element [] = { "B123", "C234", "A345", "C15", "B177", "G3003",  "C235", "B179"};

for (int string_element =0; string_element <8; string_element ++ ) {

    if (element[string_element][0] == 'B' ){
cout << element [string_element] << endl;
    }
    
}

return 0;

}