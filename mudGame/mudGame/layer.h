#pragma once
#include<string>
using namespace std;
class layer {
public:
	layer(string);
	void showlayer();
	string getlayername();
	void changelayername(string name);
	string getlayerintroduction();
	void changelayerintroduction(string name);
	void changetreasure(string);
	//�����ñ���
	string gettreasure();
	void movestep(int);
private:
	int num;
	string layername;
	string introduction;
	string treasure;
};
