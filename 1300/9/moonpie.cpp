/*
	File Name:Moonpie.cpp
	Athour: Peng Gao, Ty Tabor
	Date: April 2
	Purpose: Moonpie
*/
#include "moonpie.h"

int main()
{
	
	int* moonpieArray;
	int days, total, average, most, least;
	cout << "\nHow many days did Jane steal moon pies? ";
	cin >> days;
	cout << "\n\nEnter the number of moon pies stolen each day.\n\n";
	while(days < 0)
	{
		cout << "\nInvalid number.  Enter a positive number.";
		cout << "\nHow many days did Jane steal moon pies?";
		cin >> days;
	}
	moonpieArray = makeArray(days);	
	fillArray(moonpieArray, days);
	total = totalmoonpie(moonpieArray, days);
	average = averagenumber(moonpieArray, days);
	most = mostMoonPie(moonpieArray, days);
	least = leastMoonPie(moonpieArray, days);

	
	cout << "\n---------------RESULTS-------------";
	cout << "\nTOTAL # MOON PIES STOLEN:  " << total;
	cout << "\nAVERAGE # MOON PIES STOLEN PER DAY:  " << average;
	cout << "\nMOST # MOON PIES STOLEN IN ONE DAY:  " << most;
	cout << "\nLEAST # MOON PIES STOLEN IN ONE DAY:  " << least;
	
	delete [] moonpieArray;
	return 0;
}