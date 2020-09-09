#include "primes.h"
int main ()
{
	void primes ();
	string primesfilename = "primes.txt";
	int lower, upper;
	ifstream infile;
	infile.open ("range.txt");
	infile>>lower;
	infile>>upper;
	infile.close ();
	cout<<"Below are the prime numbers between "<<lower<<" to "<<upper<<" have benn printed to primes.txt";
	cout<<endl<<endl;
	primes;
	
	return 0;
}
