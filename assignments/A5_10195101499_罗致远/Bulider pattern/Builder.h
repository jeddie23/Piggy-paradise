#ifndef __Builder_H__
#define __Builder_H__
#include "Person.h"
#include<bits/stdc++.h>
//抽象建造者
class AbstractBuilder
{
public:
	AbstractBuilder(){
		person = new Person();
	}
	//抽象方法：
	virtual void buildHead() = 0;
	virtual void buildBody() = 0;
	virtual void buildLimb() = 0;
	virtual Person *getPerson() = 0;
 
	Person *person;
};


//具体建造者ConcreteBuilderCT(反恐精英)
class ConcreteBuilderCT :public AbstractBuilder
{
public:
	ConcreteBuilderCT(){
		printf("ConcreteBuilderCT\n");
	}
	//具体实现方法
	void buildHead(){
		this->person->setHead("Head_CT(反恐精英)");
	}
	void buildBody(){
		this->person->setBody("Body_CT(反恐精英)");
	}
	void buildLimb(){
		this->person->setLimb("Limb_CT(反恐精英)");
	}
	Person *getPerson(){
		return this->person;
	}
};
 
//具体建造者ConcreteBuilderT(恐怖分子)
class ConcreteBuilderT :public AbstractBuilder
{
public:
	ConcreteBuilderT(){
		printf("ConcreteBuilderB\n");
	}
	//具体实现方法
	void buildHead(){
		this->person->setHead("Head_T(恐怖分子)");
	}
	void buildBody(){
		this->person->setBody("Body_T(恐怖分子)");
	}
	void buildLimb(){
		this->person->setLimb("Limb_T(恐怖分子)");
	}
	Person *getPerson(){
		return this->person;
	}
};
#endif