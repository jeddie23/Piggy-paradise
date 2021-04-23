#ifndef __FACADE_H__
#define __FACADE_H__

#include<bits/stdc++.h>
using namespace std;


//��ϵͳ1
class Load
{
public:
	Load(){}
	void run(){
		printf("���ڳ�ʼ����Ϸ����\n");
	}
};

//��ϵͳ2
class Resource
{
public:
	Resource(){}
	void run(){
		printf("���ڼ�����Ϸ��Դ\n");
	}
};

//��ϵͳ3
class Server
{
public:
	Server(){}
	void run(){
		printf("����������������\n");
	}
};


//�����
class Facade
{
public:
	Facade(){
		load = new Load();
		resource = new Resource();
		server = new Server();
	}
	void start(){
		printf("��ʼƥ��\n\n");
		load->run();
		resource->run();
		server->run();
		printf("���ڽ�����Ϸ\n");
	}
private:
	Load *load;
	Resource *resource;
	Server *server;
};

#endif //__FACADE_PATTERN_H__