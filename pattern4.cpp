#include <iostream>
using namespace std;

// Function to print the pyramid pattern with 'n' rows
void print(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Print leading spaces for centering
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars to create the pyramid shape
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // Print trailing spaces (optional for symmetry)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Move to the next line after each row
        cout << endl;
    }
}

// Main function to handle multiple test cases
int main() {
    int t; // Number of test cases
    cin >> t; // Read number of test cases

    // Process each test case
    for (int i = 0; i < t; i++) {
        int n; // Number of rows for the pyramid
        cin >> n; // Read the number of rows

        // Print the pyramid pattern for the given number of rows
        print(n);
    }

    return 0; // Indicate successful program termination
}

