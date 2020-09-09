/*
	File Name: String.cpp
	Author: Peng Gao, Brittany Harbison
	Date: April 25, 2017
	Purpose: lab 13
*/
#include "String.h"
String::String (char* charArray)
{
	int arraySize = strlen (charArray); 
	
	char* buffer = new char [arraySize + 1]; //save space in new array for null terminator
	String* str = new String;
	
	for (int i = 0; i < arraySize; i++)
	{
		*(buffer + i) = *(charArray + i);  //can't directly assign const char* to const char*
	}
	buffer[arraySize] = '\0'; //null terminator restored
	
	str->text = buffer; //->text now points to address buffer points to, which is address charArray points to
	str->size = arraySize; 
}
String::~String()
{
	if (str != NULL)
	{
		//free memory from what ->text points to
		const char* buffer = str->text;
		delete [] buffer;
		
		//then free memory from string
		delete str;
	}
	else
		delete str;
}
String::Find (char delimiter, int start)
{
	int size,
	delimiterLocation;
	
	size = str->size;
	
	delimiterLocation = 0;
	for (int i = start; i < size; i++)
	{
		if (str->text[i] == delimiter)
		{
			delimiterLocation = ++i;
			break;
		}
	}
	if (delimiterLocation == 0)
		return -1;
	
	return delimiterLocation;
}
String::compare()
{
	if (str1->size == str2->size)
		return 0;
	else if (str1->size > str2->size)
		return 1;
	else if (str1->size < str2->size)
		return -1;
}
String::String substr (int start, int end)
{  
	int substrLength = (end - start) + 1; //length has to be greater than 0
	int count; //count will be size of new string
	
	String* substr = new String(text); 
	char* substrBuffer = new char[substrLength + 1]; //remember null termination
	
	if ((start > str->size || end > str->size || start > end) || start < 0)
	{
		cout << "\nCould not create substring";
		
		return NULL; //acts as flag for memory not assigned (don't want junk data or crash)
	}
	
	for (int i = start; i <= end; i++)
	{
		*(substrBuffer + i) = str->text[i];
		count++;
	}
	substrBuffer[count] = '\0';
	
	substr->text = substrBuffer;
	substr->size = substrLength;
	
	return substr;
}
void display()
{
	//have to check for NULL, else str->text leads to crash
	if (str == NULL)
		cout << "String not found";
	else
		cout << str->text;
}
int getSize()
{	
	return Size;
}
char* String::getString()
{
	return text;
}