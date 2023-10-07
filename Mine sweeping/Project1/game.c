
#include "game.h"

//��ͼ��ʼ��
void InitBoard(char show[ROWS][COLS],int row,int col,char set) {

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			show[i][j] = set;
		}
	}

}

//��ͼ��ӡ
void print(char show[ROWS][COLS], int row, int col) {
	//��ӡ�б�
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
		printf("\n");
	for (int i = 1; i <= row; i++)
	{
		//��ӡ�б�
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", show[i][j]);
			//printf("(%d %d )" , i, j);
		}
		printf("\n");
	}
}

//������
void SetMine(char mine[ROWS][COLS],int row,int col,int sum) {

	int count = 0;
	while (count < sum)
	{
		int x = (rand(NULL) % row) + 1;
		int y = (rand(NULL) % col) + 1;
		if (mine[x][y] == '0' && mine[x][y] != '*')
		{
			mine[x][y] = '*';
			//printf("%d %d\n", x, y);
			count++;
		}
		
	} 


}

//��չ����
void extend(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y) {
	int total = 0;
	//Ѱ����Χ����
	if (x>0 && x<= ROW && y > 0 && y <= COL)
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i == x && j == y)
				{
					continue;
				}
				else if (mine[i][j] == '*' && mine[i][j] != '0')
				{
					total++;
				}

			}
		}
		if (total == 0)
		{
			show[x][y] = '0';

			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '#')
					{
						extend(show, mine, i, j);
					}

				}
			}
		}
		else
		{
			show[x][y] = total + '0';
		}
	}
	
}

//����������Χ��ֵ
int Find_Around(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y){

	int total = 0;
	for (int i = x - 1; i <= x+1; i++)
	{
		for (int  j = y-1; j <= y+1; j++)
		{
			if (mine[i][j] == '*')
			{
				total++;
			}
			
		}
	}
	//�����Χһ���׶�û�н���ȫ������
	/*if (total == 0);
	{
		for (int i = x + 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y - 1; j++)
			{
				(mine[i][y] == '0');
			}
		}
	}*/
	return total;

}

//�������
int  FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col) {

	while (1)
	{
		int x = 0;
		int y = 0;
		printf("�������������\n");
		scanf_s("%d %d", &x, &y);
		if (0 < x && x <= ROW && 0 < y && y <= COL && show[x][y] == '#')
		{
			if (mine[x][y]== '*')
			{
				printf("���ź���ȵ�����\n");
				print(mine, ROW, COL);//��ӡ���е���
				return 0;//������Ϸ
				break;
			}
			else//������Χ�������ֵ
			{
				extend(show, mine, x, y);
				int margin = 0;
				for (int i = 1; i <= row; i++)
				{
					for (int j = 0; j <= col; j++)
					{
						if (show[i][y] != '#') {
							margin++;
						}
					}
				}
				if (margin == EASY_COUNT)
				{
					printf("�ɹ�\n");
					print(mine, ROW, COL);
					return 0;//������Ϸ
				}
			}
		
			break;
		}
		else
		{
			printf("�Ƿ�����");
		}
	}
}



