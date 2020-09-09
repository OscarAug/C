#include <string>
#include <iostream>
#include <fstream>

using namespace std;

struct Money
{
	float GoodsPrice;
	float SalePrice;
	float Profit;
};

struct Date
{
	int Month;
	int Day;
	int Year;
};

struct Item
{
	string Name;
	string Description;
	Money Cost;
	int Popularity[12];
	Date Date;
};

int menu();
bool add();
bool printPopular();
bool printItems();
bool saveInventory();