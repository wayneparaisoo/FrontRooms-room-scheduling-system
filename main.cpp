// Include necessary libraries for file handling, input/output, and string manipulation
#include <fstream>          // For reading and writing files
#include <iostream>         // For input and output (cin, cout)
#include <string>           // For using string data type
#include <iomanip>          // For formatted output
#include "registration.h"   // Custom header for registration-related functions
#include "login.h"          // Custom header for login-related functions
#include "forgotuser.h"
#include "launch.h"         // Custom header for launch-related functions
#include <windows.h>
#include <stdlib.h>
using namespace std;

// Structure to store user credentials such as EmployeeID, username, and password
struct userCredentials {
    string employeeID;
    string username;
    string password;
};


// Function declarations (prototypes)
// These functions will be defined later in other files
void loginUser();       // Handles the login process
void registerUser();    // Handles user registration
void forgotUser();      // Handles password recovery

int main() {
	
	
    // Variable to store user's menu choice
    int c = 0;
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    
    
    system("cls");
	
	SetConsoleTextAttribute(h,3);
	
    cout << setw(127.5)<<		"  _____                _                                 \n";
    cout << setw(127.5)<<		" |  ___| __ ___  _ __ | |_ _ __ ___   ___  _ __ ___  ___ \n";
    cout << setw(127.5)<<		" | |_ | '__/ _ \\| '_ \\| __| '__/ _ \\ / _ \\| '_ ` _ \\/ __|\n";
    cout << setw(127.5)<<		" |  _|| | | (_) | | | | |_| | | (_) | (_) | | | | | \\__ \\\n";
    cout << setw(127.5)<<		" |_|  |_|  \\___/|_| |_|\\__|_|  \\___/ \\___/|_| |_| |_|___/\n";


    

    SetConsoleTextAttribute(h,13);
		
	cout << setw(153)  <<"==========================================================================================================\n";
	cout << setw(155.5) <<"                                  WELCOME TO THE LOGIN PAGE                                            \n";
	cout << setw(153) <<"==========================================================================================================\n";	
	cout << setw(156) <<"                          FRONTROOMS SCHEDULING MANAGEMENT SYSTEM                                      \n";	
	cout << setw(153) <<"==========================================================================================================\n";	
    cout << setw(101.5) <<"                                     MENU\n";
    cout << setw(153) <<"----------------------------------------------------------------------------------------------------------\n"<<endl<<endl;
    SetConsoleTextAttribute(h,13);

    
    cout << setw(133) <<"        |------------------------------------------------------------|\n";
    cout << setw(133) <<"        |  Press 1  ->  LOG IN                                       |\n";
    cout << setw(133) <<"        |  Press 2  ->  REGISTER                                     |\n";
    cout << setw(133) <<"        |  Press 3  ->  FORGOT PASSWORD                              |\n";
    cout << setw(133) <<"        |  Press 4  ->  EXIT                                         |\n";
    cout << setw(133) <<"        |------------------------------------------------------------|\n"<<endl<<endl;
    SetConsoleTextAttribute(h,7);
    

   // loop until the user inputs 4
    while (c != 4) {

        // Ask the user to enter their choice
        cout << setw(100) << " Please enter your choice :   ";
        SetConsoleTextAttribute(h,3);
        cin >> c;
        

        // Switch statement to handle the user’s choice
        switch (c)
        {
        case 1:
            loginUser();    // Calls the login function
            break;
        case 2:
            registerUser(); // Calls the registration function
            break;
        case 3:
            forgotUser();   // Calls the forgot password function
            break;
        case 4:
            cout << "\t\t\tThankyou!\n\n";  // Exit option
            break;
        default:
        	cout<<"\t\t\tInvalid Choice, Please try again.\n";
        	system ("pause");
        	break;


        }
    }
    return 0;
}



    
