#define _CRT_SECURE_NO_WARNINGS //���⺯���ⲻ����������
#include <assert.h>
#include <stdio.h>
#include <math.h>

int my_strlen(const char * str) {


	int count = 0;
	assert(str);//�ж��Ƿ�λ��ָ��
	while (*str != '\0')
	{                              
		str++;
		count++;

	}
	return count;
}

//�ж����ǲ�����������ʲô������

int main() {

	//���0~10000 ֮���ˮ�ɻ���
	int i = 0;
	for (int i = 0; i < 10000; i++)
	{
		//�ж��Ǽ�λ��
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;

		}
		//printf("%d", n);
		//printf("\n");
		//�õ�����ÿһλ
		tmp = i;
		
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("o%d ", i);
		}
	}
	printf("%d", pow(2, 2));
	/*int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d",&a ,&b ,&c))
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b && b == c)
			{
				printf("�ȱ�������");

			}
			else if (a == b || b == c || c == a)
			{
				printf("����������");

			}
			else 
			{
				printf("��ͨ������");

			}
		}

	}*/
	

	
	return 0;
}
