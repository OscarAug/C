/*
File Name: lab5.cpp
	Author:Peng Gao, William Price
	Date: 02/21/2017
	purpose: Lab.5

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void seedRandom ()
{
    srand (time(NULL));
}

int getRandomInt (int low, int high)
{
    
    return rand()%(high - low) + low;
}

int main()
{
	char choice;
	int guess;
	int tries;
	int y;
	int n;
	guess=0;
	int x;
		
	
	cout<<"\nAre you ready to play (y/n)? ";
	cin>>choice;
			//prepare the system to generate a random nubmer
		seedRandom();
		// getRandomInt generates a random number between 1 and 100 and saves it in x
		x=getRandomInt(1,100);
	switch (choice)
	{
		case 'y':cout<<endl<<endl;
		cout<<"Enter your guess : ";
		cin>>guess;
		

		while (guess<1 || guess>101)
			cout<<"You entered an invalid number. Choose between 1 and 101./n";
			cout<<"Enter your guess : ";
		while (guess>0 && guess<102)
		{	
			cin>>choice;
			cin.ignore ();

			guess++;
			if (guess<x)
			{
				cout<<"\nToo Low";
			}
			else if (guess>x)
			{
				cout<<"\nToo High";
			}
			else if (guess=x)
			{
				cout<<"\nCorrect! You got it in "<<guess<<" tries!";
				cout<<"\nAre you ready to play again? ";
			}
		}	
		break;	
		
		case 'n' : cout<<"\nYou chose to end the program. \n\nByebye!"<<endl;
			break;
		default: cout<<"you did not enter y or n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}