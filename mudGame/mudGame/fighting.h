#include<string>
#include<iostream>
#include"monster.h"
#include"character.h"
#include"Skill.h"
#include<time.h>
using namespace std;
class fighting {
public:
	fighting(Monster*, Character*);
	bool judge();
	int firstRound();
	void fight();//ս�����������ﾭ�������뷨���ָ�
private:
	int enemyslife;
	int mylife;
	int force = 100;
	int round;
	int probability;
	bool blooding;
	Monster*monster;
	Character*character;
	Skill*skill;
};