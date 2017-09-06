#pragma once
#include<string>
using namespace std;
class Monster {
public:
	Monster(string);
	int fighting();
	int defense(int hurt, int probability);
	string fall();
	string returnSkill();
	string returnName();
	int returnLife();
	int getAttackSpeed();
private:
	string name;
	int life;
	int power;
	int defenses;
	string article;
	int probabilityFall;
	string skill;
	int damage[5];
	int speed;
};