#pragma once
#include"layer.h"
#include"task.h"
class SkyMountain : public layer {
public:
	SkyMountain(string,task *);
	~SkyMountain();
	void judgeTask();
	//�ƶ�
	void move(int);
private:
	//С��ͼ
	string smalllayer[4];
	string smalllayerintroduction[4];
	//����
	string monstername[4];
	task * point;
	bool ifFinishTask;
};