#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>



#define ROW 8
#define COL 8
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//��ͼ��ʼ��
void InitBoard(char show[ROWS][COLS], int row, int col, char set);
//��ͼ��ӡ
void print(char show[ROWS][COLS], int row, int col);

//������
void SetMine(char mine[ROW][COL], int row, int col, int sum);

//�������
int  FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);