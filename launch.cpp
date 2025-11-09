#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// define a structure to hold room scheduling information
struct roomSchedule {
	string month;
	string day;
	string year;
	string startTime;
	string endTime;
};
 
// function to launch the scheduling management system
void launchApp() {
		cout << "Launching the Frontrooms Scheduling Management System..." << endl << endl;
		
		roomSchedule r;
		ifstream inFile;


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
		cout << "Enter the time that you want your schedule to start (e.g., 7:30AM): ";
		cin >> r.startTime;
		cout << "Enter the time that you want your schedule to end (e.g., 10:30AM): ";
		cin >> r.endTime;
		cout << endl;
		cout << "The rooms/room available from " << r.startTime << " - " << r.endTime << " are:" << "\n \n";

		// read through the file and check for matching schedules

		string line;
		int matchCount = 0;
			

		inFile.open("3201.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.startTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.endTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.month) != string::npos) {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {
				matchCount++;
			}
		}
		if (matchCount <= 4) {
			cout << "Room 3201 is available." << endl;
		}
		inFile.close();

		matchCount = 0;
		inFile.open("3202.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.startTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.endTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.month) != string::npos) {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {
				matchCount++;
			}
		}
		if (matchCount <= 4) {
			cout << "Room 3202 is available." << endl;
		}
		inFile.close();

		matchCount = 0;
		inFile.open("3203.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.startTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.endTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.month) != string::npos) {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {
				matchCount++;
			}
		}
		if (matchCount <= 4) {
			cout << "Room 3203 is available." << endl;
		}
		inFile.close();

		matchCount = 0;
		inFile.open("3204.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.startTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.endTime) != string::npos) {
				matchCount++;
			}
			if (line.find(r.month) != string::npos) {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {
				matchCount++;
			}
		}
		if (matchCount <= 4) {
			cout << "Room 3204 is available." << endl;
		}
		inFile.close();


		int roomID = 0;
		ofstream outFile;

		cout << "Please enter the room you desire to use: ";
		cin >> roomID;

		switch (roomID) {

		case 3201: {

			outFile.open("3201.txt", ios::app);

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
				outFile << endl;
			}
			outFile.close();
			cout << "Reserved the room " << roomID << " successfully." << endl;
		} break;


		case 3202: {

			outFile.open("3202.txt", ios::app);

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
				outFile << endl;
			}
			outFile.close();
			cout << "Reserved the room " << roomID << " successfully." << endl;
		} break;


		case 3203: {

			outFile.open("3203.txt", ios::app);

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
				outFile << endl;
			}
			outFile.close();
			cout << "Reserved the room " << roomID << " successfully." << endl;
		} break;


		case 3204: {

			outFile.open("3204.txt", ios::app);
			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
				outFile << endl;
			}
			outFile.close();
			cout << "Reserved the room " << roomID << " successfully." << endl;
		} break;

		}
}