#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//设计一个小程序来判断当前机器的字节序

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)//int*
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
//

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)//int*
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//返回1是小端，返回0是大端
//}
//
//int main()
//{
//	if(check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
//


#include <stdio.h>

//int main()
//{
//    //-1
//    //10000000000000000000000000000001
//    //11111111111111111111111111111110
//    //11111111111111111111111111111111
//    //11111111111111111111111111111111 - a
//    //10000000000000000000000000000000
//    //10000000000000000000000000000001
//    char a = -1;
//    signed char b = -1;
//    //11111111111111111111111111111111
//    //00000000000000000000000011111111
//    //00000000000000000000000011111111
//    //00000000000000000000000011111111
//    //
//    unsigned char c = -1;
//
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    //-1 -1 255
//    //%d - 打印有符号的整数
//    //%u - 打印的是无符号的整数
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    //10000000000000000000000010000000
//    //11111111111111111111111101111111
//    //11111111111111111111111110000000 - 补码
//    //10000000 - a
//    //11111111111111111111111110000000
//    //
//
//    printf("%u\n", a);
//    //%u 打印无符号的整数，%u的角度，它认为内存中存储的是无符号的整数
//    //
//    return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//    char a = 128;//-128
//    //00000000000000000000000010000000
//    //10000000 - 1
//    //11111111111111111111111110000000
//    //
//    printf("%u\n", a);
//    return 0;
//}
//

//
//int main()
//{
//	unsigned int num = -10;
//	printf("%d\n", num);
//	printf("%u\n", num);
//
//	return 0;
//}
//


//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%zd", strlen(a));
//    return 0;
//}

#include <stdio.h>
//
//unsigned char i = 0;//全局变量
////0~255
//
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//
//    return 0;
//}
//
//


#include <stdio.h>
#include <windows.h>
//
//int main()
//{
//    unsigned int i;
//
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        Sleep(100);
//    }
//    return 0;
//}
//
//

#include <stdio.h>
//X86环境 小端字节序
//
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//    printf("%x,%x", ptr1[-1], *ptr2);
//    //%x 是16进制的形式打印
//
//    return 0;
//}

#include <stdio.h>

//int main()
//{
//    int n = 9;
//    //0 00000000 00000000000000000001001
//    //
//    float* pFloat = (float*)&n;
//    printf("n的值为：%d\n", n);//9
//    printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//    //0.00000000000000000001001 * 2^-126
//    //
//    *pFloat = 9.0;
//    //1001.0
//    //1.001 * 2^3
//    //(-1)^0 * 1.001 * 2^3
//    //S=0
//    //M=1.001
//    //E=3
//    //
//    //01000001000100000000000000000000
//    //
//    printf("n的值为：%d\n", n);//1,091,567,616
//    printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//    return 0;
//}

//
//int main()
//{
//	float f = 5.5f;
//	//S =0
//	//E = 2
//	//M = 1.011
//	//0100 0000 1011 0000 0000000000000000
//	//0x40 b0 00 00
//	//
//	return 0;
//}
//


//书:书名，作者、定价、书号,....

//结构体类型
struct Book
{
	char book_name[20];
	char author[20];
	float price;
	char id[19];
}b4, b5, b6;//结构体变量


int main()
{
	struct Book b1 = {"鹏哥C语言", "鹏哥", 38.8f, "PG20240520"};
	struct Book b2 = {.id="DG20240520", .book_name="蛋哥Linux", .author="蛋哥", .price=55.5f};
	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);//.  ->
	printf("%s %s %f %s\n", b2.book_name, b2.author, b2.price, b2.id);//.  ->

	return 0;
}








