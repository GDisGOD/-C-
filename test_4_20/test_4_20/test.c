#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	//给数组元素赋值
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//		//scanf("%d", &arr[i]);
//	}
//
//	//打印数组的内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//void test()
//{
//	printf("test\n");
//	int n = 4 + 5;
//	printf("%d\n", n);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	test();
//	printf("hehe\n");
//	return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    int arr[10] = { 0 };
//    int num = 100;
//    char c = 'w';
//
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//    return 0;
//}


//求1!+2!+3!+4!+...10!的和
//4! = 1*2*3*4
//5! =1*2*3*4*5
//n！=1*2*...*n
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0~9
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0~9
//	printf("%p\n", &arr[12]);
//	printf("%p\n", &i);
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//
//

//void test1(int arr3[])
//{
//
//}
//
//void test2(int arr4[3][5])
//{
//
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	test1(arr1);
//	test2(arr2);
//
//	return 0;
//}
//
#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

int Add(int x, int y)
{
	return x - y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}