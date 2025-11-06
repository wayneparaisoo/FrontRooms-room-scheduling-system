#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// define a structure to hold room scheduling information
struct roomSchedule {
	string month;
	int day = 0;
	int year = 0;
	string startTime;
	string endTime;
};
 
// function to launch the scheduling management system
void launchApp() {
		cout << "Launching the Frontrooms Scheduling Management System..." << endl << endl;
		
		roomSchedule r;

		// open the file containing room schedules
		ifstream inFile("ROOMS.txt");

		// check if the file opened successfully
		if (!inFile.is_open()) {  
			cout << "Error opening file!" << endl;
		}

		// welcome message
		cout << "--------------------------------------------------------" << endl;
		cout << "Welcome to the Frontrooms Scheduling Management System!" << endl;
		cout << "--------------------------------------------------------" << endl << endl;

		// prompt user for scheduling details
		cout << "Enter the month you want to schedule (e.g., January): ";
		cin >> r.month;
		cout << "Enter the day you want to schedule (e.g., 15): ";
		cin >> r.day;
		cout << "Enter the year you want to schedule (e.g., 2025): ";
		cin >> r.year;

		// read through the file and check for matching schedules
		string line;
		int matchCount = 0;

		// 
		while (getline(inFile, line)) {
			
			// check for month, day, and year matches
			if (line.find(r.month) != string::npos) {
				
			}
			else {
				matchCount++;
			}
			if (line.find(to_string(r.day)) != string::npos) {
				
			}
			else {
				matchCount++;
			}
			if (line.find(to_string(r.year)) != string::npos) {
				
			}
			else {
				matchCount++;
			}
		}

		inFile.clear();                 // Clear EOF flag
		inFile.seekg(0);    // Move to the beginning of the file
		
		while (getline(inFile, line)) {
			bool print = false;
			if (line.find("RoomID:") != string::npos) {
				print = true;
				cout << endl;
			}

			if (print == true) {
				cout << line << endl;
				if (line.empty())  // stop at blank line
					print = false;
			}
		}

		inFile.close();

		ofstream outFile("ROOMS.txt", ios::out);

		string roomID;
		cout << "Please enter the Room ID you want to reserve: ";
		cin >> roomID;

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
			}
		outFile.close();
		
}