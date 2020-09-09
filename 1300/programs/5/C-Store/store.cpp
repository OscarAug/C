#include "store.h"

int main()
{

	cout << "WELCOME TO THINK GEEK!" << endl;

g1:	int choice = menu();
	switch (choice)
	{
	case 1:
		if (add() == false)	{ goto g1; break; }
	case 2:
		if (printPopular() == true) { goto g1; break; }
	case 3:
		if (printItems() == true){ goto g1; break; }
	case 4:
		if (saveInventory() == true)  break; 
	default:
		break;
	}
	
    return 0;
}
