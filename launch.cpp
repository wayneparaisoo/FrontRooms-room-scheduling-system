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
		cout<<"\n";
		cout << "\t\t\t\t\t\t\t\t\tLaunching the Frontrooms Scheduling Management System..." << endl << endl;
		
		roomSchedule r;
		ifstream inFile;


		// welcome message
		cout << "\t\t\t\t\t\t\t\t\t--------------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t\t\t\tWelcome to the Frontrooms Scheduling Management System!" << endl;
		cout << "\t\t\t\t\t\t\t\t\t--------------------------------------------------------" << endl << endl;

		// prompt user for scheduling details
		cout << "\t\t\tEnter the month you want to schedule (e.g., January): ";
		cin >> r.month;
		cout << "\t\t\tEnter the day you want to schedule (e.g., 15): ";
		cin >> r.day;
		cout << "\t\t\tEnter the year you want to schedule (e.g., 2025): ";
		cin >> r.year;

		// read through the file and check for matching schedules

		string line;
		int matchCount = 0;

		// 
		inFile.open("3201.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.month) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {

			}
			else {
				matchCount++;
			}
		}
		inFile.close();

		inFile.open("3202.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.month) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {

			}
			else {
				matchCount++;
			}
		}
		inFile.close();

		inFile.open("3203.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.month) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {

			}
			else {
				matchCount++;
			}
		}
		inFile.close();

		inFile.open("3204.txt");
		while (getline(inFile, line)) {

			// check for month, day, and year matches
			if (line.find(r.month) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.day) != string::npos) {

			}
			else {
				matchCount++;
			}
			if (line.find(r.year) != string::npos) {

			}
			else {
				matchCount++;
			}
		}


		inFile.close();


		int roomID = 0;
		ofstream outFile;
		
		cout<<"\n\n";
		cout << "\t\t\tPlease enter the room you desire to use: ";
		cin >> roomID;

		switch (roomID) {

		case 3201: {

			outFile.open("3201.txt", ios::out);

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
			}
			outFile.close();
		} break;


		case 3202: {

			outFile.open("3202.txt", ios::out);

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
			}
			outFile.close();
		} break;


		case 3203: {

			outFile.open("3203.txt", ios::out);

			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
			}
			outFile.close();
		} break;


		case 3204: {

			outFile.open("3204.txt", ios::out);
			if (line.find(roomID)) {
				outFile << "RoomID: " << roomID << endl;
				outFile << "ResMonth: " << r.month << endl;
				outFile << "ResDay: " << r.day << endl;
				outFile << "ResYear: " << r.year << endl;
				outFile << "StartTime: " << r.startTime << endl;
				outFile << "EndTime: " << r.endTime << endl;
			}
			outFile.close();
		} break;

		}
}
