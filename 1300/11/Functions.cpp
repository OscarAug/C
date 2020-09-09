/*
                 File Name:Lab11
				 Author: Robert A Coulson, Peng Gao
				 Date:04/11/17
				 Purpose:Structures, struct arrays, functions
*/
#include "lab11.h"

int READFILE(Student s[])
{
	//Student s[SIZE];
	ifstream infile;
	infile.open("data.txt");
	string str;
	int i;
	while (!infile.eof())
	{	
		for (i=0; i<SIZE; i++)
		{
			infile>>s[i].ID;
			infile>>s[i].name;	
			infile>>s[i].gpa;	
			
		}
	}
	infile.close();
	
	return i;
			
}

void DISPLAYRECORDS(Student s[], int choice)
{
	 cout<<fixed<<setprecision(2);
	 srand(time(0));
	 int randomInt = rand();
	
	if (choice==1)
	{
		cout<<"Unaltered records"<<endl;
		for(int i=0;i<SIZE;i++)
		{
		cout<<setw(15)<<s[i].ID;
		cout<<setw(15)<<s[i].name;
		cout<<setw(15)<<s[i].gpa;
		cout<<endl;
		}
	}
	
	else if (choice==2)
	{
		cout<<"Maintain confidentiality at the expense of availability (no GPA)"<<endl;
		for(int i=0;i<SIZE;i++)
		{
		cout<<setw(15)<<s[i].ID;
		cout<<setw(15)<<s[i].name;
		cout<<setw(15)<<s[i].gpa;
		cout<<endl;
		}
	}
	
	
	else if(choice==3)
	{
		cout<<"Maintain confidentiality and avaliblility at the expense of integrity(fuzzed GPA)"<<endl;
	
		for (int i=0;i<SIZE;i++)
			{
				double noise = (randomInt%100)/100.0;
				if(randomInt%2==0)
				{
					cout<<setw(15)<<s[i].ID;
					cout<<setw(15)<<s[i].name;
					cout<<setw(15)<<((s[i].gpa)+noise);
					cout<<endl;
				}
				
				else if (randomInt%2==1)
				{
					cout<<setw(15)<<s[i].ID;
					cout<<setw(15)<<s[i].name;
					cout<<setw(15)<<((s[i].gpa)-noise);
					cout<<endl;
				}
				
			}
		}
}	
	
