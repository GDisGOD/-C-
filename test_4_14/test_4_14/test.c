#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//数组的初始化


//int main()
//{
//	int arr[10] = { 0 };//10个元素
//	int arr2[] = { 0 };//这种数组只有1个元素
//	int arr3[20] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	return 0;
//}


//int main()
//{
//	int data[3][5];
//	float score[5][30];
//
//	return 0;
//}

//int main()
//{
//	int data1[3][5] = {1,2,3,4,5,6,7,8};//不完全初始化
//	int data2[3][5] = { 0 };//不完全初始化
//	int data3[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };//完全初始化
//	int data4[3][5] = { {1,2},{3,4},{5,6} };//
//
//
//	int data5[][5] = { 1,2,3,4,5,6,7,8 };
//	int data6[][5] = { {1,2},{3,4},{5,6,7,8} };
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	printf("%d\n", arr[1][2]);
//	printf("%d\n", arr[2][4]);
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//输出
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存储

//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	//1 2 3 4 5
//	//2 3 4 5 6
//	//3 4 5 6 7
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//在C语言的C99标准之前，数组在创建的时候，数组大小的指定只能使用常量
//int main()
//{
//	int arr1[10];
//
//	int n = 10;
//	int arr2[n];//err
//
//	return 0;
//}

//在C99之后，C语言中引入了变长数组的概念，使得数组的大小可以使用变量来指定
//但是VS2022是不支持变长数组的
//DevC++ / 小熊猫C++ 底层使用的gcc，gcc支持C99中的变长数组的


//
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//
//int main()
//{
//	//char arr[] = "abc";
//	//a b c \0
//	//0 1 2 3
//	//
//	char arr1[] = "hello bit!!!!!!!!!";
//	//[hello bit!!!!!!!!!\0]
//	// 0                
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1000毫秒
//		system("cls");//清理控制台屏幕的信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 0;
//	scanf("%d", &k);//输入要查找的值，假设是7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int left = 0;
//	int right = sz-1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//strlen是求字符串长度的，只能针对字符串或者字符数组
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);//输入要查找的值，假设是7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;//假设找不到
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//      int mid = left + (right-left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//
//	if (!flag)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//

//2147483647
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	//int avg = (a + b) / 2;
//	int avg = a+(b-a)/2;
//
//	printf("%d\n", avg);
//	return 0;
//}

#include <math.h>

int main()
{
	double r = sqrt(16);
	printf("%lf\n", r);
	//r = sqrt(-1);
	//printf("%lf\n", r);
	return 0;
}