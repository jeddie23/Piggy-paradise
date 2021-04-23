#include "PlayerCenter.h"
#include "Observer.h"
#include<bits/stdc++.h>
using namespace std;


PlayerCenter::PlayerCenter(){
	printf("���뷴�־�Ӣ��Ӫ\n");
}

// �������
void PlayerCenter::add(Observer* player){
	if (CT_List.size() == 5){
		printf("�������\n");
		return;
	}
	printf("��� %s ����\n", player->getID().c_str());
	CT_List.push_back(player);
	if (CT_List.size() == 5){
		printf("����ʱ�����\n");
	}
}
// �Ƴ����
void PlayerCenter::kick_out(Observer* player){
	printf("��� %s �˳�\n", player->getID().c_str());
}




Player_Server::Player_Server(){

}

// ʵ��֪ͨ����
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
