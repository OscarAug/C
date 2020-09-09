 #ifndef _STRING_H
 #define _STRING_H 
 
 #include <iostream>
 #include <cstring>
 using namespace std;
 
 class String
 {
	 private:
		char* text;
		int size;
	 public:
		String* (char*);
		~String();
		int find (char, int);
		int compare ();
		String* substr (int start, int end);
		void display();
		int getSize();
 };
 
 #endif