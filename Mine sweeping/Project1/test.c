#include "game.h"



//ѡ�Ų˵�
void menu()
{
	printf("-----------------------------\n");
	printf("------------ɨ��-------------\n");
	printf("------��ʼ��1----�Ƴ���0------\n");
}
//������Ϸ
void  game() {
	srand((unsigned int)time(NULL));

	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	
	//��ͼ��ʼ��
	InitBoard(mine, ROW, COL, '0');
	InitBoard(show, ROW, COL, '#');
	//������
	SetMine(mine,ROW,COL, EASY_COUNT);
	//��ӡ��ͼ
	print(show, ROW, COL);
	printf("\n");
	int enable = 1;//��ʽ������Ϸѭ��
	while (enable)
	{
		print(mine, ROW, COL);
		//�������
		enable = FindMine(show, mine, ROW, COL);
	}
	
}

int main() {
	int Options = 1;

	do 
	{
		menu();
		printf("��ѡ��> ");
		scanf("%d", &Options);
		switch (Options)
		{
		case 1:
			//������Ϸ
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ�Ŵ���\n");
			break;
		}
	} while (Options);
		
	return 0;
} 