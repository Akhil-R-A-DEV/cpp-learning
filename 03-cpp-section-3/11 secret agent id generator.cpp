/*
secret agent id card
ask the agent for :
full name (string)
secret alias (string)
age (int)
agent lever (1-10 , as int)
favorite gadgets (string)

then format it into a stylized output that looks like an id card

*/
#include <iostream>
#include <string>
using namespace std;
int main() {

	string agentName;
	string secretAlia;
	int agentAge;
	int agentLevel;
	string favGadget;

	cout << "What is your full name : " << endl;
	getline(cin, agentName);

	cout << "What is your secret alia : " << endl;
	getline(cin, secretAlia);

	cout << "How old are you : " << endl;
	cin >> agentAge;
	cin.get();
	cout << "what is your level from 1 to 10 : " << endl;
	cin >> agentLevel;
	cin.get();
	cout << "what are your favorite gadget : " << endl;
	getline(cin, favGadget);

	cout << "======================================" << endl;
	cout << "S.E.C.R.E.T__A.G.E.N.T__I.D" << endl;
	cout << "======================================" << endl;

	cout << "Name : " << agentName << endl;
	cout << "Secret Alia : " << secretAlia << endl;
	cout << "Age : " << agentAge << endl;
	cout << "Level : " << agentLevel << endl;
	cout << "Gadget : " << favGadget << endl;
	cout << "======================================" << endl;


	return 0;
}