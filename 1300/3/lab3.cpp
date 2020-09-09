/*
	File Name: lab3.cpp
	Authors: Peng Gao, Michael Burgess
	Date: February 2nd, 2017
	Description: LAB 3 Skyrim Enchanting Lab
*/

#include <iostream>
using namespace std;

int main()

{
	float skill;
	float potionStrength;
	float magnitude;
	float strength;
	float perklevel;
	float perkmodfier;
	float multiplier;
	float netmagnitude;
	
	cout<< "What is the skill of the Enchanter (15 to 100)? ";
	cin>>skill;
	
	if (potionStrength==1)
		potionStrength=10;
	
	else if (potionStrength==2) 
			potionStrength=15;
	
	else if (potionStrength==3)
			potionStrength=20;
	
	else (potionStrength==4);
		  potionStrength=25;
	cout<<"\nWhat type of potion was quaffed(1 to 4)? ";
	cin>>potionStrength;
	
	
	cout<<"\nThe skill multiplier is ";
	multiplier= 1+((((skill+potionStrength)/100)*((skill+potionStrength)/100-0.14))/3.4);
	cout<<multiplier;
	
	cout << "\nWhat is the base magnitude of the item to be enchanted (8 to 15)? ";
	cin >> magnitude;
	
	
	if (strength==.083)
		strength=.083;
		
	else if (strength==.167)
		strength=.167;
		
	else if (strength==.333)
		strength=.333;
		
	else if (strength=.667)
		strength=.667;
				
	else (strength==1);
		strength=1;
	cout << "\nWhat is the strength of the soul gem to be used(.083, .167, .333, .667, or 1)? ";
	cin >> strength;
	
	
	if (perklevel==0)
		perklevel=1;
		
	else if (perklevel==1)
		perklevel=1.2;
		
	else if (perklevel==2)
		perklevel=1.4;
		
	else if (perklevel==3)
		perklevel=1.6;
		
	else if (perklevel==4)
		perklevel=1.8;
		
	else (perklevel=5);
		perklevel=2;
	
	cout << "\nWhat is the enchanting perk level (0 to 5)? ";
	cin >> perklevel;
	cout << "\nIs there a specific perk modifier (0 to 1)? ";
	
	cin >> perkmodfier;
	cout<< "\nThe net magnitude of this enchantment is ";
	netmagnitude=magnitude*strength*perklevel*perkmodfier;
	cout<< netmagnitude;
	
	return 0;
}