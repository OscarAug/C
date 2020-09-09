/*
	File Name:arrayHeader.h
	Athour: Peng Gao
	Date: April 7
	Purpose: Research of donut
*/

#ifndef ARRAYHEADER_H
#define ARRAYHEADER_H

//#includes and namespace
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//function prototypes
int* makeArray_numD(int);
int* makeArray_tpD(int);
int* makeArray_location(int);
int getLagest(int*, int);
int getSmallest(int*, int);
int getTotal(int*, int);
string* getMode(int*, int*, int);

#endif