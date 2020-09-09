/*
	File Name: String.h
	Author: Peng Gao, Brittany Harbison
	Date: April 25, 2017
	Purpose: lab 13
*/

#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

using namespace std;

class String
{
	private:
		char* text;
		int size;
	
	public:
		String(char*);
		bool isEmpty();
		void display();
		int getSize();
		char* getString();
		int find(char, int);
		int compare(String*);
		String* substr(int, int);
		~ String();
};

#endif