#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to reverse a string
string Reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    ifstream File;
    string fileData;

    // Open the file
    File.open("TextFile.txt");
    if (File.is_open()) {
        // Read file contents into fileData
        getline(File, fileData);

        // Close the file
        File.close();

        //  Counting vowels in the textfile statement
        int vowels = 0;
        for (size_t character = 0; character < fileData.size(); ++character) {
            char c = tolower(fileData[character]); // Convert to lowercase for easier comparison
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            }
        }
        cout << "Total vowels in the text file statement: " << vowels << endl;

        //  Counting words in the textfile statement
        int wordCount = 0;
        size_t pos = 0;
        while ((pos = fileData.find(' ', pos)) != string::npos) {
            wordCount++;
            pos++;
        }
        cout << "Number of words in the text file statement: " << wordCount + 1 << endl;

        //  Reversing the string using the Reverse function
        string reversed = Reverse(fileData);
        cout << "Reversed text file statement: " << reversed << endl;

        //  Capitalizing second letter of each word
        for (size_t character = 0; character < fileData.size(); ++character) {
            if (character == 0 || fileData[character - 1] == ' ') {
                fileData[character + 1] = toupper(fileData[character + 1]);
            }
        }
        cout << "Statement with second letter of each word capitalized: " << fileData << endl;
    } else {
        cout << "Unable to open the file!" << endl;
    }

    return 0;
}
