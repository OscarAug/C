/*
	File Name:store.cpp
	Athour: Peng Gao
	Date: April 24
	Purpose: Store inventory program
*/

#include "store.h"

int main()
{
	cout << "WELCOME TO THINK GEEK!";
	cout << endl <<endl;
	/*make the outline for program at each part*/
	while (true)
	{
		switch (menu())
		{
		case 1:
			while (add());
			continue;
		case 2:
			if (printPopular() == true) continue;
		case 3:
			if (printItems() == true) continue;
		case 4:
			if (saveInventory() == true) break;
		}
		break;
	}
	return 0;
}