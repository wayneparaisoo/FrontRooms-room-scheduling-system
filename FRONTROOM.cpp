#include <fstream>
#include <iostream> 
#include <string>
using namespace std;

struct userCredentials {
    string EmployeeID;
    string username;
    string password;
};

void loginUser();
void registerUser();

int main() {

    
    return 0;
}

void loginUser() {

    userCredentials u;

    ifstream inFile("USER_CRED.txt");

    if (!inFile.is_open()) {
        cout << "Error opening file1" << endl;
    }

    cout << "Please enter your Employee ID: ";
    cin >> u.EmployeeID;

    cout << "Please enter your username: ";
    cin >> u.username;

    cout << "Please enter your password: ";
    cin >> u.password;

    string line;

    while (getline(inFile, line)) {
        if (line.find(u.EmployeeID) == string::npos) {
            cout << "Employee ID already exists. Please contact admin." << endl;
            inFile.close();
        }

        if (line.find(u.username) == string::npos) {
            cout << "Username already exists. Please choose a different username." << endl;
            inFile.close();
        }

        if (line.find(u.password) == string::npos) {
            cout << "Password"
        }
    }

}


void registerUser() {

    userCredentials u;

    ifstream inFile("USER_CRED.txt");

    if (!inFile.is_open()) {
        cout << "Error opening file1" << endl;
    }

    cout << "Please enter your Employee ID: ";
    cin >> u.EmployeeID;

    cout << "Please enter your username: ";
    cin >> u.username;

    cout << "Please enter your password: ";
    cin >> u.password;

    string line;

    while (getline(inFile, line)) {
        if (line.find(u.EmployeeID) != string::npos) {
            cout << "Employee ID already exists. Please contact admin." << endl;
            inFile.close();
        }

        if (line.find(u.username) != string::npos) {
            cout << "Username already exists. Please choose a different username." << endl;
            inFile.close();
        }
    }

    inFile.close();

    ofstream outFile("USER_CRED.txt", fstream::app);

    outFile << "Employee ID: " << u.EmployeeID << endl;
    outFile << "Username: " << u.username << endl;
    outFile << "Password: " << u.password << endl;
    outFile << endl << endl;

    outFile.close();

    cout << "Registered successfully." << endl;
}


