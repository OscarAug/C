/*
	Author: Robert Thompson and Peng Gao
	Name: lab6.cpp
	Purpose: See lab 6 file
	Date: 2/28/17
*/

#include <iostream>
#include <iomanip>

using namespace std;

void goblinSickDays();
int displayCoolMessage(int);

int main()
{
	//creating vars
	int userChoice;
	int messageCounter = 0;
	int userChoiceFlag = 0;
	
	do
	{
		//this menu
		cout << endl << "Welcome to Gringott's Bank!\n";
		cout << "Please choose from the following options: \n";
		cout << "\t1 - Enter Goblin Sick Days\n";
		cout << "\t2 - Display something cool\n";
		cout << "\t3 - End the Program";
		cout << endl << endl;
		cout << "Choice:  ";
		cin >> userChoice;
	
		//user validation
		while (userChoice < 1 || userChoice > 3)
		{
			cout << endl << "Invalid choice. Please choose a number between 1 and 3 inclusive.\n";
			cout << "Choice:  ";
			cin >> userChoice;
		}
		
		//switch statment
		switch (userChoice)
		{
			case 1: 
			{
				goblinSickDays();
				break;
			}
			case 2: 	
			{
				messageCounter = displayCoolMessage(messageCounter);
				break;
			}
			case 3:
			{
				cout << endl << "You chose to display the cool message " << messageCounter << " times." << endl << endl;
				cout << "Bye!";
				userChoiceFlag = 1;
				return 0;
			
			}
		}
	
	
	} while (userChoiceFlag == 0);
	
	return 0;
}

void goblinSickDays()
{
	int goblinCount; //how many goblins worked
	int totalSickDays = 0; //how many days they all missed
	int sickDay; //how many days in one year one goblin missed
	int forGoblin; //starts at one, increases every for loop iteration
	cout << endl << "How many Goblin tellers worked at Gringotts during each of the last three years?\n";
	cin >> goblinCount;
	for (forGoblin = 1; forGoblin <= goblinCount; forGoblin++)
	{
		cout << endl << "How many sick days was Goblin " << forGoblin << " out for, during year 1?\n";
		cin >> sickDay;
		totalSickDays = totalSickDays + sickDay;
		cout << endl << "How many sick days was Goblin " << forGoblin << " out for, during year 2?\n";
		cin >> sickDay;
		totalSickDays = totalSickDays + sickDay;
		cout << endl << "How many sick days was Goblin " << forGoblin << " out for, during year 3?\n";
		cin >> sickDay;
		totalSickDays = totalSickDays + sickDay;
	
	}
	
	cout << endl << "The "<< goblinCount << " Goblins were out sick for a total of " << totalSickDays << " days during the last three years\n\n\n";
}

int displayCoolMessage(int messageCounter)
{
	cout << endl;
	cout << " .---. .-. .-..-. .----.   .-. .----.    .---.  .----.  .----. .-.\n";
	cout << "{_   _}| {_} || |{ {__     | |{ {__     /  ___}/  {}  \\/  {}  \\| |\n";
	cout << "  | |  | { } || |.-._} }   | |.-._} }   \\     }\\      /\\      /| `--.\n";
	cout << "  `-'  `-' `-'`-'`----'    `-'`----'     `---'  `----'  `----' `----'\n";

	return messageCounter += 1;
	return 0;
}






