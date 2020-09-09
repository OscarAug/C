/*
	Author:  David Brown, modified by April Crockett
	Date:  4/20/2017
	My own string class
*/

#include "String.h"

int main ()
{
	int compareResult;
	
	String str1("The quick brown fox jumped over the lazy dog");
	String str2("How now brown cow");
	
	String* str3 = str1.substr(5, 15);
	
	cout << "\nSTRING 1:  ";
	str1.display();
	cout << "\nSTRING 2:  ";
	str2.display();
	cout << "\nSTRING 3:  ";
	str3->display();
	cout << endl << endl;

	cout << "Size of String 1 : " << str1.getSize() << endl;
	cout << "Looking for z in String 1 found at position : " << str1.find('z', 0) << endl;
	cout << "Size of String 2 : " << str2.getSize() << endl;
	cout << "Looking for z in String 2 found at position : " << str2.find('z', 0) << endl;

	compareResult = str1.compare (str3);
	cout << "Compared String 1 and String 3.  Results are : " << compareResult << endl;

	return 0;
}