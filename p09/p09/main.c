#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	//int arr[10] = { 0 };
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//int ave = 0;
	//for (int j = 0; j < 10; j++)
	//{
	//	ave += arr[j];
	//}
	//printf("ƽ������%d", ave / 10);


	/*int a;
	while (scanf("%d", &a) != EOF) { 

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if (i + j == a-1)
				{
					printf("*");

				}
				if (i == j&&i+ j != a -1 )
				{
					printf("*");

				}
				if(i != j && i + j != a -1) {
					printf(" ");
				}
				
			}
			printf("\n");
		}
		
	}*/

	int a;
	while (scanf("%d", &a) != EOF) { // ע�� while ������ case
		// 64 λ������� printf("%lld") to 
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				
				if (i > 0 && i < a - 1 && j>0 && j < a - 1) {
					printf("  ");
				}
				else {
					printf("* ");

				}
			}
			printf("\n");
		}
	}
	return 0;
}