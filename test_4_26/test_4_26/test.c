#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = a + b;
//
//	char a = 20;
//	//
//	//00000000000000000000000000010100
//	//00010100 - a
//	//
//	char b = 130;
//	//00000000000000000000000010000010
//	//10000010 - b
//
//	char c = a + b;
//	//00000000000000000000000000010100 - a
//	//11111111111111111111111110000010 - b
//	//11111111111111111111111110010110 //截断
//	//10010110 - c
//	//11111111111111111111111110010110
//	//10000000000000000000000001101001
//	//10000000000000000000000001101010
//	//
//	//%d - 打印有符号的整数
//	//
//	printf("%d\n", c);//-106
//
//	return 0;
//}
//
//int main()
//{
//    int i = 10;
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("i = %d\n", i);
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//
//int main()
//{
//    int answer;
//    //2 3 4
//    answer = fun() - fun() * fun();
//    //
//    printf("%d\n", answer);//输出多少？
//
//    return 0;
//}
//
//


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//
//    printf("%d\n", ret);//?
//    printf("%d\n", i);//4
//    return 0;
//}
//

//int main()
//{
//	int a = 20;
//	//变量创建的本质其实是在内存中申请空间
//	//向内存申请4个字节的空间，用来存放20这个数值
//	//这4个字节，每个字节都有编号(地址)
//	//变量的名字仅仅是给程序员看的，编译器不看名字，编译器是通过地址找内存单元的
//	//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	//&a;//&--取地址操作符，拿到变量a的地址
//	printf("%p\n", &a);
//	int *   pa = &a;//pa是一个变量，这个变量pa是用来存放地址(指针)的，pa叫指针变量
//
//	return 0;
//}
//


//int main()
//{
//	int a = 20;
//	//1
//	//int* pa = &a;
//	//*pa = 200;//* - 解引用操作符（间接访问操作符）
//
//	//2
//	//a = 200;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	////1. 指针变量是用来存放地址的,一个地址的存放需要大多空间，那么指针变量的大小就是多大
//	//printf("%zd\n", sizeof(p));//
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%zd\n", sizeof(pc));
//
//	return 0;
//}
//


//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//
//	return 0;
//}
//

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//
//

//
//int main()
//{
//	int a = 20;
//	int*  pa = &a;
//	char* pc = &a;
//
//	printf("&a = %p\n", &a);
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//
//	printf("&a+1 = %p\n", &a-1);
//	printf("pa+1 = %p\n", pa-1);
//	printf("pc+1 = %p\n", pc-1);
//
//	return 0;
//}

int main()
{
	int a = 10;
	//int* pa = &a;//int*
	//char* pc = &a;//int*
	char ch = 'w';


	void* pv1 = &a;//int*
	void* pv2 = &ch;//char*
	//*pv1 = 200;
	//pv1 + 1;

	return 0;
}