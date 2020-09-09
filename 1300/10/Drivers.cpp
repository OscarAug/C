/*
	Filename: Drivers.cpp
	Author: Peng Gao and Aldo Arroyo
	Date: April 9 2017
	Purpose: The objective of this program is to create a random permutation of possible card outcomes in a standard 52 deck.
	The purpose of this lab is to practice our arrays, pointer and memory allocation, random numbers.
*/
#include "permutations.h"


main()

{
	int n = 51;//fixed number of cards possible
	int nextValue;
	
	int *Permutation; //point to numbers
	Permutation = initPermutation(n); //creates an array of n numbers
	
	srand(time(NULL));
	
	// Display the numbers.
   for (int count = 0; count <= n; count++)
   {
	  nextValue = nextPermutation(Permutation, n);
	  *(Permutation+count) = nextValue;
	  
      cout << *(Permutation+count) << " ";
   }
	
   //free memory
   delete[] Permutation;
   return 0;
}