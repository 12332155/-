
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <search.h>
void  mysort(void * start,int number,int width,int (* wpd)(void *el1,void* el2)) {

	//����ѭ������   

	//�Զ��庯��el1>el2 ����ֵ����0 ���򷵻�ֵС��0

	//����ֵ����0���� el1 �� el2

}
int cmp_int(const void * e1,const void * e2) {
	//e1<e2 ����ֵС����
	//e1 == e2  ������
	//e1 > e2 ���ش��������ֵ
	return *(int *)e1 - *(int *)e2;
}
int main()   
{
	//��дһ��qsort����
	//Ԫ�ص���ʼλ�� ��Ԫ�صĸ�����Ԫ�صĿ�ȵ�λ�Ǳ��أ�����ֵΪint���͵ĺ����������������͵Ĳ���
	
	int arr[] = { 3,5,6,8,4,65,23 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("fjsf");


	return 0;
}