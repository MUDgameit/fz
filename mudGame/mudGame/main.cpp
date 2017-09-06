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
	//返回值为零则退出游戏
	int startMenuChoice = operating_user.showStartMenu();
	if (startMenuChoice)
	{
		//新的游戏
		if (startMenuChoice == 1)
		{	//生成人物
			Character amy(operating_user.getGamerName());
			//生成背包
			Bag myBag = Bag();
			//生成技能
			Skill mySkill = Skill();
			//生成任务
			task myTask = task();
			int mainMenuChoice = 0;
			while (mainMenuChoice = operating_user.showMainMenu(amy))
			{
				//进入地图
				if (mainMenuChoice == 1)
				{
					int choiceMap;
					while (choiceMap = operating_user.showMap(myTask))
					{

					}
				}
				//查看背包
				if (mainMenuChoice == 2)
				{
					myBag.ShowWeapon();
				}
				//查看任务
				if (mainMenuChoice == 3)
				{
					myTask.showTask();
				}
				mainMenuChoice=0;
			}
			return 0;
		}
		//读取存档
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
