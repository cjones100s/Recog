/*
 * main.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: Chris
 */

#include <ctime>
#include <string>
#include <iostream>



using namespace std;

void printname(char* var){
	cout << "Hello " << var;
	cin.get();
	cin.get();
	cout << "\nLol sorry :)\n " << "Forgot the first letter\n";
	cin.get();
	cout << "Hello " << --var << "...fucking nigger!";
	cin.get();
}

struct profile {
	char* username;
	char* password;
};

int main(int argc, char* argv[]){

	profile user1;// = {new char[100], new char[100]};
	user1.username = new char[100];
	user1.password = new char[100];
	time_t* timeNow = new time_t(time(0));
	struct tm* currentTime = localtime(timeNow);

	//Display Title and Stats
	cout << "Recognition\n";
	cout << "Rev 1.0\n";
	cout << currentTime->tm_mon + 1 << "-" << currentTime->tm_mday  << '-' << currentTime->tm_year + 1900 << "  ";
	cout << currentTime->tm_hour << ":" << "0" + to_string(currentTime->tm_min); //((currentTime->tm_min < 10) ? '0' + char(currentTime->tm_min) : currentTime->tm_min);
	cout << ' ' << ((currentTime->tm_hour > 12) ? "PM" : "AM") << endl;


	cout << "Login ID: ";

    //Authenticate User
	cin >> user1.username;
	cout << "Password: ";
	cin >> user1.password;

	printname(&user1.username[1]);

	return 0;
}



