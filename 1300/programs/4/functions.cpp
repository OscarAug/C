/*
File Name:functions.cpp
Athour: Peng Gao
Date: April 7
Purpose: Research of donut
*/

#include "donut.h"

void enterData(int size, int* numDonuts, int* typeDonuts, int* location)
{
	cout << "\nPlease enter in the following data about students surveyed." << endl;
	cout << "\nFor each student enter the number of donuts purchased last month, favorite place to purchase donuts, and favorite kind of donut." << endl;
	for (int i = 0; i < size; i++)
	{
		/*enter the number of donut that eaten and invalid input*/
		cout << "\nSTUDENT " << i + 1 << "-------------------\n";
		cout << "NUMBER EATEN: ";
		cin >> *(numDonuts + i);
		if (*(numDonuts + i) <= 0)
		{
			cout << "Invalid input: Please enter a positive number.";
			cout << "\nNUMBER EATEN: ";
			cin >> *(numDonuts + i);
		}

		/*enter location of donut and invalid input*/
		cout << "\nFAVORITE PLACE\n (1=Dunkin, 2=Ralphs, 3=Bingo, 4=Krispyeme, 5=Others): ";
		cin >> *(location + i);
		if (*(location + i) > 5)
		{
			cout << "Invalid input: Please enter 1,2,3,4, or 5.\n";
			cout << "\nFAVORITE PLACE\n (1=Dunkin, 2=Ralphs, 3=Bingo, 4=Krispyeme, 5=Others): ";
			cin >> *(location + i);
		}
		else if (*(location + i) < 1)
		{
			cout << "Invalid input: Please enter 1,2,3,4, or 5.\n";
			cout << "\nFAVORITE PLACE\n (1=Dunkin, 2=Ralphs, 3=Bingo, 4=Krispyeme, 5=Others): ";
			cin >> *(location + i);
		}

		/*enter type of donut and invalid input*/
		cout << "\nFAVORITE TYPE\n (1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powered, 6=filled): ";
		cin >> *(typeDonuts + i);
		if (*(typeDonuts + i)> 6)
		{
			cout << "Invalid input: Please enter 1,2,3,4, or 5.\n";
			cout << "\nFAVORITE TYPE\n (1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powered, 6=filled): ";
			cin >> *(typeDonuts + i);
		}
		else if (*(typeDonuts + i) < 1)
		{
			cout << "Invalid input: Please enter 1,2,3,4, or 5.\n";
			cout << "\nFAVORITE TYPE\n (1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powered, 6=filled): ";
			cin >> *(typeDonuts + i);
		}
	}
}