#pragma once
#include"Weapon.h"
#include"equipment.h"
#include"Article.h"
#include<iostream>
#include<string>
#include"operating.h"
#include"character.h"
#include<vector>
#include<limits>
using namespace std;
class Bag {
public:
	Bag();
	void DeleteWeapon(int i);
	void AddWeapon(string name);
	void ShowWeapon();
	int getNum();
	void equip();
private:
	vector<Article*> bagContent;
	int DetialNumber;

};
