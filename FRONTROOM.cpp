// Include necessary libraries for file handling, input/output, and string manipulation
#include <fstream>  // For reading and writing files
#include <iostream> // For input and output (cin, cout)
#include <string>   // For using string data type
#include "registration.h"   // Custom header for registration-related functions
#include "login.h"          // Custom header for login-related functions
#include "forgotuser.h"
#include "launch.h"        // Custom header for launch-related functions
using namespace std;

// Structure to store user credentials such as EmployeeID, username, and password
struct userCredentials {
    string EmployeeID;
    string username;
    string password;
};


// Function declarations (prototypes)
// These functions will be defined later in the program or in other files
void loginUser();    // Handles the login process
void registerUser();    // Handles user registration
void forgotUser();  // Handles password recovery

int main() {

    // Variable to store user's menu choice
    int c;

    // Displaying the main menu interface
    cout<<"\t\t\t__________________________________________________________\n\n\n";
    cout<<"\t\t\t                   WELCOME TO LOGIN PAGE                   \n\n\n";
    cout<<"\t\t\t        |  FRONTROOMS SCHEDULING MANAGEMENT SYSTEM  |        \n\n";
    cout<<"\t\t\t______________________     MENU    _______________________\n\n";
    cout<<"                                                                 \n\n";

    // Display options for the user to choose
    cout<<"\t| Press 1 to LOG IN                            |"<<endl;     
    cout<<"\t| Press 2 to REGISTER                          |"<<endl;
    cout<<"\t| Press 3 to IF YOU FORGOT YOUR PASSWORD       |"<<endl;  
    cout << "\t| Press 4 to EXIT                              |" << endl;
    
    // Ask the user to enter their choice
    cout<<"\n\t\t\t Please enter your choice :   ";       
    cin>>c;  

	int successCount = 0; // Initialize successCount to 0 before any operation

    // Switch statement to handle the user’s choice
    switch(c)
    {
        case 1:
            
            loginUser();    // Calls the login function
            if (successCount == 3) {
                launchApp(); // Launch the application if login is successful
			}
            break;
        case 2:
            registerUser(); // Calls the registration function
            break;
        case 3:
            forgotUser();   // Calls the forgot password function
            break;
        case 4:
            cout<<"\t\t\t Thankyou! \n\n";  // Exit option
            break;
           


    }

    return 0;
}



    
