#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "forgotuser.h"
using namespace std;

// Function definition: forgotUser()
// This function helps the user retrieve their forgotten password or credentials
void forgotUser() {
    string searchUsername;                        // Variable to store the username being searched
    cout << "Enter your username to recover password: ";
    cin >> searchUsername;                       // User inputs their username

    // Open the text file containing stored user credentials
    ifstream inFile("USER_CRED.txt");

    // Check if the file was opened successfully
    if (!inFile.is_open()) {    
        cout << "Error opening file" << endl;
        return; 
    }

    // Variable to store each line read from the file
    string line;
    
    // Flag to indicate if the username was found
    bool found = false; 

     // Loop through each line in the file
    while (getline(inFile, line)) {

        // Check if the username exists in the current line
        if (line.find(searchUsername) != string::npos) {

			cout << "Credentials found: " << endl;
            // Display found credentials
            for (int i=0; i<2; i++){
            	if (getline(inFile, line)){
            		cout << line << endl;
             	   found = true;
            }
}
            // Exit the loop once found
            break;  
        }
    }

    // If username is not found in the file
    if (!found) {
        cout << "Username not found. Please register first." << endl;
    }

    inFile.close(); // Close the file after reading
}
