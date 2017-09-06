#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "Bag.h"
#include "character.h"
#include "DemonMountain.h"
#include "DemonShrine.h"
#include "Error.h"
#include "equipment.h"
#include "fighting.h"
#include "GreenCityMountain.h"
#include "layer.h"
#include "monster.h"
#include "operating.h"
#include "Skill.h"
#include "SkyMountain.h"
#include "task.h"
#include "weapon.h"
#include "WuDang.h"

using namespace std;

int main()
{
	operating operating_user;
	//����ֵΪ�����˳���Ϸ
	int startMenuChoice = operating_user.showStartMenu();
	if (startMenuChoice)
	{
		//�µ���Ϸ
		if (startMenuChoice == 1)
		{	//��������
			Character amy(operating_user.getGamerName());
			//���ɱ���
			Bag myBag = Bag();
			//���ɼ���
			Skill mySkill = Skill();
			//��������
			task myTask = task();
			int mainMenuChoice = 0;
			while (mainMenuChoice = operating_user.showMainMenu(amy))
			{
				//�����ͼ
				if (mainMenuChoice == 1)
				{
					int choiceMap;
					while (choiceMap = operating_user.showMap(myTask))
					{

					}
				}
				//�鿴����
				if (mainMenuChoice == 2)
				{
					myBag.ShowWeapon();
				}
				//�鿴����
				if (mainMenuChoice == 3)
				{
					myTask.showTask();
				}
				mainMenuChoice=0;
			}
			return 0;
		}
		//��ȡ�浵
		else
		{

		}
	}
	else
	{
		return 0;
	}

	
	return 0;
}
