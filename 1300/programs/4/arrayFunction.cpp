/*
	File Name:arrayFunction.cpp
	Athour: Peng Gao
	Date: April 7
	Purpose: Research of donut
*/

#include "arrayHeader.h"

/*make array*/
int* makeArray_numD(int size)
{
	int* numDonuts = new int[size];
	for (int i = 0; i < size; i++)
		numDonuts[i] = 0;
	return numDonuts;
}

/*get different type of donut*/
int* makeArray_tpD(int size)
{
	int* typeDonuts = new int[size];
	for (int i = 0; i < size; i++)
		typeDonuts[i] = 0;
	return typeDonuts;
}

/*get the loaction of each donut store*/
int* makeArray_location(int size)
{
	int* location = new int[size];
	for (int i = 0; i < size; i++)
		location[i] = 0;
	return location;
}

/*get largest number  of donuts eaten*/
int getLagest(int*numDonuts, int size)
{
	int largest_NODE = numDonuts[0];
	for (int i = 1; i < size; i++)
	{
		if (*(numDonuts + i) > largest_NODE)
			largest_NODE = *(numDonuts + i);
	}
	return largest_NODE;
}

/*get smallest number  of donuts eaten*/
int getSmallest(int* numDonuts, int size)
{
	int smallest_NODE = numDonuts[0];
	for (int i = 1; i < size; i++)
	{
		if (*(numDonuts + i) < smallest_NODE)
			smallest_NODE = *(numDonuts + i);
	}
	return smallest_NODE;
}

/*make total number  of donuts eaten*/
int getTotal(int* numDonuts, int size)
{
	int total = numDonuts[0];
	for (int i = 1; i < size; i++)
		total += numDonuts[i];
	return total;
}

/*make which store is most popular donut store and what kind of donut is most popular*/
string* getMode(int* location, int* typeDonuts, int size)
{
	string* most_popular = new string[2];
	int max_count_L = 0;
	int mode_L;
	for (int i = 0; i < size; i++)  //get mosst popular loaction
	{
		int count = 1;
		for (int j = i + 1; j < size; j++)
		{
			if (*(location + i) == *(location + j))
			{
				count++;
			}
			if (count > max_count_L) 
			{
				max_count_L = count;
				mode_L = *(location + i);
			}
			
		}
	}
	if (max_count_L == 1)
		mode_L = -1;
	switch (mode_L)
	{
	case 1:
		*most_popular = "Dunkin";
		break;
	case 2:
		*most_popular = "Ralphs";
		break;
	case 3:
		*most_popular = "Big O Donuts";
		break;
	case 4:
		*most_popular = "Krispykreme";
		break;
	case 5:
		*most_popular = "Other";
		break;
	case -1: *most_popular = "None (nomode)";
	}

	int max_count_T = 0;
	int mode_T;
	for (int i = 0; i < size; i++)  //get mosst popular type
	{
		int count = 1;
		for (int j = i + 1; j < size; j++)
		{
			if (*(location + i) == *(location + j))
				count++;
			if (count > max_count_T)
			{
				max_count_T = count;
				mode_T = *(location + i);
			}

		}
	}
	if (max_count_T == 1)
		mode_T = -1;
	switch (mode_T)
	{
	case 1:
		*(most_popular + 1) = "Glazed";
		break;
	case 2:
		*(most_popular + 1) = "Blueberry";
		break;
	case 3:
		*(most_popular + 1) = "Chocolate";
		break;
	case 4:
		*(most_popular + 1) = "Holes";
		break;
	case 5:
		*(most_popular + 1) = "Powdered";
		break;
	case 6:
		*(most_popular + 1) = "Filled";
		break;
	case -1:
		*(most_popular + 1) = "None (no mode)";
		break;
	}
	return most_popular;
}

	
