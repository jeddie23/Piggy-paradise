#include "Observer.h"
#include "PlayerCenter.h"

int main()
{
	// ����һ��CT��Ӫ
	Player_Server* Server1 = new Player_Server();

	// ����5����ң�������CT
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

	// jeddieɱ�����˺���ը��
	p1->send(FindBomb, Server1);

	printf("\n\n");

	// simple���ը��
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