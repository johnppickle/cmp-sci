#include "UserInteraction.h"
#include <iostream>
#include <string>
using namespace std;

void UserInteraction::askUser()
{
	cout << "Enter your full name: ";
	cin >> firstName >> lastName >> thirdName;
}

void UserInteraction::displayMessage()
{
	cout << "Hi Mr. " << firstName << " " << lastName << " " << thirdName << "! Please come in!" << endl;
}
