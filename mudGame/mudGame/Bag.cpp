#include"Bag.h"
#include"Article.h"
void Bag::AddWeapon(string name) {
	bagContent.push_back(new Weapon(name)) ;
}
void Bag::DeleteWeapon(int id) {
	//ɾ��ָ��λ�õ�Ԫ��
	std::vector<Article*>::iterator it = bagContent.begin() + id - 1;
	bagContent.erase(it);
}
void Bag::ShowWeapon( ) {
	
	if (bagContent.size() == 0)
	{
		cout << "������û����Ʒ��" << endl;
		system("pause");
		system("cls");
		/*operating_user.showMainMenu(gamer);*/
	}
	else
	{
		int number = 0;
		int i = 0;
		vector<Article *>::iterator it;
		for (it = bagContent.begin(); it != bagContent.end(); it++)
		{
			//ÿ�����
			for (i = 0; i < 5; i++)
			{
				cout << ++number << "��" << *it << "\t";
			}
			cout << endl;
		}
		cout << endl;
		int choice = 3;
		int choice1 = 1;
		cout << "1.�鿴װ�����飨�����Ӧ��ţ�\t0.����" << endl;
		while (choice1)
		{
			cout << "���������ѡ�";

			try {
				if (cin >> choice1)
				{
					if (choice1 == 1)
					{
						cout << "�����Ӧ���(����0�򷵻����˵�)��" << endl;
						while (true)
						{
							if (cin >> choice)
							{
								if (choice == 0)
								{
									break;
								}
								else
								{
									if (choice > bagContent.size())
									{
										cout << "�����ڸ�װ�������������룺" << endl;
									}
									else
									{
										bagContent[choice - 1]->showInformation();
									}
								}
							}
							else
							{
								throw Error("���벻���Ϲ淶");
							}
						}
					}
					else
					{
						break;
					}
				}
				else
				{
					throw Error("���벻���Ϲ淶");
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
			/*	system("pause");
				system("cls");
				operating_user.showMainMenu(gamer);
				this->ShowWeapon(operating_user, gamer);*/
			}
		}
		system("cls");
		/*operating_user.showMainMenu(gamer);
		this->ShowWeapon(operating_user, gamer);*/
	}
}
Bag::Bag() {

}