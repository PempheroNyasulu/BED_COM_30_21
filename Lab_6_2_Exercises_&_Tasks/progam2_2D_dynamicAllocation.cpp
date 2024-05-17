#include <iostream>

using namespace std;

int main() {
    int dimensions;
    double** dynamic_array;

    cout << "Please enter the dimensions of the 2Dimensional array, not exceeding 3 : ";
    cin >> dimensions;

    
    if (dimensions > 3) {
        cout << "Dimensions cannot exceed 3. Please try again." << endl;
        return 1; 
    }

    
    dynamic_array = new double*[dimensions];
    for (int i = 0; i < dimensions; ++i) {
        dynamic_array[i] = new double[dimensions];
    }

    
    cout << "Please enter the values for the 2D array:" << endl;
    for (int i = 0; i < dimensions; ++i) {
        for (int j = 0; j < dimensions; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> dynamic_array[i][j];
        }
    }


    cout << "Values of each element of the array:" << endl;
    for (int i = 0; i < dimensions; ++i) {
        for (int j = 0; j < dimensions; ++j) {
            cout << dynamic_array[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < dimensions; ++i) {
        delete[] dynamic_array[i];
    }
    delete[] dynamic_array;

    return 0;
}
