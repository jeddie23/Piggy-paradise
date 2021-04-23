#include "Builder.h"
#include "Person.h"
#include "Director.h"
#include <bits/stdc++.h>

 
int main()
{
	//抽象建造者
	AbstractBuilder *builder;
	//指挥者
	Director *director = new Director();
	//产品：Person
	Person *person;
 
	//指定具体建造者1
	builder = new ConcreteBuilderCT();
	director->setBuilder(builder);
	person = director->construct();
	person->printfPersonAppearance();
 
	//指定具体建造者2
	builder = new ConcreteBuilderT();
	director->setBuilder(builder);
	person = director->construct();
	person->printfPersonAppearance();
 
	system("pause");
	return 0;
}