#pragma once
#include"layer.h"
#include"task.h"
class SkyMountain : public layer {
public:
	SkyMountain(string,task *);
	~SkyMountain();
	void judgeTask();
	//移动
	void move(int);
private:
	//小地图
	string smalllayer[4];
	string smalllayerintroduction[4];
	//怪物
	string monstername[4];
	task * point;
	bool ifFinishTask;
};