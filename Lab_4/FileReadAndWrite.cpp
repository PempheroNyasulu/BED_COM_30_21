#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];

                 // opening a file in write mode.
   ofstream outfile;
   outfile.open("enteredthis.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

               // writing inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
               // rewriting inputted data into the file.
   outfile << data << endl;

   
   outfile.close();

              // open a file in read mode.
   ifstream infile; 
   infile.open("enteredthis.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

             // writing data at the screen.
   cout << data << endl;
   
            // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

            // close the opened file.
   infile.close();

   return 0;
}