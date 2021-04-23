#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <iostream>
using namespace std;
#include "common.h"
#include "PlayerCenter.h"

// ����۲��� Observer
class Observer
{
public:
	virtual ~Observer(){}
	Observer(){}
	// �������󷽷�
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
	// ʵ��
	void send(Message message, PlayerCenter *PC){
		switch (message){
		case FindBomb:
			cout<<getID()<<" : "<<"����ը�������󼯺�"<<endl;
			break;
		case DefuseBomb:
			cout<<getID()<<" : "<<"�����ڲ��ը��"<<endl;
			break;
		default:
			printf("Safe\n");
		}
		PC -> notify(message, getID());
	}
	// ʵ�־��巽��
	void Find(){
		cout<<getID()<<" : "<<"Copy that"<<endl;
	}
	void Defuse(){
		cout<<getID()<<" : "<<"Woo-whoo! I like this! "<<endl;
	}
};
#endif