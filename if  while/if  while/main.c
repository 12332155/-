#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

void play() {
	

	//���������ֵ�����Ǵ��˻���С��  �������Ϊ5��
	//���������
	srand((unsigned int)time(NULL));
	int sr = rand()%10+1;
	int sum = 0;
	int opportunity = 5;
	

	while (opportunity)
	{
		printf("��ѡ�е������ǣ�\n");
		scanf("%d", &sum);
		if (sum > sr) {
			printf("����\n");
		}
		else if (sum < sr)
		{
			printf("С��\n");
		}
		else
		{
			printf("������\n");
			return NULL;
		}

		opportunity--;
	}
	printf("��Ϸʧ�� ������ǣ�%d", sr);
}
int main() {
	//ѡ��ģʽ1��������Ϸ 0���˳���Ϸ  ������ѡ�Ŵ���
	/*while (1)
	{
		int select = 1;
		printf("***********************************\n");
		printf("      1��������Ϸ 0���˳���Ϸ      \n");
		printf("***********************************\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("������Ϸ\n");
			play();
			break;
		case 0:
			printf("���Ƴ���Ϸ\n");
			goto end;
			break;
		default:
			printf("�����ʽ����\n");

			break;
		}
	}
end:*/
	//�žų˷���
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			printf("%d * %d = %d ", i, j, i * j);
		}
		printf("\n");
	}*/
	/*int a, b;
	printf("���룺");
	scanf("%d %d", &a, &b);
	int c = a % b;

	while (c)
	{
		a = b;
		b = c;
	}
	printf("\n%d", b);*/
	
	
	for (int i = 100; i < 201; i++)
	{
		int bol = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				bol++;
				break;
			}
		}
		if (bol == 0)
		{
			printf("%d ", i);
		}
	}
	


	return 0;
}