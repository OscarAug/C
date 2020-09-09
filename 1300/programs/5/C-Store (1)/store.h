/*
	File Name:store.h
	Athour: Peng Gao
	Date: April 24
	Purpose: Store inventory program
*/

#ifndef STORE_H
#define STORE_H

//#includes and namespace

#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

//structure parts

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

//function prototypes

int menu();
bool add();
bool printPopular();
bool printItems();
bool saveInventory();

#endif