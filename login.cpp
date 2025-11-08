#include <iostream> 
#include <fstream>
#include <string>
#include "login.h"
#include "launch.h"
using namespace std;

 // define a structure to hold user credentials
struct userCredentials {
    string employeeID;
    string username;
    string password;
};


// function to handle user login
void loginUser() {
     
    // create an instance of userCredentials to store input
    userCredentials u;

    // open the file containing user credentials
    ifstream inFile("USER_CRED.txt");

    // check if the file opened successfully
    if (!inFile.is_open()) {
        cout << "Error opening file!" << endl;
    }

    // prompt user for their credentials
    cout << "\t\t\tPlease enter your Employee ID: ";
    cin >> u.employeeID;

    cout << "\t\t\tPlease enter your username: ";
    cin >> u.username;

    cout << "\t\t\tPlease enter your password: ";
    cin >> u.password;

    // read through the file and check for matching credentials
    string line;
    int successCount = 0;

    while (getline(inFile, line)) {

        if (line.find(u.employeeID) != string::npos) {
            successCount++;
			
        }

        if (line.find(u.username) != string::npos) {
            successCount++;
            
        }

        if (line.find(u.password) != string::npos) {
            successCount++;
            inFile.close();
        }
    }
        // provide feedback based on the number of successful matches
        if (successCount < 3) {
			cout << "\t\t\tLogin unsuccessful. Please check your credentials." << endl;
		}
        else if (successCount == 3) {
            cout << "\t\t\tLogin successful. Welcome " << u.username << "!" << endl;
			launchApp();
		}

        return;
}
