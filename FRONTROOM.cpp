// Include necessary libraries for file handling, input/output, and string manipulation
#include <fstream>          // For reading and writing files
#include <iostream>         // For input and output (cin, cout)
#include <string>           // For using string data type
#include <iomanip>          // For formatted output
#include "registration.h"   // Custom header for registration-related functions
#include "login.h"          // Custom header for login-related functions
#include "forgotuser.h"
#include "launch.h"         // Custom header for launch-related functions
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
    
    	
    	cout<< R"(      
		
 		 _____ ____   ___  _   _ _____ ____   ___   ___  __  __ ____  
		|  ___|  _ \ / _ \| \ | |_   _|  _ \ / _ \ / _ \|  \/  / ___| 
		| |_  | |_) | | | |  \| | | | | |_) | | | | | | | |\/| \___ \ 
		|  _| |  _ <| |_| | |\  | | | |  _ <| |_| | |_| | |  | |___) |
		|_|   |_| \_\\___/|_| \_| |_| |_| \_\\___/ \___/|_|  |_|____/ 
		
		
		
		
		)" << '\n';
	cout << setw(150)  <<"=========================================================================================================\n";
	cout << setw(150) <<"                                  WELCOME TO THE LOGIN PAGE                                            \n";
	cout << setw(150) <<"=======================================================================================================\n";	
	cout << setw(150) <<"                          FRONTROOMS SCHEDULING MANAGEMENT SYSTEM                                      \n";	
	cout << setw(150) <<"=======================================================================================================\n";	
    cout << setw(108) <<"                                     MENU\n";
    cout << setw(155) <<"------------------------------------------------------------------------------------------------------\n"<<endl<<endl;
    
    cout << setw(120) <<"        |------------------------------------------------------------|\n";
    cout << setw(155) <<"        |  Press 1  ->  LOG IN                                       |\n";
    cout << setw(120) <<"        |  Press 2  ->  REGISTER                                     |\n";
    cout << setw(120) <<"        |  Press 3  ->  FORGOT PASSWORD                              |\n";
    cout << setw(120) <<"        |  Press 4  ->  EXIT                                         |\n";
    cout << setw(120) <<"        |------------------------------------------------------------|\n"<<endl<<endl;
    

   // loop until the user inputs 4
    while (c != 4) {

        // Ask the user to enter their choice
        cout << setw(90) << " Please enter your choice :   ";
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



        }
    }
    return 0;
}



    
