//============================================================================
// Name        : break.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main() {

	/*  **Break**
	 for (int i = 0; i < 5; i++) {
	 cout << "i is " << i << endl;

	 if (i == 3) {
	 break;
	 }

	 cout << "Looping..." << endl;

	 }
	 cout << "Program quitting..." << endl;
	 */
	/*for (int i = 0; i < 5; i++) {
	 cout << "i is " << i << endl;

	 if (i == 3) {
	 continue;
	 }

	 cout << "Looping..." << endl;

	 }
	 cout << "Program quitting..." << endl;
	 */

	const string password = "hello";
	string input;

	do {
		cout << "Enter your password> " << flush;
		cin >> input;

		if (input == password) {
			break;
		} else {
			cout << "Access denied" << endl;
		}

	} while (true);

	cout << "Password accepted" << endl;

	return 0;
}
