#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <iostream>
using namespace std;
#include "common.h"
#include "PlayerCenter.h"

// 抽象观察者 Observer
class Observer
{
public:
	virtual ~Observer(){}
	Observer(){}
	// 声明抽象方法
	virtual void send(Message message, PlayerCenter *PC) = 0;
	string getID(){
		return id;
	}
	void setID(string myID){
		this->id = myID;
	}
private:
	string id;
};


class Player :public Observer
{
public:
	Player(){
		setID("none");
	}
	Player(string myID){
		setID(myID);
	}
	// 实现
	void send(Message message, PlayerCenter *PC){
		switch (message){
		case FindBomb:
			cout<<getID()<<" : "<<"发现炸弹，请求集合"<<endl;
			break;
		case DefuseBomb:
			cout<<getID()<<" : "<<"我正在拆除炸弹"<<endl;
			break;
		default:
			printf("Safe\n");
		}
		PC -> notify(message, getID());
	}
	// 实现具体方法
	void Find(){
		cout<<getID()<<" : "<<"Copy that"<<endl;
	}
	void Defuse(){
		cout<<getID()<<" : "<<"Woo-whoo! I like this! "<<endl;
	}
};
#endif