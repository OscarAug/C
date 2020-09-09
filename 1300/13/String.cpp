/*
	File Name: String.cpp
	Author: Peng Gao, Brittany Harbison
	Date: April 25, 2017
	Purpose: lab 13
*/

#include "String.h"

String::String(char* charArray)
{
	size = strlen(charArray);
	text = new char[size+1];
	strcpy(text, charArray);
	text[size] = 0;
}

bool String::isEmpty()
{
	bool a; 
	
	if(size == 0)
		a = true;
	else
		a = false;
	
	return a;
}
void String::display()
{
	cout << text;
}

int String::getSize()
{
	return size;
}

char* String::getString()
{
	return text;
}

int String::find(char delimiter, int end)
{
	if(end < 0 || end > size)
		return -1;
	int location;
	for(int i = end; i >= 0; i--)
	{
		if(text[i] == delimiter)
		{
			location = i;
			break;
		}
	}
	
	return location;
}

int String::compare(String* str)
{
	return strcmp(text, str -> text);
}

String* String::substr(int start, int end)
{
	if(start > end || start < 0)
		return NULL;
	if(start > size || end > size)
		return NULL;
	int subLength = (end - start)+1;
	char* subText = new char[subLength+1];
	int b = 0;
	for(int i = start; i <= end; i++)
	{
		subText[b] = text[i];
		b++;
	}
	subText[b] = 0;
	String* subString = new String(subText); 
	delete subText;
	
	return subString;
}

String::~String()
{
	delete[]text;
}