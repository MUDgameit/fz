#include "operating.h"

operating::operating()
{
}

int operating::showStartMenu()
{
	int choice;
	cout << "1.开始游戏  2.读取存档  3.退出" << endl << "请输入你的选择：";
	try {
		if (cin >> choice)
		{
			switch (choice)
			{
			case 1:return 1;
			case 2:return 2;
			case 3:return 0;
			default:throw Error("输入不符合规范，请输入数字1-3");
			}
		}
		else
		{
			throw Error("输入不符合规范，请输入数字1-3");
		}
	}
	catch (Error &e) {
		// 读到非法字符后，输入流将处于出错状态，
		// 为了继续获取输入，首先要调用 clear 函数
		cin.clear();
		// numeric_limits<streamsize>::max() 返回输入缓冲的大小。
		// ignore 函数在此将把输入流中的数据清空。
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << e.what() << endl;
		system("pause");
		system("cls");
		this->showStartMenu();
	}

}

string operating::getGamerName()
{
	system("cls");
	string name;
	cout << "请输入人物名称：";
	try
	{
		cin >> name;
		//长度不超过五，不含空格
		if (name.length() < 6 || name.find(" ") != std::string::npos)
		{
			return name;
		}
		else
		{
			throw Error("输入角色名应中文长度不超过五，英文不超过十，且不含空格。");
		}
	}
	catch (Error &e)
	{
		// 读到非法字符后，输入流将处于出错状态，
		// 为了继续获取输入，首先要调用 clear 函数
		cin.clear();
		// numeric_limits<streamsize>::max() 返回输入缓冲的大小。
		// ignore 函数在此将把输入流中的数据清空。
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << e.what() << endl;
		system("pause");


		system("cls");
		this->getGamerName();
	}
}

int operating::showMainMenu(Character & gamer)
{
	cout << "角色名字：" << gamer.getName() << "\t" << "等级：" << gamer.getLevel() << endl;
	cout << "生命：" << gamer.getLife() << "\t" << "内力：100" << "\t" << "经验：" << gamer.getExperience() << endl;
	cout << "武器：" << gamer.getWeaponName() << "\t" << "头盔：" << gamer.getShoulderName() << "\t" <<
		"铠甲：" << gamer.getChestName() << "\t" << "护腿：" << gamer.getLegName() << endl;
	cout << "力量：" << gamer.getStrength() << "\t" << "防御：" << gamer.getDefense() << "\t" <<
		"命中率：" << gamer.getHitRate() << "\t" << "暴击率：" << gamer.getForceRate() << "\t" <<
		"闪避率：" << gamer.getAvoidRate() << "\t" << "攻速：" << gamer.getAttackSpeed() << endl;
	cout << "1.地图\t2.背包\t3.任务\t4.退出" << endl;
	cout << "请输入你的操作（1-4）" << endl;
	int choice;
	try {
		if (cin >> choice)
		{
			switch (choice)
			{
			case 1:return 1;
			case 2:return 2;
			case 3:return 3;
			case 4:return 0;
			default:throw Error("输入不符合规范，请输入数字1-4");
			}
		}
		else
		{
			throw Error("输入不符合规范，请输入数字1-4");
		}
	}
	catch (Error &e) {
		// 读到非法字符后，输入流将处于出错状态，
		// 为了继续获取输入，首先要调用 clear 函数
		cin.clear();
		// numeric_limits<streamsize>::max() 返回输入缓冲的大小。
		// ignore 函数在此将把输入流中的数据清空。
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << e.what() << endl;
		system("pause");
		system("cls");
		this->showMainMenu(gamer);
	}
	return 0;
}

int operating::showMap(task &myTask)
{
	int numberOfTask = myTask.getNowTask();
	if(numberOfTask < 5)
	{
		cout << "1.天山" << endl;
	}
	else
	{
		if (numberOfTask < 11)
		{
			cout << "1.天山\t2.武当" << endl;
		}
		else
		{
			if (numberOfTask < 15)
			{
				cout << "1.天山\t2.武当\t3.魔教睥睨山" << endl;
			}
			else
			{
				if (numberOfTask < 20)
				{
					cout << "1.天山\t2.武当\t3.魔教睥睨山\t4.青城山" << endl;
				}
				else
				{
					cout << "1.天山\t2.武当\t3.魔教睥睨山\t4.青城山\t5.魔教圣地" << endl;
				}
			}
		}
	}
	cout << "请输入你前往的地图（输入0返回）" << endl;
	int choice;
	try {
		if (cin >> choice)
		{
			switch (choice)
			{
			case 1:return 1;
			case 2:return 2;
			case 3:return 3;
			case 4:return 4;
			case 5:return 5;
			case 0:return 0;
			default:throw Error("输入不符合规范，请输入数字1-5");
			}
		}
		else
		{
			throw Error("输入不符合规范，请输入数字1-5");
		}
	}
	catch (Error &e) {
		// 读到非法字符后，输入流将处于出错状态，
		// 为了继续获取输入，首先要调用 clear 函数
		cin.clear();
		// numeric_limits<streamsize>::max() 返回输入缓冲的大小。
		// ignore 函数在此将把输入流中的数据清空。
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << e.what() << endl;
	}
	
	return 0;
}
