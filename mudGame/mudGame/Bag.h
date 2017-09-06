#pragma once
#include"Weapon.h"
#include"equipment.h"
#include"Article.h"
#include<iostream>
#include<string>
#include"operating.h"
#include"character.h"
#include<vector>
using namespace std;
class Bag {
private:
	vector<Article*> bagContent;
public:
	void DeleteWeapon(int i);
	void AddWeapon(string name);
	void ShowWeapon();
	Bag();
};