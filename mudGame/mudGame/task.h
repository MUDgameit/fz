#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include"operating.h"
#include"character.h"
#include"Error.h"
#include<stdlib.h>
using namespace std;
class task {
public:
	task();
	void showTask();
	bool ifTaskFinish(int);
	void finishTask(int);
	void printFinishedTask();
	void printNowTask();
	int getNowTask();
private:
	int nowTask;
	string taskContent[25];
	//0��ʾδ��ɣ�1��2��ʾѡ��Ҳ�����������
	int ifFinishTask[25];
};