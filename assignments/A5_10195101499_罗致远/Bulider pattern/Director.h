#ifndef __Director_H__
#define __Director_H__
#include "Builder.h"
#include "Person.h"
#include<bits/stdc++.h>
using namespace std;

//ָ����Director
class Director
{
public:
	Director(){}
	//����ʵ�ַ���
	void setBuilder(AbstractBuilder *iBuilder){
		this->builder = iBuilder;
	}
    //��װ��װ���̣����ؽ�����
	Person *construct(){
		builder->buildHead();
		builder->buildBody();
		builder->buildLimb();
		return builder->getPerson();
	}
private:
	AbstractBuilder *builder;
};

#endif