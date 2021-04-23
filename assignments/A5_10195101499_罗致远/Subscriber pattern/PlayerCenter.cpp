#include "PlayerCenter.h"
#include "Observer.h"
#include<bits/stdc++.h>
using namespace std;


PlayerCenter::PlayerCenter(){
	printf("加入反恐精英阵营\n");
}

// 加入玩家
void PlayerCenter::add(Observer* player){
	if (CT_List.size() == 5){
		printf("玩家已满\n");
		return;
	}
	printf("玩家 %s 加入\n", player->getID().c_str());
	CT_List.push_back(player);
	if (CT_List.size() == 5){
		printf("热身时间结束\n");
	}
}
// 移除玩家
void PlayerCenter::kick_out(Observer* player){
	printf("玩家 %s 退出\n", player->getID().c_str());
}




Player_Server::Player_Server(){

}

// 实现通知方法
void Player_Server::notify(Message message,string name){
	switch (message){
	case FindBomb:
		for(int i=0;i<CT_List.size();i++){
			if (CT_List[i]->getID() != name){
				((Player*)CT_List[i])->Find();
			}
		}
		break;
	case DefuseBomb:
		for(int i=0;i<CT_List.size();i++){
			if (CT_List[i]->getID() != name){
				((Player*)CT_List[i])->Defuse();
			}
		}
		break;
	default:
		printf("Safe\n");
	}
}
