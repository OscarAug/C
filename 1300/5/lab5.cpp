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
	guess=0;
	int tries;
	tries=1;
	int x;
		//prepare the system to generate a random number
		seedRandom();
		// getRandomInt generates a random number between 1 and 100 and saves it in x
		x=getRandomInt(1,100);
	
	cout<<"\nAre you ready to play (y/n)? ";
	cin>>choice;
	
	switch (choice)
	{
		while (true)
		{	
			case 'y':cout<<endl<<endl;
			cout<<"Enter your guess : ";
			cin>>guess;
			
			
			
			while (guess<1 || guess>101)
			{	
				cout<<"You entered an invalid number. Choose between 1 and 101."<<endl;
				cout<<"Enter your guess : ";
				cin>>guess;
			}	
			while (guess>0&&guess<102)
			{	
				if (guess<x)
				{
					cout<<"\nToo Low"<<endl;
					cout<<"Enter your guess : ";
					cin>>guess;
				}
				else if (guess>x)
				{
					cout<<"\nToo High"<<endl;
					cout<<"Enter your guess : ";
					cin>>guess;
				}
				else if (guess=x)
				{
					cout<<"\nCorrect! You got it in "<<tries<<" tries!";
					cout<<"\nAre you ready to play again? （y/n）";
					cin>>choice;
					if (choice=='y')
						break;
					else (choice=='n');
						cout<<endl<<endl;
						return 0;
				}
				tries++;
			}		
		}	
		break;	
		
		case 'n' : cout<<"\nYou chose to end the program. \n\nByebye!"<<endl;
			break;
		default: cout<<"you did not enter y or n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}