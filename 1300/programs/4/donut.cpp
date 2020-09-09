/*
	File Name:donut.cpp
	Athour: Peng Gao
	Date: April 7
	Purpose: Research of donut
*/

#include "donut.h"
#include "arrayHeader.h"

int main()
{
	cout << "How many students did you survey? ";
	int size;
	cin >> size;
	int* numDonuts;
	numDonuts = makeArray_numD(size);
	int* typeDonuts;
	typeDonuts = makeArray_tpD(size);
	int* location;
	location = makeArray_location(size);
	enterData(size, numDonuts, typeDonuts, location);
	int largest_NODE = getLagest(numDonuts, size);
	int smallest_NODE = getSmallest(numDonuts, size);
	int total = getTotal(numDonuts, size);
	double t = total;
	double average = t / size;
	string* most_popular = getMode(location, typeDonuts, size);
	/*summary of data */
	cout <<setw(20)<< "\n\nLARGEST NUMBER OF DONUTS EATEN: " <<setw(20)<< largest_NODE << endl;
	cout <<setw(20)<< "SMALLEST NUMBER OF DONUTS EATEN: " <<setw(19)<< smallest_NODE << endl;
	cout <<setw(20)<< "TOTAL NUMBER OF DONUTS EATEN: " <<setw(22)<< total << endl;
	cout <<setw(20)<< "AVERAGE NUMBER OF DONUTS EATEN: " <<setw(20)<< average << endl;
	cout <<setw(20)<< "MOST POPULAR DONUT LOCATION: " <<setw(30)<< *most_popular << endl;
	cout <<setw(20)<< "MOST POPULAR DONUT TYPE: " <<setw(34)<< *(most_popular + 1) << endl;
	cin.get();
	cin.get();
	delete[] numDonuts;
	delete[] typeDonuts;
	delete[] location;
	delete[] most_popular;
	return 0;
}