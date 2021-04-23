#include "Builder.h"
#include "Person.h"
#include "Director.h"
#include <bits/stdc++.h>

 
int main()
{
	//��������
	AbstractBuilder *builder;
	//ָ����
	Director *director = new Director();
	//��Ʒ��Person
	Person *person;
 
	//ָ�����彨����1
	builder = new ConcreteBuilderCT();
	director->setBuilder(builder);
	person = director->construct();
	person->printfPersonAppearance();
 
	//ָ�����彨����2
	builder = new ConcreteBuilderT();
	director->setBuilder(builder);
	person = director->construct();
	person->printfPersonAppearance();
 
	system("pause");
	return 0;
}