/*
	
	Filename: permutations.h
	Author: Peng Gao and Aldo Arroyo
	Date: April 9 2017
	Purpose: The objective of this program is to create a random permutation of possible card outcomes in a standard 52 deck.
	The purpose of this lab is to practice our arrays, pointer and memory allocation, random numbers.
*/


#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int *initPermutation(int);

int nextPermutation(int*, int&);

void removePermutation(int*, int , int);

 
#endif 


