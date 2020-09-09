/*
	File Name:Moonpie.cpp
	Athour: Peng Gao, Ty Tabor
	Date: April 2
	Purpose: Moonpie
*/


#include <iostream>
#include<iomanip>

using namespace std;

void function ();
void thetotalnumber ();
void theaveragenumber ();
void themostnumber ();
void theleastnumber ();


int days; 
int * day = 0;
int number;
int totalnumber = 0;
double averagenumber;
int mostnumber = 0;
int leastnumber = 10000;

int main ()
{
	cout<<"\nHow many days Jane steal moon pies  ";
	cin>>days;
	cout<<"Enter the number of moon pies stolen each day.";
	function ();	
	cout<<"\n---------------------RESULTS---------------------";
	cout<<"\nTOTAL # MOON PIE STOLEN: "<<totalnumber;
	cout<<"\nAVERAGE # MOON PIE STOLEN PER DAY: "<<averagenumber;
	cout<<"\nMOST # MOON PIE STOLEN ONE DAY: "<<mostnumber;
	cout<<"\nLEAST # MOON PIE STOLEN ONE DAY: "<<leastnumber;
	
	
return 0; 
}

void function ()
{
	day = new int[days];
	for (int i = 0; i < days; i++)
	{
		cout<<"\nDAY "<<i+1;
		cout<<": ";
		cin>>number;
		thetotalnumber ();
		theaveragenumber ();
		themostnumber ();
		theleastnumber ();

	}
	delete [] day;
}

void thetotalnumber ()
{
	totalnumber = totalnumber + number;
}

void theaveragenumber ()
{
	averagenumber = totalnumber / days;
}

void themostnumber ()
{
	if (number > mostnumber)
		{
			mostnumber = number;
		}
}

void theleastnumber ()
{
	if (number < leastnumber)
		{
			leastnumber = number;
		}
}