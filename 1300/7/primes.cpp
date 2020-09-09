#include "primes.h"

void primes ()
{
	int primeList [100]；
	int listCounter = 0;
	int p;
	int y;
	string a;
	for (p = 2; p <= upper; p++)
	{
		cout<<p;
		for (y = 2; y <= upper; y++)
		{
			cout<<y;
			if (p % y == 0)
			{
				isPrimeFlag=false;
				break;
			}
			else
			{
				isPrimeFlag=true;
				primeList[listCounter] = p;
				listCounter++;
			}
		}
	}
}