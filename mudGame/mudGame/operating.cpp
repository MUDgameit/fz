#include "operating.h"

operating::operating()
{
}

int operating::showStartMenu()
{
	int choice;
	cout << "1.��ʼ��Ϸ  2.��ȡ�浵  3.�˳�" << endl << "���������ѡ��";
	try {
		if (cin >> choice)
		{
			switch (choice)
			{
			case 1:return 1;
			case 2:return 2;
			case 3:return 0;
			default:throw Error("���벻���Ϲ淶������������1-3");
			}
		}
		else
		{
			throw Error("���벻���Ϲ淶������������1-3");
		}
	}
	catch (Error &e) {
		// �����Ƿ��ַ��������������ڳ���״̬��
		// Ϊ�˼�����ȡ���룬����Ҫ���� clear ����
		cin.clear();
		// numeric_limits<streamsize>::max() �������뻺��Ĵ�С��
		// ignore �����ڴ˽����������е�������ա�
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
	cout << "�������������ƣ�";
	try
	{
		cin >> name;
		//���Ȳ������壬�����ո�
		if (name.length() < 6 || name.find(" ") != std::string::npos)
		{
			return name;
		}
		else
		{
			throw Error("�����ɫ��Ӧ���ĳ��Ȳ������壬Ӣ�Ĳ�����ʮ���Ҳ����ո�");
		}
	}
	catch (Error &e)
	{
		// �����Ƿ��ַ��������������ڳ���״̬��
		// Ϊ�˼�����ȡ���룬����Ҫ���� clear ����
		cin.clear();
		// numeric_limits<streamsize>::max() �������뻺��Ĵ�С��
		// ignore �����ڴ˽����������е�������ա�
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << e.what() << endl;
		system("pause");


		system("cls");
		this->getGamerName();
	}
}

int operating::showMainMenu(Character & gamer)
{
	cout << "��ɫ���֣�" << gamer.getName() << "\t" << "�ȼ���" << gamer.getLevel() << endl;
	cout << "������" << gamer.getLife() << "\t" << "������100" << "\t" << "���飺" << gamer.getExperience() << endl;
	cout << "������" << gamer.getWeaponName() << "\t" << "ͷ����" << gamer.getShoulderName() << "\t" <<
		"���ף�" << gamer.getChestName() << "\t" << "���ȣ�" << gamer.getLegName() << endl;
	cout << "������" << gamer.getStrength() << "\t" << "������" << gamer.getDefense() << "\t" <<
		"�����ʣ�" << gamer.getHitRate() << "\t" << "�����ʣ�" << gamer.getForceRate() << "\t" <<
		"�����ʣ�" << gamer.getAvoidRate() << "\t" << "���٣�" << gamer.getAttackSpeed() << endl;
	cout << "1.��ͼ\t2.����\t3.����\t4.�˳�" << endl;
	cout << "��������Ĳ�����1-4��" << endl;
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
			default:throw Error("���벻���Ϲ淶������������1-4");
			}
		}
		else
		{
			throw Error("���벻���Ϲ淶������������1-4");
		}
	}
	catch (Error &e) {
		// �����Ƿ��ַ��������������ڳ���״̬��
		// Ϊ�˼�����ȡ���룬����Ҫ���� clear ����
		cin.clear();
		// numeric_limits<streamsize>::max() �������뻺��Ĵ�С��
		// ignore �����ڴ˽����������е�������ա�
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
		cout << "1.��ɽ" << endl;
	}
	else
	{
		if (numberOfTask < 11)
		{
			cout << "1.��ɽ\t2.�䵱" << endl;
		}
		else
		{
			if (numberOfTask < 15)
			{
				cout << "1.��ɽ\t2.�䵱\t3.ħ�����ɽ" << endl;
			}
			else
			{
				if (numberOfTask < 20)
				{
					cout << "1.��ɽ\t2.�䵱\t3.ħ�����ɽ\t4.���ɽ" << endl;
				}
				else
				{
					cout << "1.��ɽ\t2.�䵱\t3.ħ�����ɽ\t4.���ɽ\t5.ħ��ʥ��" << endl;
				}
			}
		}
	}
	cout << "��������ǰ���ĵ�ͼ������0���أ�" << endl;
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
			default:throw Error("���벻���Ϲ淶������������1-5");
			}
		}
		else
		{
			throw Error("���벻���Ϲ淶������������1-5");
		}
	}
	catch (Error &e) {
		// �����Ƿ��ַ��������������ڳ���״̬��
		// Ϊ�˼�����ȡ���룬����Ҫ���� clear ����
		cin.clear();
		// numeric_limits<streamsize>::max() �������뻺��Ĵ�С��
		// ignore �����ڴ˽����������е�������ա�
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << e.what() << endl;
	}
	
	return 0;
}
