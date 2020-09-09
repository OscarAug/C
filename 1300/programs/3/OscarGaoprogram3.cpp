/*
	File Name:functions.cpp
	Athour: Peng Gao
	Date: March 22
	Purpose: Bookstore
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void function ();
const int number = 12;

int main ()
{
	/*Tittle*/
	cout<<"\nWelcome to FLourish and Blotts Bookstore!";
	cout<<endl<<endl;
	function ();		

	
return 0;
}

void function ()
{
	/*Enter the profit for each month*/
	float values[number];
	int month;
	double totalprofit = 0;
	double averageprofit;
	double highest;
	highest = values[0];
	double lowest;
	lowest = 10000000000;
	double money1;
	double money2;
	double money3;
	double money4; 
	string themonthname[number]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Octorber", "November", "December"};
	int themonthname1;
	int themonthname2;
	int choice;
	
	for (month = 0; month < number; month++)
	{
		cout<<"\nEnter the profit for month"<<month+1;
		cout<<": $";
		cin>>values[month];
		while (values[month]<0)
		{
			cout << endl << "I'm sorry, you must enter a profit greater than zero.\n";
			cout<<"\nEnter the profit for month"<<month+1<<": $";
			cin >>values[month];
		}
		totalprofit += values[month];
	}
	/*Find the month that have highest profit*/
	/*Find the highest and lowest profit*/
	for (month = 0; month < number; month++)
	{
		if (values[month] > highest)
		{
			highest = values[month];
			themonthname1 = month;
		}
		if (values[month] < lowest)
		{
			lowest = values[month];
			themonthname2 = month;
		}
	}

	cout<<"\n-------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------------------------------------";
	cout<<endl<<endl;
	cout<<setw(20)<<"Total PROFITS FOR YEAR: "<<setw(32)<<" $ "<<setw(10)<<totalprofit<<endl; 
	averageprofit = totalprofit/number;
	cout<<setw(20)<<"YEARLY AVERAGRE PROGIT: "<<setw(32)<<" $ "<<setw(10)<<averageprofit<<endl;
	cout<<setw(20)<<"MONTH WITH LARGEST PROFIT: "<<setw(17)<<themonthname[themonthname1]<<" totaling $ "<<setw(10)<<highest<<endl;
	cout<<setw(20)<<"MONTH WITH SMALLEST PROFIT: "<<setw(16)<<themonthname[themonthname2]<<" totaling $ "<<setw(10)<<lowest<<endl;
	cout<<endl<<endl;
	/*Find the profit for each quarter*/
	cout<<"\n-------------------------------------------------------------------------------";
	cout<<endl<<endl;
	for (month=0; month < 3; month++)
	{
		money1 += values[month];
	}
	for (month=3; month < 6; month++)
	{
		money2 += values[month];
	}
	for (month=6; month < 9; month++)
	{
		money3 += values[month];
	}
	for (month=9; month < 12; month++)
	{
		money4 += values[month];
	}
	cout<<setw(45)<<"Quarterly Profits"<<endl;
	cout<<endl<<endl;
	cout<<setw(30)<<"January - March "<<setw(10)<<"$"<<setw(7)<<money1<<endl;
	cout<<setw(30)<<"April - June "<<setw(10)<<"$"<<setw(7)<<money2<<endl;
	cout<<setw(30)<<"July - September "<<setw(10)<<"$"<<setw(7)<<money3<<endl;
	cout<<setw(30)<<"Octorber - December "<<setw(10)<<"$"<<setw(7)<<money4<<endl;
	/*Restart the program or not*/	
	cout<<"\n-------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------------------------------------";
	cout<<"\nWould you like to run the program again? (y/n)";
	cin>>choice;
	switch (choice)
	{
			case 'y': 
			{
				function ();
				break;
			}
			case 'n': 	
			{
				cout<<"\nYou chose to end the program. \n\nByebye!"<<endl;
				break;
			}
	cout<<endl<<endl;
	}
	
}

