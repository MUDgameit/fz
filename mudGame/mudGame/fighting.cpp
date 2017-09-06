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
		return 0;//ż����ʾ����غ�
	else
		return 1;//������ʾ����غ�
}

void fighting::fight()
{
	round = firstRound();
	do {
		if (!judge() || round % 2 != 0) {//����غ�
			srand(time(NULL));
			if (1 != rand() % ((int)character->getAvoidRate()))//�ж��Ƿ��ܳɹ�
				cout << "��ܳɹ�" << endl;
			else {
				cout << "��" << monster->returnName() << monster->returnSkill() << "����,���" <<
					monster->fighting() - 100 + character->getDefense() / 100 << "�˺�" << endl;//ֱ�Ӽ����˺���û�и���Ч��
				mylife -= monster->fighting();
			}

			round++;
		}
		else if (judge() || round % 2 == 0) {//����غ�
			cout << "��ѡ����" << endl;
			cout << "1 ��ɽ��" << "2 ʮ��ն" << "3 ��Ӱ����" << "4 ����ǧ����" << "5 ��Ӱ֮ì" << "6 ��������" << "7 ������" << "8 ��������ǹ" << "9 ����ն" << "10 ��ɨ�˻�" << endl;
			int select;
			cin >> select;
			int hurt1 = skill->UseSkill(select, force);
			int hurt2 = 0;
			srand(time(NULL));
			if (1 != rand() % ((int)character->getHitRate() * 10))//�ж��Ƿ�����
				cout << "û�����У�" << endl;
			else if (1 == rand() % ((int)character->getInterForce() * 10))//�жϱ�����
				hurt1 = hurt1 * 2;
			else if (1)//�����������ӳ�
				hurt2 = character->getStrength();
			else if (1)
				enemyslife -= hurt1 + hurt2;
			else if (1 == rand() % ((int)character->getNegative_state_rate()))//�ж��Ƿ��б���ѣ��״̬
				round++;
			if (blooding)
				enemyslife -= 10;//�ж��Ƿ��г�����Ѫ״̬
			round++;
		}
	} while ((mylife > 0) && enemyslife >0);
	if (mylife > 0) {
		if (monster->fall() != "")
			cout << "��ϲ������" << monster->fall() << endl;
	}
	else if (mylife < 0 || mylife == 0)
		cout << "��Ϸ����" << endl;
}
