#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	printf("hehe\n");
//	
//	main();
//
//	return 0;
//}
//


//����n�Ľ׳ˣ��������������n�Ľ׳˾���1~n�������ۻ���ˡ�
//
//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n > 0)
//		return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fact(n);
//	printf("%d\n", r);
//
//	return 0;
//}


//����һ������m������˳���ӡ������ÿһλ��
//1234
// 1234%10=4
// 1234/10=123
// 123%10=3
// 123/10=12
// 12%10=2
// 12/10=1
// 1%10=1
// 1/10=0
// 
//1 2 3 4
//

//
//
//Print(1234)
//Print(123) + 4
//Print(12) 3 4 
//Print(1) 2 3 4
//

//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);//123
//
//	return 0;
//}
//
//
//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//ret = ret*i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fact(n);//123
//	printf("%d\n", r);
//
//	return 0;
//}
//

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	printf("count = %d\n", count);
//	return 0;
//}
////


//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	return 0;
//}
//

//void test(int n)
//{
//	printf("%d ", n);
//	if (n <= 10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}
//
//
//
//int main()
//{
//	//printf("%d\n", 153);
//	//printf("%d\n", 0153);
//
//	int b = 10;
//	//00000000000000000000000000001010-- ԭ��
//	//00000000000000000000000000001010-- ����
//	//00000000000000000000000000001010-- ����
//
//	int a = -10;
//	//10000000000000000000000000001010 -- ԭ��
//	//11111111111111111111111111110101 -- ����
//	//11111111111111111111111111110110 -- ����
//
//	//11111111111111111111111111110110 -- ����
//	//10000000000000000000000000001001
//	//10000000000000000000000000001010 -- ԭ��
//
//	return 0;
//}
//
//�������ڴ��д洢����2���ƵĲ���
//

//
//int main()
//{
//	//1 - 1;
//	//1 + (-1)
//	//������ԭ�����
//	//000000000000000000000000000000001  1��ԭ��
//	//100000000000000000000000000000001  -1��ԭ��
//	// 
//	//100000000000000000000000000000010  -2 //err
//
//	//����ʹ�ò������
//	//000000000000000000000000000000001  1�Ĳ���
//	//100000000000000000000000000000001  -1��ԭ��
//	//111111111111111111111111111111110
//	//111111111111111111111111111111111  -1�Ĳ���
//	//000000000000000000000000000000001
//	//000000000000000000000000000000000 -- 0
//	//
//	return 0;
//}