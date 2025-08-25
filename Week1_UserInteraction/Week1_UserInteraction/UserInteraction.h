#pragma once
#include <string>
using namespace std;

class UserInteraction
{
private:
	string firstName = "";
	string lastName = "";
	string thirdName = "";

public:
	void askUser();
	void displayMessage();
};