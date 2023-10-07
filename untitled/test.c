
#include <stdlib.h>
#include "game.h"
#include "time.h"
//
void man(){
    printf("------------------------------------------------------\n");
    printf("-------------------------play-------------------------\n");
    printf("------------------------------------------------------\n");
}
void game(){
    srand(time(NULL));//������������

    char board[ROW][COL]={0};
    initBoard(board,ROW,COL);//��ʼ������
    DispalyBoardBoard(board,ROW,COL);//��ӡ����
    //ѭ������
    while (1){
        PlayMove(board,ROW,COL);//�������
        DispalyBoardBoard(board,ROW,COL);//��ӡ����
        switch (IsWin(board,ROW,COL)) {
            case '*':
                printf("��һ�ʤ\n");
                return;
                break;
            case '#':
                printf("���Ի�ʤ\n");
                return;
                break;
            case 'Q':
                printf("ƽ��\n");
                return;
                break;
            case 'C':
                printf("����\n");
                break;
        }

        ComputerMove(board,ROW,COL);
        DispalyBoardBoard(board,ROW,COL);//��ӡ����
        switch (IsWin(board,ROW,COL)) {
            case '*':
                printf("��һ�ʤ\n");
                return;
                break;
            case '#':
                printf("���Ի�ʤ\n");
                return;
                break;
            case 'Q':
                printf("ƽ��\n");
                return;
                break;
            case 'C':
                printf("����\n");
                break;
        }


    }

}

int main(){
    int input = 1;

    do {
        man();//������
        printf("��ѡ��:> ");
        scanf("%d",&input);
        printf("\n");
        switch (input) {
            case 1:
                game();//������Ϸ
                break;
            case 0:
                printf("�Ƴ���Ϸ");
                break;
            default:
                printf("���벻�Ϸ�");
        }
    } while (input);


    return  0;
}
