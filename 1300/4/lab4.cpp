/*
File Name: lab4.cpp
	Author: Eduaro Minetto
	        Peng Gao
	Date: 02/14/2017
	purpose: Compute the total price of each sale.

*/


#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()

{
    string name;
	float number_of_shirts;
	float total_cost;
	float discout_cost;
	
	
	cout << "\n\nWelcome to 80sTees.com!!\n\n";
	cout << "All shirts are $12.\n";
	cout << "We offer quantity discouts as follows:\n\n";
	
    cout << left << setw(5) << " " << setw(20) << "Nunber of Shirts" << setw(5) << " " << setw(20) << "Discount" <<endl;
	cout << left << setw(5) << " " << setw(20) << "5-10" << setw(5) << " " << setw(20) << "10%" <<endl;
	cout << left << setw(5) << " " << setw(20) << "11-20" << setw(5) << " " << setw(20) << "15%" <<endl;
	cout << left << setw(5) << " " << setw(20) << "21-30" << setw(5) << " " << setw(20) << "20%" <<endl;
	cout << left << setw(5) << " " << setw(20) << "31 or more" << setw(5) << " " << setw(20) << "25%" <<endl;
	cout << endl;
	
	cout << "What is your full name (first & last)?\n";
	cout << "NAME:";
	getline(cin, name);
	cout<<endl <<endl;
	
	cout << name << ", how many shirts would you like?\n";
	cout << "NUMBER OF SHIRTS:";
	cin >> number_of_shirts;
	
	while(number_of_shirts < 1)
	{
		cout << "Invalid input: Please run the program again and enter a non-negative integer.\n";
        cout << name << ", how many shirts would you like?\n";
	    cout << "NUMBER OF SHIRTS:";
	    cin >> number_of_shirts;		
	}
	
	cout << setfill('-') << setw(50) << "-";
	cout << setfill(' ');
	cout <<endl;
	
	cout << "BILL FOR: " << name <<endl;
	
	if ( number_of_shirts > 0 & number_of_shirts < 5 )
	{	
        discout_cost = 0;
		total_cost = number_of_shirts* 12;
	}
	 
	 else if ( number_of_shirts > 4 & number_of_shirts < 11 )
	 {		   
            total_cost = number_of_shirts * 12 * 0.9;
		    discout_cost = 12 * 0.9 ;

	 }
	 
	  else if ( number_of_shirts > 10 & number_of_shirts < 21 )
	  { 
		    total_cost = number_of_shirts* 12 * 0.85;
			discout_cost = 12 * 0.85;
	  }    
	  
	  
	  
	   else if ( number_of_shirts > 20 & number_of_shirts < 31 )
	   {
		    total_cost = number_of_shirts * 12 * 0.8;
		    discout_cost = 12 * 0.8;
		    
	   }
	    else if( number_of_shirts > 30 )
		{   
		    total_cost = number_of_shirts * 12 * 0.75;
			discout_cost = 12 * 0.75;   
		}
		
	cout << setprecision(2)<<fixed;
	
	cout <<"DISCPUTED COST:  $" << discout_cost << "(per shirt)";
	cout <<endl;
	
	cout << "TOTAL COST:  $" << total_cost;
	
	
	
	
	
	
	
	return 0;
}