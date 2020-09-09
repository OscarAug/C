/*
                 File Name:Lab11
				 Author: Robert A Coulson, Peng Gao
				 Date:04/11/17
				 Purpose:Structures, struct arrays, functions
*/
#include "lab11.h"
int main()
{
	int counter;
	int choice=0;
	Student studentArry[SIZE];
	
		cout<<"1: Display the unaltered records."<<endl;
		cout<<"2: Display the records without gpa."<<endl;
		cout<<"3: Display the records with fuzzed gpa."<<endl;
		cout<<"4: End the program."<<endl;

		cin>>choice;
		while((choice<1 || choice>4 || !cin))   //!cin checks to see if cin "threw" a bad flag
		{
			cin.clear(); //this clears all bad flags that were thrown from the last read
			cin.ignore(numeric_limits<streamsize>::max(),'\n');  //clear the keyboard buffer
			cout << "Invalid entry.  Enter a number greater than 0:  ";
			cin >> choice;
		}
	
	
	counter=READFILE(studentArry);
	
	DISPLAYRECORDS(studentArry,choice);
	
	
	
	
	
	
	return 0;
}



