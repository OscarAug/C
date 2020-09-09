/*
	File Name:functions.cpp
	Athour: Peng Gao, Ty Tabor
	Date: April 2
	Purpose: Moonpie
*/
#include "moonpie.h"

int* makeArray(int day)
{
	int* array;
	array = new int[day];
	return array;
}

void fillArray(int* array, int day)
{
	for (int x=0; x < day; x++)
	{
		cout << "\nDay " << (x+1) <<":  ";
		cin >> *(array+x);
		cout << endl;
	}
}

int totalmoonpie(int* array, int day)
{
	int total = 0;
	
	for(int x=0; x < day; x++)
	{
		total += *(array+x);
	}
	
	return total;
}

double averagenumber (int* array, int day)
{
	double average = 0;
	for (int x=0; x < day; x++)
	{
		average += *(array+x)/day;
	}
	return average;
}

int mostMoonPie(int* array, int day)
{
	int most = 0;
	
	for(int x=1; x < day; x++)
	{
		if (most < *(array+x))
			most = *(array+x);
	}
	return most;
}

int leastMoonPie(int* array, int day)
{
	int least = 1000000;
	
	for (int x=0; x < day; x++)
	{
		if (least > *(array+x))
			least = *(array+x);
	}
	return least;
}