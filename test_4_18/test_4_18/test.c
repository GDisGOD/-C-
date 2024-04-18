#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


//变量在使用之前也得声明

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//声明外部符号
extern int Add(int, int);

int main()
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	printf("c=%d\n", c);

	return 0;
}