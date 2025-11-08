#include <fstream>
#include <iostream> 
#include <string>
#include "registration.h"
using namespace std;

// Define a structure to hold user credentials
struct userCredentials {
        string employeeID;
        string username;
        string password;
    };

// function to register a new user
void registerUser() {
  
    userCredentials u;

    // open the file containing user credentials
    ifstream inFile("USER_CRED.txt");

    // check if the file opened successfully
    if (!inFile.is_open()) {
        cout << "Error opening file1" << endl;
    }

    // prompt user for registration details
    cout << "\t\t\tPlease enter your Employee ID: ";
    cin >> u.employeeID;

    cout << "\t\t\tPlease enter your username: ";
    cin >> u.username;

    cout << "\t\t\tPlease enter your password: ";
    cin >> u.password;

    // check for existing Employee ID or username
    string line;
	int count = 0;

    while (getline(inFile, line)) {
        // check for existing Employee ID or username
        if (line.find(u.employeeID) != string::npos) {
            cout << "\t\t\t\t\t\t\tEmployee ID already exists. Please contact admin." << endl;
			count++;
            inFile.close();
        }

        // check for existing username
        if (line.find(u.username) != string::npos) {
            cout << "\t\t\t\t\t\t\tUsername already exists. Please choose a different username." << endl;
            count++;
            inFile.close();
        }
    }

    // close the input file
    inFile.close();

    // if no duplicates found, append the new user credentials to the file
    if (count == 0) {

        // open the file in append mode
        ofstream outFile("USER_CRED.txt", fstream::app);
        
        // record the new user credentials
        outFile << "Employee ID: " << u.employeeID << endl;
        outFile << "Username: " << u.username << endl;
        outFile << "Password: " << u.password << endl;
        outFile << endl << endl;

        outFile.close();

        // confirm successful registration
        cout << "Registered successfully." << endl;
        return;
	}
    else {
        return;
    }
}
