/*
	File Name:OscarGaoprogram2.cpp
	Athour: Peng Gao
	Date: March 3
	Purpose: Play the game of MASH
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	string name;
	string anothername;
	string hatename;
	string city;
	string anothercity;
	string hatecity;
	string job;
	string anotherjob;
	string worstjob;
	string company;
	string anothercompany;
	string hatecompany;
	string car;
	string anothercar;
	string hatecar;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	char choice;
	int randomInt;

	
	
	/*Enter information*/
	
	cout<<"Pick from the following menu: ";
	cout<<"\n1. Let's play MASH! ";
	cout<<"\n2. End program.";
	cin>>choice;
	cin.ignore ();
	
	switch (choice)
	{
		case '1' : cout<<"\nYou chose to paly MASH！";
		cout<<"\nEnter in one person you like: ";
		getline (cin, name);
		cout<<"\nEnter in another person you like: ";
		getline (cin, anothername);
		cout<<"\nEnter in a person you hate: ";
		getline (cin, hatename);
		cin.ignore ();
		cout<<"\nEnter three numbers between 1 and 100, seperated by a space: ";
		cin>>num1;
		cin>>num2;
		cin>>num3;
		cin.ignore ();
		/*Enter the hints if enter number is wrong*/
		while (num1 < 1 || num1 > 100)
		{
		cout<<"The fist number you entered was invaild."<<endl<<"Enter a number between 1 and 100.";
		cin>>num1;
		cin.ignore ();
		}
		while (num2 < 1 || num2 > 100)
		{
		cout<<"The second number you entered was invaild."<<endl<<"Enter a number between 1 and 100.";
		cin>>num2;
		cin.ignore ();
		}
		while (num3 < 1 || num3 > 100)
		{
		cout<<"The third number you entered was invaild."<<endl<<"Enter a number between 1 and 100.";
		cin>>num3;
		cin.ignore ();
		}
	
		cout<<"\nEnter in which city, state you like: ";
		cin>>city;
		cout<<"\nEnter in another which city, state you like: ";
		cin>>anothercity;
		cout<<"\nEnter in one city, state you hate: ";
		cin>>hatecity;
		cout<<"\nEnter in an awesome job title: ";
		cin>>job;
		cout<<"\nEnter in another awosome job title: ";
		cin>>anotherjob;
		cout<<"\nEnter in the worst job title ever: ";
		cin>>worstjob;
		cout<<"\nEnter a company or restaurant you like: ";
		cin>>company;
		cout<<"\nEnter another company or restaurant you like: ";
		cin>>anothercompany;
		cout<<"\nEnter a company or restaurant you hate: ";
		cin>>hatecompany;
		cin.ignore ();
		cout<<"\nEnter three numbers between 10,000 and 500,000, seperated by a space.";
		cin>>num4;
		cin>>num5;
		cin>>num6;
		cin.ignore ();
		/*Enter the hints if enter number is wrong*/
		while (num4 < 10000 || num4 > 500000)
		{
		cout<<"The fist number you entered was invaild."<<endl<<"Enter a number between 10000 and 500000.";
		cin>>num4;
		cin.ignore ();
		}
		while (num5 < 10000 || num5 > 500000)
		{
		cout<<"The second number you entered was invaild."<<endl<<"Enter a number between 10000 and 500000.";
		cin>>num5;
		cin.ignore ();
		}
		while (num6 < 10000 || num6 > 500000)
		{
		cout<<"The third number you entered was invaild."<<endl<<"Enter a number between 10000 and 500000.";
		cin>>num6;
		cin.ignore ();
		}
		
		cout<<"\nEnter in a car that you like: ";
		getline (cin, car);
		cout<<"\nEnter in another car that you like: ";
		getline (cin, anothercar);
		cout<<"\nEnter in a car that you hate: ";
		getline (cin, hatecar);
		cin.ignore ();
		
		cout<<"\n***********"<< setw(20) <<"MASH RESULTS"<< setw(20)<<"***********";
		cout<<"\nYou live in an apartment.";
		cout<<endl<<endl;
		
		/*Do the random function*/
		randomInt=(rand()%3)+1;
		if (randomInt==1)
		{
			cout<<"\nYou will be happily married to "<<name<<"."<<endl;
		}
			 else if (randomInt==2)
			{
				cout<<"\nYou will be happily married to "<<anothername<<"."<<endl;
			}
			 else if (randomInt==3)
			{
				cout<<"\nYou will be happily married to "<<hatename<<"."<<endl;
			}
			
		randomInt=(rand()%3)+1;
		if (randomInt==1)
		{
			cout<<"\nYou will live in "<<city<<"."<<endl;
		}
			 else if (randomInt==2)
			{
				cout<<"\nYou will live in "<<anothercity<<"."<<endl;
			}
			 else if (randomInt==3)
			{
				cout<<"\nYou will live in  "<<hatecity<<"."<<endl;
			}
		
		randomInt=(rand()%3)+1;
		if (randomInt==1)
		{
			cout<<"\nYou will work at "<<company;
		}
			 else if (randomInt==2)
			{
				cout<<"\nYou will work at "<<anothercompany;
			}
			 else if (randomInt==3)
			{
				cout<<"\nYou will work at "<<hatecompany;
			}
			
		randomInt=(rand()%3)+1;
		if (randomInt==1)
		{
			cout<<" as a "<<job;
		}
			 else if (randomInt==2)
			{
				cout<<" as a "<<anotherjob;
			}
			 else if (randomInt==3)
			{
				cout<<" as a "<<worstjob;
			}
			
		randomInt=(rand()%3)+1;
		if (randomInt==1)
		{
			cout<<" making "<<num4;
		}
			 else if (randomInt==2)
			{
				cout<<" making "<<num5;
			}
			 else if (randomInt==3)
			{
				cout<<" making "<<num6;
			}
		cout<<" a year";
		randomInt=(rand()%3)+1;
		if (randomInt==1)
		{
			cout<<"\nYou will drive a "<<car<<"."<<endl;
		}
			 else if (randomInt==2)
			{
				cout<<"\nYou will drive a "<<anothercar<<"."<<endl;
			}
			 else if (randomInt==3)
			{
				cout<<"\nYou will drive a "<<hatecar<<"."<<endl;
			}
			
		
		
		
		
		break;
			
		case '2' : cout<<"\nYou chose to end the program. \n\nByebye!"<<endl;
			break;
		default: cout<<"you did not enter 1 or 2";
	
	cout<<endl<<endl;
	}
	
	
	return 0;
}