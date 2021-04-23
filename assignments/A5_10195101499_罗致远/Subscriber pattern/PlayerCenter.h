#ifndef __PLAYECENTER_H__
#define __PLAYECENTER_H__

#include "common.h"
#include <bits/stdc++.h>
using namespace std;


class Observer;
class Player;

// 抽象目标：
class PlayerCenter
{
public:
	PlayerCenter();
	virtual ~PlayerCenter(){}
	// 声明通知方法
	virtual void notify(Message message,string id) = 0;
	// 加入玩家
	void add(Observer* player);
	// 移除玩家
	void kick_out(Observer* player);
protected:
	// 反恐精英玩家列表
	vector<Observer*>CT_List;
};

// 具体目标
class Player_Server :public PlayerCenter
{
public:
	Player_Server();
	// 实现通知方法
	void notify(Message message,string id);
};

#endif //__PLAYECENTER_H__