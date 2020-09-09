/*
	File Name:CSC-2100 program 1
	Athour: Peng Gao
	Date: January 31
	Purpose: CSC-2100 program 1
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int feet;
	float money;
	float KWH;
	float panels;
	float incentives;
	float days;
	float cost;
	float totalyears;
	const float a=0.00035; /* KHW*/
	const float b=0.0069444; /*square feet to square inches*/
	const float c=56; /* cost of panels*/
	const float d= 1000; /*federal incentive money*/
	
	
	/* House information*/
	cout<<"\nHow many square feet is your house? ";
	cin>>feet;
	cout<<"\nHow much money was your current month's electric bill? $";
	cin>>money;
	cout<<"\nHow many KWH(KiloWatts per Hour) did you consume on your current bill? ";
	cin>>KWH;
	cout<<"\nHow many days were serviced on your current bill? ";
	cin>>days;
	
	/* solar panel information*/
	cout<<"\nHOUSE INFORMATION"<< setw(50) <<"SOLAR PANEL INFORMATION\n";
	cout<<"\n----------------------------"<< setw(40) <<"--------------------------";
	panels=KWH/days/a*b;
	cout<<"\n\nSquare Feet: "<<feet<< setw(41) <<"Panels Needed: "<<panels;
	
	cost=panels*c;
	cout<<"\nCurrent Electric Bill: $"<<money<< setw(30) <<"Cost of Panels: $"<<cost;
	
	
	float constantincentives=d;
	if (feet<1500)
	{
		/* if square feet is less than 1500*/
		incentives=constantincentives+200;
	}
	else
	{
		/* if square feet is greater than or equal to 1500 */
		incentives=constantincentives+500;
	}
	cout<<"\nKWH Used Current Month: "<<KWH<< setw(34) <<"Total Incentives: $"<<incentives;
	cout<<"\nDays in Current Month: "<<days;
	
	totalyears=(cost-incentives)/money/12;
	cout<<"\nif you pay $"<<money<<" each month toward solar panels instead of your electric bill, it will take "<<totalyears;
	cout<<" years to pay off your panels";
	
	
	



	return 0; 
}