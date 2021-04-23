#include "Observer.h"
#include "PlayerCenter.h"

int main()
{
	// 创建一个CT阵营
	Player_Server* Server1 = new Player_Server();

	// 创建5个玩家，并加入CT
	Player* p1= new Player("jeddie");
	Player* p2= new Player("simple");
	Player* p3 = new Player("niko");
	Player* p4 = new Player("kennys");
    Player* p5 = new Player("electric");
    Player* p6 = new Player("dd");
	Server1 ->add(p1);
    Server1 ->add(p2);
    Server1 ->add(p3);
    Server1 ->add(p4);
    Server1 ->add(p5);

	printf("\n\n");

	// jeddie杀死敌人后发现炸弹
	p1->send(FindBomb, Server1);

	printf("\n\n");

	// simple拆除炸弹
	p2->send(DefuseBomb, Server1);

	printf("\n\n");
	system("pause");

	delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;

	return 0;
}