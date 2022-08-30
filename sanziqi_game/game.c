#include "game.h"

void InitBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void DispiayBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        //1.打印第一行数据
        int j=0;
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if (j<col-1)
                printf("|");
        }
        printf("\n");
        //2.打印分割行
        if (i<row-1)
        {
            for(j=0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家走:>\n");
    while(1)
    {
        printf("请输入下子的坐标:>");
        scanf("%d%d",&x,&y);
        //（x,y）判断合法
        if (x>=1 && x<=row && y>=1 && y<=col)
        {
            if (board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='*';
                break;
            }
            else
            {
                printf("该坐标被占用\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入！\n");
        }
    }
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("电脑走:>\n");
    while(1)
    {
        x=rand()%row;
        y=rand()%col;
        if (board[x][y]==' ')
        { 
            board[x][y]='#';
            break;
        }
    }
    
}
//玩家赢->'*'
//电脑赢->'#'
//平局->'Q'
//继续->'C'
int IsFull(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if (board[i][j]==' ')
                return 0;
        }
    }
    return 1;
}
char IsWin(char board[ROW][COL],int row,int col)
{
    int i=0;
    //横三行
    for (i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //竖三列
    for (i=0;i<col;i++)
    {
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
        {
            return board[1][i];
        }
    }
    //对角线
    if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
        return board[1][1];
    if (board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
        return board[1][1];
    //判断是否平局
    if (1==IsFull(board,ROW,COL))
        return 'Q';
    return 'C';
}