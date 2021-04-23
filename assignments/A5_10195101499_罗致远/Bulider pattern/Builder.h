#ifndef __Builder_H__
#define __Builder_H__
#include "Person.h"
#include<bits/stdc++.h>
//��������
class AbstractBuilder
{
public:
	AbstractBuilder(){
		person = new Person();
	}
	//���󷽷���
	virtual void buildHead() = 0;
	virtual void buildBody() = 0;
	virtual void buildLimb() = 0;
	virtual Person *getPerson() = 0;
 
	Person *person;
};


//���彨����ConcreteBuilderCT(���־�Ӣ)
class ConcreteBuilderCT :public AbstractBuilder
{
public:
	ConcreteBuilderCT(){
		printf("ConcreteBuilderCT\n");
	}
	//����ʵ�ַ���
	void buildHead(){
		this->person->setHead("Head_CT(���־�Ӣ)");
	}
	void buildBody(){
		this->person->setBody("Body_CT(���־�Ӣ)");
	}
	void buildLimb(){
		this->person->setLimb("Limb_CT(���־�Ӣ)");
	}
	Person *getPerson(){
		return this->person;
	}
};
 
//���彨����ConcreteBuilderT(�ֲ�����)
class ConcreteBuilderT :public AbstractBuilder
{
public:
	ConcreteBuilderT(){
		printf("ConcreteBuilderB\n");
	}
	//����ʵ�ַ���
	void buildHead(){
		this->person->setHead("Head_T(�ֲ�����)");
	}
	void buildBody(){
		this->person->setBody("Body_T(�ֲ�����)");
	}
	void buildLimb(){
		this->person->setLimb("Limb_T(�ֲ�����)");
	}
	Person *getPerson(){
		return this->person;
	}
};
#endif