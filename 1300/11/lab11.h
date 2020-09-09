/*
                 File Name:Lab11
				 Author: Robert A Coulson, Peng Gao
				 Date:04/11/17
				 Purpose:Structures, struct arrays, functions
*/
#ifndef lab11_h
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;




struct Student
{
	string ID;
	string name;
	float gpa;
};

int READFILE(Student[]);
void DISPLAYRECORDS(Student s[], int choice);
const int SIZE=10;

#endif