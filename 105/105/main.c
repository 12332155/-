
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	/*char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c", ch);
	printf("123");
	const char* p = "abcd";//����p�������ַ���a���ĵ�ַ
	//����һ�������ַ������ܱ��޸Ļᱨ��
	//*p = 'd';
	printf("%s", p);//printf������\0��ֹͣ��ӡ*/

	//const char* p = "abcd";
	//const char* p1 = "abcd";
	////p== p1
	////�������ڴ���ֻ��һ����ַ

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";
	////arr1 != arr2

	//int arr[10];//��������
	//char ch[5];//�ַ�����

	////ָ������
	//int* arr2[6];// �������ָ�������
	//char* arr3[5];// ����ַ�ָ������� 

	int* p1[10];//ָ������
	int(*p)[10];//����ָ��

	int arr[20] = { 0 };
	//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
	//��������������
	//sizeof(������) �������������ʾ�������飬�������������Ĵ�С
	//&���������������������ʾ�����������飬����&ȡ��������������ĵ�ַ
	printf("%p ", arr+1);//��4���ֽ�
	printf("%p ", arr[0]+1);//��4���ֽ�
	printf("%p ", &arr+1);//��40 ���ֽ�


	return 0;
}

