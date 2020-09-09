/*
                 File Name: lab1.cpp
				 Author: Robert Coulson, Peng Gao
				 Date: January 31, 2016
				 Purpose: Math expressions in C++
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	float a,b,c;
	a = 750;//amount of shares
	b = 35; //price of share
	c = 0.02; //commission	
	cout<<fixed<<setprecision(2);
	cout<< "Amount paid for the stock:   ";
	float x = a*b;
	cout<<x;
	cout<< "\nCommission paid on the sale:   ";
	x *=c;
	cout<<x;
	cout<< "\nTotal amount paid for stock:   ";
	x=x+a*b;
	cout<<x;

	
	
	
	
	
	
	
	return 0;
}
	