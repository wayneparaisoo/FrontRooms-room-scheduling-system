#include <fstream>
#include <iostream>
#include <string>
#include "forgotuser.h"
using namespace std;

// Function definition: forgotUser()
// This function helps the user retrieve their forgotten password or credentials
void forgotUser() {
    string searchUsername;  // Variable to store the username being searched
    cout << "Enter your username to recover password: ";
    cin >> searchUsername;  // User inputs their username

    // Open the text file containing stored user credentials
    ifstream inFile("USER_CRED.txt");
    if (!inFile.is_open()) {    // Check if the file was opened successfully
        cout << "Error opening file2" << endl;
        return; 
    }

    string line;     // Variable to store each line read from the file
    bool found = false; // Flag to indicate if the username was found

     // Loop through each line in the file
    while (getline(inFile, line)) {
        // Check if the username exists in the current line
        if (line.find(searchUsername) != string::npos) {
            cout << "Credentials found: " << line << endl;  // Display found credentials
            found = true;
            break;  // Exit the loop once found
        }
    }

    // If username is not found in the file
    if (!found) {
        cout << "Username not found. Please register first." << endl;
    }

    inFile.close(); // Close the file after reading
}
