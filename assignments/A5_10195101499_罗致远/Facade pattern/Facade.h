#ifndef __FACADE_H__
#define __FACADE_H__

#include<bits/stdc++.h>
using namespace std;


//子系统1
class Load
{
public:
	Load(){}
	void run(){
		printf("正在初始化游戏世界\n");
	}
};

//子系统2
class Resource
{
public:
	Resource(){}
	void run(){
		printf("正在加载游戏资源\n");
	}
};

//子系统3
class Server
{
public:
	Server(){}
	void run(){
		printf("正在连接至服务器\n");
	}
};


//外观类
class Facade
{
public:
	Facade(){
		load = new Load();
		resource = new Resource();
		server = new Server();
	}
	void start(){
		printf("开始匹配\n\n");
		load->run();
		resource->run();
		server->run();
		printf("正在进入游戏\n");
	}
private:
	Load *load;
	Resource *resource;
	Server *server;
};

#endif //__FACADE_PATTERN_H__