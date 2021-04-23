#ifndef __Person_H__
#define __Person_H__
#include<bits/stdc++.h>
using namespace std;

//产品类Person
class Person
{
public:
	Person(){}
	void setHead(string iHead){
		this->head = iHead;
	}
	void setBody(string iBody){
		this->body = iBody;
	}
	void setLimb(string iLimb){
		this->limb = iLimb;
	}
	//打印信息
	void printfPersonAppearance(){
		printf("Head:%s\t\n", this->head.c_str());
		printf("Body:%s\t\n", this->body.c_str());
		printf("Limb:%s\t\n", this->limb.c_str());
	}
private:
	string head;
	string body;
	string limb;
};

#endif