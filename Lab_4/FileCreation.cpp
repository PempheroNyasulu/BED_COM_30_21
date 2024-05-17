#include <iostream>
#include <fstream>

using namespace std;

int main () {
    // create and open a file
    ofstream MyFile("example.txt");

    // close the file
    MyFile.close();

    return 0;
}