/*
	File Name:labb.cpp
	Author: Peng Gao, Robert Coulson
	Date: January 31, 2016
	Purpose: ENERGY DRINK PROGRAM
*/

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	float a;
	float b; 
	float c;
	a = 16500;
	b = 0.15;
	c = 0.58;
	cout<<fixed<<setprecision(2);
	cout<<"\nNum of people who drink more than one a week:\n";
	float x=a*b;
	cout<<x;
	cout<<"\nNum of people who drink more than one a week and prefer:\n";
	float y=a*b*c; 
	cout<<y;
	
	
	return 0;
}