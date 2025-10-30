#include <fstream>
#include <iostream> 
#include <string>
#include "login.h"
#include "launch.h"
using namespace std;

struct userCredentials {
    string EmployeeID;
    string username;
    string password;
};



void loginUser() {

    userCredentials u;

    ifstream inFile("USER_CRED.txt");

    if (!inFile.is_open()) {
        cout << "Error opening file!" << endl;
    }

    cout << "Please enter your Employee ID: ";
    cin >> u.EmployeeID;

    cout << "Please enter your username: ";
    cin >> u.username;

    cout << "Please enter your password: ";
    cin >> u.password;

    string line;
    int successCount = 0;

    while (getline(inFile, line)) {

        if (line.find(u.EmployeeID) != string::npos) {
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
        if (successCount < 3) {
			cout << "Login unsuccessful. Please check your credentials." << endl;
		}
        else if (successCount == 3) {
            cout << "Login successful. Welcome " << u.username << "!" << endl;
			launchApp();
		}

        return;
}
