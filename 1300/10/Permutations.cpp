/*
	Filename: permutations.cpp
	Author: Peng Gao and Aldo Arroyo
	Date: April 9 2017
	Purpose: The objective of this program is to create a random permutation of possible card outcomes in a standard 52 deck.
	The purpose of this lab is to practice our arrays, pointer and memory allocation, random numbers.
*/

#include "permutations.h"

int *initPermutation(int n)
{
	//creating dynanmic array
	int* arr;
	arr = new int[n];
	return arr;
}

int nextPermutation(int*Permutation, int&permuteSize)
{	
	int nextValue;
	//inputing random numbers into array
	nextValue=1+rand()%52;
	//calling removePermutation function
	removePermutation(Permutation, permuteSize, nextValue);	
	return nextValue;
}

void removePermutation(int*permutation, int permuteSize, int removeindex)
{
	for(int i=removeindex; i<permuteSize;i++)
	{
		permutation[i]=*(permutation+1);
		permutation[permuteSize-1] = 0;
	}
}