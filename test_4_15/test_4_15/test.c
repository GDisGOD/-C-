#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//�����Ķ���
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
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	//int c = a + b;
//	int c = Add(a, b);//ʹ�ú��������ú�����
//
//	//���
//	printf("%d\n", c);
//
//	return 0;
//}



//void print(void)
//{
//	printf("hello world\n");
//}

//�������͵ĵط���void��ʾ����û�з���ֵ
//void print(void)//�������ֵ�void��ʾ��������Ҫ����
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
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int c = Add(a, b);//ʹ�ú��������ú�����
//
//	//���
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


//�����ʾ��
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


//�����ķ����������ûд�Ļ�����������Ϊ���ص���int���͵�ֵ
//�������Ҫ�󷵻�ֵ�����Ǻ�����û��ʹ��return����ֵ���Ǿ��巵��ʲô�Ͳ�ȷ����

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


//дһ��������һ��������������ݣ�ȫ����Ϊ-1����дһ��������ӡ��������ݡ�
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
//	//дһ�����������������ȫ����Ϊ-1
//	print_arr(arr, sz);
//	set_arr(arr, sz, -1);
//	print_arr(arr, sz);
//
//	return 0;
//}

//
//1.�����ڴ��ε�ʱ��ʵ�ξ�д����������,��ʽҲ���������ʽ
//2.ʵ�κ��βε������ǿ���һ���ģ�Ҳ����һ����
//3.����������Ƶ�ʱ��һ��Ҫ�������ܵ�һ
//4.�����ڴ��ε�ʱ���βε������ʵ�ε�������ͬһ������
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
//	//��ӡ��ά���������
//	print(arr, 3, 5);
//
//	return 0;
//}
//

//�������Ǽ���ĳ��ĳ���ж����죿
//
//31 28 31 30 31 30 31 31 30 31 30 31 
//   29
// ֻ�������2����29��
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
//	//����ĳ��ĳ���ж�����
//	int day = get_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}


//������ - ��
//�������� - ��

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
//	//����ĳ��ĳ���ж�����
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
//	printf("%d\n", strlen("abcdef"));//��ʽ����
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


//�������߱�����Ҫ���㣺��������ʹ��

//int is_leap_year(int y);//����������
//int is_leap_year(int);//�ں����������У��βε����ֿ���ʡ��
//
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))//��������
//	{
//		printf("%d ������\n", year);
//	}
//	else
//	{
//		printf("%d ��������\n", year);
//	}
//	return 0;
//}
//
////�����Ķ���
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//		return 1;
//	else
//		return 0;
//}


////�����Ķ��� - ��һ�����������
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
//	if (is_leap_year(year))//��������
//	{
//		printf("%d ������\n", year);
//	}
//	else
//	{
//		printf("%d ��������\n", year);
//	}
//	return 0;
//}
//

//#include "add.h"
//
////���뾲̬��
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);//�����ĵ���
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



//extern �����������ⲿ���ŵ�
//
//extern int a;//����������
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
		int a = 100;//2-����
		printf("a=%d\n", a);
	}//

	printf("a=%d\n", a);//err

	return 0;
}
