#ifndef __Director_H__
#define __Director_H__
#include "Builder.h"
#include "Person.h"
#include<bits/stdc++.h>
using namespace std;

//指挥者Director
class Director
{
public:
	Director(){}
	//具体实现方法
	void setBuilder(AbstractBuilder *iBuilder){
		this->builder = iBuilder;
	}
    //封装组装流程，返回建造结果
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