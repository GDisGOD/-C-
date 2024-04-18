#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("--------扫雷------\n");
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷是在棋盘上随机的找10个坐标布置的
//x: 1~9
//y: 1~9

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand()%row+1;
		y = rand()%col+1;

		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//布置一个雷
			count--;
		}
	}
}

//int GetMineCount(char mine[ROWS][COLS], int x, int y)
//{
//	return mine[x - 1][y] + 
//		mine[x - 1][y - 1] + 
//		mine[x][y - 1] + 
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] + 
//		mine[x + 1][y + 1] + 
//		mine[x][y + 1] + 
//		mine[x - 1][y + 1] - 8*'0';
//}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<col*row-EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//输入的位置是雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你踩雷了，游戏结束\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else  //不是雷
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入的坐标有误x(1~9),y(1~9)，重新输入");
		}
	}
	
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}







