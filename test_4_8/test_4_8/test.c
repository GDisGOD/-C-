#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设i是素数
//		//printf("%d ", i);
//		//每一次循环进来都会产生一个数字
//		//判断i是否是素数
//		//产生2~i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//假设i是素数
//		//printf("%d ", i);
//		//每一次循环进来都会产生一个数字
//		//判断i是否是素数
//		//产生2~i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//sqrt 是一个库函数 - 计算平方根
//math.h

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;//假设i是素数
//		//printf("%d ", i);
//		//每一次循环进来都会产生一个数字
//		//判断i是否是素数
//		//产生2~i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	if (1)
//		goto end;
//
//	printf("haha\n");
//
//end:
//	printf("end\n");
//
//	return 0;
//}
//
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//
//关机程序
//1. 程序运行起来的时候，就开始倒计时60秒关机
//2. 但是如果你能输入：我是猪，就取消关机
//
//system -- 库函数，可以执行系统命令
//stdlib.h

#include <stdlib.h>
#include <string.h>

//两个字符串比较相等的时候，不是使用==
//应该使用strcmp
//string.h

//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//输入的信息放在input数组中
//	//判断input中存放的是不是“我是猪”
//	if (strcmp("我是猪", input) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);//输入的信息放在input数组中
//		//判断input中存放的是不是“我是猪”
//		if (strcmp("我是猪", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//
//


#include <stdlib.h>
#include <time.h>
//
//int main()
//{
//	//设置随机数的生成起点（种子）
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}
//

//int main()
//{
//	//设置随机数的生成起点（种子）
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", rand()%100+1);
//	}
//	return 0;
//}

//函数
//void 表示函数不返回任何值
//void menu()
//{
//	printf("************************\n");
//	printf("****** 1. play   *******\n");
//	printf("****** 0. exit   *******\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//游戏的逻辑
//	//1. 生成随机数
//	int r = rand() % 100 + 1;
//	//2. 猜数字
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("还有%d次机会\n", count);
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("用完了所有的机会，猜数字失败,正确的值是:%d\n", r);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//设置随机数的生成起点
//	//整个工程中只用调用一次就可以了
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		//打印菜单
//		menu();
//
//		//选择
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//玩游戏的逻辑
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//	//一维数组的创建
//	//int math[20];//数组有20个元素，每个元素的类型是int
//	//char ch[5];
//	//double arr[6];
//
//	//创建和初始化
//	int math[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
//	int math2[20] = { 0,1,2,3,4,5 };//不完全初始化，剩下的元素默认初始化为0
//
//	char ch[5] = {'a', 'b'};
//	char ch2[5] = "abc";
//
//	double arr[6] = {0.0};
//	int arr2[3] = { 1,2,3};
//
//
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	double d = 0.0;
//
//	int arr[10] = {0};
//	//数组有没有类型
//	//数组的类型是什么？
//	//数组的元素类型是int
//	//数组的类型 - int[10]
//
//	int arr2[5];//int [5]
//
//	return 0;
//}


//使用一维数组

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//10 是指定数组的元素个数的
//
//	printf("%d\n", arr[5]);//[] -- 下标引用操作符
//	//            这里的5是数组元素的下标
//
//	printf("%d\n", arr[9]);
//
//
//	return 0;
//}

//int main()
//{
//	//当对数组进行初始化的时候，数组的大小可以省略。编译器会根据数组的初始化内容，自动计算数组的元素个数
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//10 是指定数组的元素个数的
//
//	printf("%d\n", arr[5]);//[] -- 下标引用操作符
//	//            这里的5是数组元素的下标
//
//	printf("%d\n", arr[9]);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	//0~9
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	//给数组中输入10个值
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//打印数组的内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


//一维数组在内存中的存储
//%d - 整型
//%c - 字符
//%s - 字符串
//%p - 地址
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	//打印这10个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i,  &arr[i]);//&-取地址操作符-取出变量在内存中的地址
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//int a = 0;
//	//printf("%zd\n", sizeof(a));//单位是字节
//	//printf("%zd\n", sizeof(int));
//
//
//	return 0;
//}


//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//








#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, time, localtime, strftime */
#include <locale.h>     /* struct lconv, setlocale, localeconv */

int main()
{
    time_t rawtime;
    struct tm* timeinfo;
    char buffer[80];

    struct lconv* lc;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    int twice = 0;

    do {
        printf("Locale is: %s\n", setlocale(LC_ALL, NULL));

        strftime(buffer, 80, "%c", timeinfo);
        printf("Date is: %s\n", buffer);

        lc = localeconv();
        printf("Currency symbol is: %s\n-\n", lc->currency_symbol);

        setlocale(LC_ALL, "");
    } while (!twice++);

    return 0;
}