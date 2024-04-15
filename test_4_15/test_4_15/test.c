#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//函数的定义
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	//int c = a + b;
//	int c = Add(a, b);//使用函数（调用函数）
//
//	//输出
//	printf("%d\n", c);
//
//	return 0;
//}



//void print(void)
//{
//	printf("hello world\n");
//}

//返回类型的地方的void表示函数没有返回值
//void print(void)//参数部分的void表示函数不需要参数
//{
//	printf("hello world\n");
//}
//
//int main()
//{
//	print();
//
//	return 0;
//}
//




//int Add(int x, int y)
//{
//	return x + y;//10 20
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	int c = Add(a, b);//使用函数（调用函数）
//
//	//输出
//	printf("%d\n", c);
//
//	return 0;
//}


//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 0)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//	if (1)
//		return;
//
//	printf("haha\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int test()
//{
//	return 3.14;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//错误的示范
//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a)
//		return 1;
//}
//
//int main()
//{
//	int r = test();
//	return 0;
//}


//函数的返回类型如果没写的话，编译器认为返回的是int类型的值
//如果函数要求返回值，但是函数中没有使用return返回值，那具体返回什么就不确定了

//test()
//{
//	printf("hehea\n");
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//}


//写一个函数将一个整型数组的内容，全部置为-1，再写一个函数打印数组的内容。
//
//void set_arr(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//写一个函数将数组的内容全部置为-1
//	print_arr(arr, sz);
//	set_arr(arr, sz, -1);
//	print_arr(arr, sz);
//
//	return 0;
//}

//
//1.数组在传参的时候，实参就写数组名就行,形式也是数组的形式
//2.实参和形参的名字是可以一样的，也可以一样的
//3.函数的在设计的时候，一定要尽量功能单一
//4.数组在传参的时候，形参的数组和实参的数组是同一个数组
//
//
//void print(int arr[][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6 ,3,4,5,6,7 };
//	//打印二维数组的内容
//	print(arr, 3, 5);
//
//	return 0;
//}
//

//假设我们计算某年某月有多少天？
//
//31 28 31 30 31 30 31 31 30 31 30 31 
//   29
// 只有闰年的2月有29天
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	//             0  1  2  3  4  5  6  7  8
//	//                   29
//	int day = days[m];
//	if (is_leap_year(y) == 1 && m==2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	//计算某年某月有多少天
//	int day = get_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}


//是闰年 - 真
//不是闰年 - 假

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}

#include <stdbool.h>
//
//
//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return true;
//	else
//		return false;
//}
//
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	//             0  1  2  3  4  5  6  7  8
//	//                   29
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	//计算某年某月有多少天
//	int day = get_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	printf("%d\n", strlen("abcdef"));//链式访问
//
//	return 0;
//}
//


//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 43)));
//	//43 3 2
//
//	//int r = printf("hehe");
//	//printf("%d\n", r);
//
//	return 0;
//}


//函数或者变量都要满足：先声明后使用

//int is_leap_year(int y);//函数的声明
//int is_leap_year(int);//在函数的声明中，形参的名字可以省略
//
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))//函数调用
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	return 0;
//}
//
////函数的定义
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}


////函数的定义 - 是一种特殊的声明
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))//函数调用
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	return 0;
//}
//

//#include "add.h"
//
////导入静态库
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);//函数的调用
//	printf("%d\n", c);
//
//	return 0;
//}
//
//
//


//int main()
//{
//	int a = 100;
//	{
//		printf("1 a=%d\n", a);
//	}
//	printf("2 a=%d\n", a);
//
//	return 0;
//}



//extern 是用来声明外部符号的
//
//extern int a;//变量的声明
//
//void test()
//{
//	printf("3 a=%d\n", a);
//}
//
//int main()
//{
//	{
//		printf("1 a=%d\n", a);
//	}
//	printf("2 a=%d\n", a);
//	test();
//	return 0;
//}
//


int main()
{
	//1


	{
		int a = 100;//2-创建
		printf("a=%d\n", a);
	}//

	printf("a=%d\n", a);//err

	return 0;
}
