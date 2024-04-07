#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a >= b)//8 5
//		printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a != b)//3 3
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = (5 == 5);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//= ==
//	//当一个变量和一个常量比较相等的时候，应该怎么写呢？
//	//建议将常量放在==的左边
//	int a = 5;
//	if (5 == a)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 7;
//	int c = 4;
//
//	//if (a < b < c)
//	//{
//	//	printf("hehe\n");
//	//}
//	//&& - 并且
//	if (a < b && b < c)
//	{
//
//	}
//
//	return 0;
//}

//我们输入一个年龄，如果年龄在18岁~36岁之间，我们输出青年

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);//
//	//if (18 <= age <= 36)
//	if(age>=18 && age<=36)
//		printf("青年\n");
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	b = (a > 5 ? 3 : -3);
//
//	return 0;
//}


//使用条件表达式实现找两个数中较大值。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a>b ? a : b);
//	printf("m = %d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	scanf("%d", &flag);//0
//	if (!flag)//flag为假要做什么事
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//3~5月 是春天
//1~12
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬季\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//	{
//		printf("%d 是闰年\n", year);
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	if ((year % 4 == 0) && (year % 100 != 0))
//	{
//		printf("%d 是闰年\n", year);
//	}
//	if (year % 400 == 0)
//	{
//		printf("%d 是闰年\n", year);
//	}
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = (a++ && ++b && d++);
//
//    i = a++||++b||d++;
//
//
//    printf("i = %d a = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);
//
//    return 0;
//}
//


//输入任意一个整数值，计算除3之后的余数
//0 1 2
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("余数是0\n");
//	else if(n%3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a = 1;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	float n = 0.0;
//	int a = 1;
//	scanf("%f", &n);
//	switch (n)//err
//	{
//	case 1.0://err
//		break;
//	
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'a':
//		break;
//	case 'b':
//		break;
//	//...
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误，输入的值应该在1~7的范围\n");
//		break;
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int n = 10;
//	while (n > 0)
//		printf("hehe\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d ", i);
//		i++;//i=i+1
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		i++;//i=i+1
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)//while(n!=0)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d ", i);
//		i++;//i=i+1
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int i = 0;
//	for (i=1; i<=10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//

//计算1~100之间3的倍数的数字之和

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//printf("%d ", i);
//		//判断i是否是3的倍数
//		if (i % 3 == 0)
//			sum += i;//sum = sum + i;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		sum += i;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//


//使用 do while 在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i<=10);
//
//	return 0;
//}


//输入一个正整数，计算这个整数是几位数？
//1
//12
//123
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);//123
//
//	do
//	{
//		count++;
//		n = n / 10;
//	} while (n);
//
//	printf("%d\n", count);
//
//	return 0;
//}
//

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for (i=1; i<=10; i++)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		i++;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	while (i<=10);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	//死循环
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}



int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;

		printf("%d ", i);
	}

	return 0;
}
