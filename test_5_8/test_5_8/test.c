#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//*p;//*&a == a;
//	
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int (* p)[10] = &arr;//取出的是数组的地址
//
//	////想使用p这个数组指针访问arr数组的内容
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);//
//	//}
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);//p[i] --- *(p+i)
//	//}
//
//	return 0;
//}
//


//void Pirnt(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//
//void Pirnt(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));//*(arr + i) == arr[i]
//			//arr[i]是第i行的数组名，数组名又表示数组首元素的地址，arr[i]表示是&arr[i][0]
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Pirnt(arr, 3, 5);//将arr数组的内容打印出来
//	//arr 是数组首元素的地址，是他第一行的地址
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//整型指针变量
//
//	//int arr[5] = {0};
//	//int (*parr)[5] = &arr;//parr 是数组指针变量
//	//arr &arr
//	
//	//&函数名和函数名都是函数的地址，没有区别
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//int (*pf)(int,int) = &Add;//pf 函数指针变量
//	int (* pf)(int, int) = Add;//pf 函数指针变量
//	int ret2 = (*pf)(4, 5);
//	printf("%d\n", ret2);
//
//	int ret = Add(4, 5);
//	printf("%d\n", ret);
//
//
//	//int (*pf)(int x, int y) = &Add;//pf 函数指针变量
//	//int (*)(int,int) 函数指针类型
//
//	return 0;
//}
//
//
//

//int main()
//{
//	( *( void (*)() )0 )();
//
//	return 0;
//}
//

//typedef void(*pf_t)(int);
//
//int main()
//{
//
//	//void ( *signal( int, void(*)(int) ) )(int);
//	//void (*)(int) signal(int, void(*)(int));
//	pf_t signal(int, pf_t);
//
//	return 0;
//}


//
//
//
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int num;
//	uint num2;
//
//	return 0;
//}


//typedef int* pint_t;
//
//int main()
//{
//	int* p;
//	pint_t p2;
//
//	return 0;
//}

//typedef int(*parr_t)[6];
//
//int main()
//{
//	int arr[6] = { 0 };
//	int (* p)[6] = &arr;//p是数组指针变量
//	parr_t p2  = &arr;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//typedef int (*pf_t)(int, int) ;
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	pf_t pf2 = Add;
//
//	return 0;
//}
//

//指针数组
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int* arr1[6];//整型指针数组
//	//char* arr2[5];//字符指针数组
//
//	//arr3[5];//每个元素是函数的地址 - 函数指针数组
//	//int (*pf1)(int, int) = Add;
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//
//	//函数指针数组，来存放这些函数的地址呢？
//	int (* pf[4])(int, int) = {Add, Sub, Mul, Div};
//	                         // 0    1    2    3
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](6, 2);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//实现一个计算器
//完成：整数的加法、减法、乘法、除法

//
//void menu()
//{
//	printf("********************************\n");
//	printf("******   1. add    2. sub  *****\n");
//	printf("******   3. mul    4. div  *****\n");
//	printf("******   0. exit           *****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//
//void menu()
//{
//	printf("********************************\n");
//	printf("******   1. add    2. sub  *****\n");
//	printf("******   3. mul    4. div  *****\n");
//	printf("******   0. exit           *****\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//函数指针数组 - 转移表
//	int (*pfArr[5])(int, int) = {0,   Add, Sub, Mul, Div};
//	//                           0    1    2    3    4
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (input);
//
//	return 0;
//}




void menu()
{
	printf("********************************\n");
	printf("******   1. add    2. sub  *****\n");
	printf("******   3. mul    4. div  *****\n");
	printf("******   0. exit           *****\n");
	printf("********************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}