#pragma once
#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <string>
#include "equipment.h"
#include "weapon.h"

using namespace std;

class Character {
public:
	Character(string my_name);
	int getLevel();
	double getStrength();
	double getHitRate();
	double getAttackSpeed();
	double getDefense();
	double getAvoidRate();
	double getLife();
	double getExperience();
	double getForceRate();
	double getInterForce();
	double getNegative_state_rate();
	void setWeapon(Weapon * weapon);
	void setShoulder(Equipment * shoulder);
	void setChest(Equipment * chest);
	void setLeg(Equipment * leg);
	void getOffWeapon();
	void getOffShoulder();
	void getOffChest();
	void getOffLeg();
	string getWeaponName();
	string getShoulderName();
	string getChestName();
	string getLegName();
	string getName();
	// ����Ϊ1��������Ϊ2�������ٶ�Ϊ3��������Ϊ4���ر���Ϊ5������ֵΪ6������ֵΪ7��������Ϊ8
	void changeAttributes(int name, double point);
private:
	string name;
	int level;
	double strength;
	double hit_rate;
	double attack_speed;
	double defense;
	double avoid_rate;
	double life;
	double experience;
	double force_rate;
	double inter_force;
	double Negative_state_rate;
	Weapon * my_weapon;
	Equipment * my_shoulder;
	Equipment * my_chest;
	Equipment * my_leg;
};


#endif // CHARACTER_H_INCLUDED