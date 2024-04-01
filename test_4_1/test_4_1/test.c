#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//printf("hello world");
//	//printf("hello world\n");
//	//abc
//	//def
//	printf("abc\ndef");
//
//	return 0;
//}
//


//int main()
//{
//	printf("%dabc\n", 100);
//	return 0;
//}
//
//int main()
//{
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "wangwu");
//
//	return 0;
//}


//int main()
//{
//	printf("%s says it is %d o'clock\n", "lisi", 10);
//	printf("%s says it is %d o'clock\n", "cuihua", 24);
//
//	return 0;
//}


//int main()
//{
//	printf("this is %c\n", 'A');
//	return 0;
//}


//int main()
//{
//	printf("%hd\n", 100);
//	printf("%ho\n", 100);
//	printf("%x\n", 15);//0 1 2 3 4 5 6 7 8 9 a b c d e f 
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123);
//	printf("%-5dxxxx\n", 123);
//	printf("%5d\n", 123456);
//
//
//	return 0;
//}


//int main()
//{
//	printf("%lf\n", 123.45);
//	printf("%12lf\n", 123.45);
//
//	
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123); //123
//	printf("%d\n", -123);//-123
//
//	printf("%+d\n", 123); //+123
//	printf("%+d\n", -123);//-123
//
//
//	return 0;
//}

//int main()
//{
//	printf("%.2lf\n", 123.45);
//	printf("%.3lf\n", 123.45);
//	printf("%.1lf\n", 123.45);
//	printf("%12.1lf\n", 123.45);
//
//	printf("%*.*lf\n", 12, 1, 123.45);
//	printf("%*.*lf\n", 12, 3, 123.45);
//
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%.3s\n", "abcdef");
//
//	return 0;
//}
//


//int main()
//{
//	int score = 0;
//	printf("请输入成绩:");
//	scanf("%d", &score);//输入操作
//	//scanf函数中占位符的后边的参数需要的是地址
//	//& 取地址操作符，&score - 取出score的地址
//	printf("成绩是 %d\n", score);
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f1 = 0.0;
//	float f2 = 0.0;
//
//	scanf("%d %d %f %f", &a, &b, &f1, &f2);
//	printf("%d %d %f %f\n", a, b, f1, f2);
//
//	return 0;
//}
//


#include <stdio.h>

//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    printf("%f\n", y);
//    return 0;
//}


//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d %f", &x, &y);
//    printf("%d %f\n", x, y);
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf(" %c", &ch);
//	printf("xxxx%cyyyy\n", ch);
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };//数组
//	scanf("%s", arr);//arr是数组名，数组名是地址
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[5] = { 0 };//数组
//	scanf("%4s", arr);//arr是数组名，数组名是地址
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d-%d-%d", &year, &month, &day);
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}


//int main()
//{
//	int a;
//	printf("%d\n", a);
//
//	return 0;
//}
//int a;
//
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}
//


//int main()
//{
//	int num = -1;
//	if (num)
//		printf("hehe\n");
//
//
//	return 0;
//}

//int main()
//{
//	if (1 == 2)
//		printf("hehe\n");
//
//
//	return 0;
//}

//输入一个整数，判断是否为奇数

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断和输出
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断和输出
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	else
//		printf("%d是偶数\n", num);
//
//	return 0;
//}

//输入一个年龄，>= 18岁就输出：成年，否则就输出：未成年
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱了\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("禁止谈恋爱\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//
//	//判断和输出
//	if (num == 0)
//		printf("输入的值是0\n");
//	else
//	{
//		if (num > 0)
//			printf("输入的值是正数\n");
//		else
//			printf("输入的值是负数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//
//	//判断和输出
//	if (num == 0)
//		printf("输入的值是0\n");
//	else if (num > 0)
//		printf("输入的值是正数\n");
//	else
//		printf("输入的值是负数\n");
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//
//	//判断和输出
//	if (num >= 0)
//	{
//		if (num == 0)
//			printf("输入的值是0\n");
//		else
//			printf("输入的值是正数\n");
//	}
//	else
//	{
//		printf("输入的值是负数\n");
//	}
//	return 0;
//}

//输入一个人的年龄
//如果年龄 < 18岁，打印"少年"
//如果年龄在18岁至44岁打印"青年"
//如果年龄在45岁至59岁打印"中老年"
//如果年龄在60岁至89岁打印"老年"
//如果90岁及以上打印"老寿星"

//
//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	//判断和输出
//	if (age < 18)
//		printf("少年\n");
//	else //age>=18
//	{
//		if (age <= 44)//18~44
//			printf("青年\n");
//		else //>44
//		{
//			if (age <= 59) //45~59
//				printf("中老年\n");
//			else //>59
//			{
//				if (age <= 89)
//					printf("老年\n");
//				else//>89
//					printf("老寿星\n");
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	//判断和输出
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)//18~44
//		printf("青年\n");
//	else if (age <= 59) //45~59
//		printf("中老年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else//>89
//		printf("老寿星\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int num = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}




