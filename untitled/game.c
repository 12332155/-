

#include "game.h"

void initBoard(char board[ROW][COL],int x,int y){
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            board[i][j] = ' ';
        }
    }
}


void DispalyBoardBoard(char board[ROW][COL],int x,int y){
    for (int i = 0; i < x; ++i) {
        //��ӡ��
        for (int j = 0; j < y; ++j) {
            printf(" %c ",board[i][j]);// a | d | c
            if  (j < COL-1)
                printf("|");
        }
        printf("\n");
        //��ӡ�зָ���--------------------------------------
        for (int j = 0; j < y; ++j) {
            if(i<ROW -1)
            printf("---");
            if  (j < COL-1)
                printf(" ");
        }
        printf("\n");





    }


};

// �������
void PlayMove(char board[ROW][COL],int row,int col)
{
    while(1){
        printf("���������\n");
        int x = 0;
        int y = 0;
        scanf("%d %d",&x,&y);
        //����Ϸ��ж�
        if(0<x && x <= row && 0<y && y <= col){
            if(board[x-1][y-1] == ' '){
                board[x-1][y-1]='*';
                break;
            } else{
                printf("��ѡ������λ��\n");
            }
        } else{
            printf("������Χ\n");
        }
    }



}
//��������
void ComputerMove(char board[ROW][COL],int row,int col)
{
    while(1){
        //�����������
        int x = rand()%row;
        int y = rand()%col;
        if(board[x][y] == ' '){
            board[x][y]='#';
            break;
        }
    }



}
//�ж���Ϸ״̬

char IsWin(char board[ROW][COL],int row,int col){


    char  win = ' ';
    int empty = 0;
    char symbol=0;
    //�ж�����û�����
    for (int i = 0; i < row; ++i)
    {
        int x= 0;
        for (int j = 0; j < col-1; ++j)
        {
            if((board[i][j] == board[i][j+1]) &&( board[i][j+1] !=' '))
            {
                x++;
                if(x == col-1){
                    win = board[i][j];
                }
            }
        }

    }
    //�ж�����û�����
    for (int i = 0; i < col; ++i)
    {
        int y =0;
        for (int j = 0; j < row-1; ++j)
        {
            if((board[j][i] == board[j+1][i]) &&( board[i][j+1] !=' '))
            {
                y++;
                if(y==row-1){
                    win = board[i][j];
                }
            }
        }

    }
    //�ж�˭��ʤ
    switch (win) {
        case '*':
            return '*';
            break;
        case '#':
            return '#';
            break;
    }
    //�ж��Ƿ�ȫ������
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if(board[i][j] !=' '){
                empty++;
                //ȫ������
                if(empty==col*row){
                    return 'Q';
                }

            }
        }
    }
    return 'C';






}
