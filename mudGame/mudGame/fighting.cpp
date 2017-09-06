#include"fighting.h"


fighting::fighting(Monster * monster, Character * character):monster(monster),character(character)
{
	skill = new Skill();
	mylife = character->getLife();
	enemyslife = monster->returnLife();
	blooding = false;
}

bool fighting::judge()
{
	if ((this->character)->getAttackSpeed() == 1)
		return true;
	else if ((this->character)->getAttackSpeed() >(monster)->getAttackSpeed())
		return true;
	else
		return false;
}

int fighting::firstRound()
{
	if (judge())
		return 0;//偶数表示人物回合
	else
		return 1;//奇数表示怪物回合
}

void fighting::fight()
{
	round = firstRound();
	do {
		if (!judge() || round % 2 != 0) {//怪物回合
			srand(time(NULL));
			if (1 != rand() % ((int)character->getAvoidRate()))//判断是否躲避成功
				cout << "躲避成功" << endl;
			else {
				cout << "被" << monster->returnName() << monster->returnSkill() << "攻击,造成" <<
					monster->fighting() - 100 + character->getDefense() / 100 << "伤害" << endl;//直接计算伤害，没有附加效果
				mylife -= monster->fighting();
			}

			round++;
		}
		else if (judge() || round % 2 == 0) {//人物回合
			cout << "请选择技能" << endl;
			cout << "1 崩山击" << "2 十字斩" << "3 幻影剑舞" << "4 雷鸣千军破" << "5 暗影之矛" << "6 霹雳旋踢" << "7 旋风腿" << "8 夺命雷霆枪" << "9 破灭斩" << "10 横扫八荒" << endl;
			int select;
			cin >> select;
			int hurt1 = skill->UseSkill(select, force);
			int hurt2 = 0;
			srand(time(NULL));
			if (1 != rand() % ((int)character->getHitRate() * 10))//判断是否命中
				cout << "没有命中！" << endl;
			else if (1 == rand() % ((int)character->getInterForce() * 10))//判断暴击率
				hurt1 = hurt1 * 2;
			else if (1)//力量给攻击加成
				hurt2 = character->getStrength();
			else if (1)
				enemyslife -= hurt1 + hurt2;
			else if (1 == rand() % ((int)character->getNegative_state_rate()))//判断是否有冰冻眩晕状态
				round++;
			if (blooding)
				enemyslife -= 10;//判断是否有持续出血状态
			round++;
		}
	} while ((mylife > 0) && enemyslife >0);
	if (mylife > 0) {
		if (monster->fall() != "")
			cout << "恭喜你获得了" << monster->fall() << endl;
	}
	else if (mylife < 0 || mylife == 0)
		cout << "游戏结束" << endl;
}
