#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)
//2. &数组名 -- 这里的数组名表示整个数组，取出的是数组的地址
//


//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr));//数组名单独放在sizeof内部，计算的是数组的大小 - 7
//	printf("%zd\n", sizeof(arr + 0));//arr+0是数组首元素的地址，既然是地址，大小就是4/8个字节
//	printf("%zd\n", sizeof(*arr));//*arr 是首元素，sizeof(*arr) --1
//	printf("%zd\n", sizeof(arr[1]));//1
//	printf("%zd\n", sizeof(&arr));//&arr是数组的地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(&arr + 1));//&arr是数组的地址，&arr+1跳过了整个数组，指向了数组后的那个位置
//	//但是&arr+1还是地址，是地址大小就是4/8个字节
//
//	printf("%zd\n", sizeof(&arr[0] + 1));//?//&arr[0]是首元素的地址，&arr[0]+1是第二个元素的地址
//	//是地址就是4/8个字节
//
//	return 0;
//}
//

//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", strlen(arr));//arr 是首元素的地址，strlen是从第一个元素开始统计\0之前的字符的个数-6
//	printf("%d\n", strlen(arr + 0));//arr 是首元素的地址,arr+0还是首元素的地址 - 6
//	//printf("%d\n", strlen(*arr));//arr 是首元素的地址,*arr是首元素 -'a'-97, 97作为地址传给给了strlen
//	//但是97这个地址不能被访问 - 程序会崩溃
//	//printf("%d\n", strlen(arr[1]));//err - 程序崩溃
//	printf("%d\n", strlen(&arr));//6-&arr是数组的地址，数组的地址和数组首元素的地址是指向同一个位置的
//	//那么strlen也是从第一个元素的位置开始向后访问的
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zd\n", sizeof(p));//p是指针变量。计算的是指针变量p的大小，4/8个字节
//	printf("%zd\n", sizeof(p + 1));//p+1 是第二个元素的地址， 地址的大小就是4/8个字节
//	printf("%zd\n", sizeof(*p));//1 - p的类型是char*,所以*p只能访问1个字节
//	printf("%zd\n", sizeof(p[0]));//p[0] --> *(p+0) -- *p -- 1个字节
//	printf("%zd\n", sizeof(&p));//&p是指针变量p的地址，也是地址，是地址就是4/8个字节
//	//&p -- char** -- 二级指针
//	printf("%zd\n", sizeof(&p + 1));//&p是p的地址，&p+1是跳过p变量，指向了p的后边
//	//&p+1是地址，就是4/8个字节
//	printf("%zd\n", sizeof(&p[0] + 1));//&p[0] + 1 就是b的地址
//	//p[0]-- *(p+0) -- *p
//	//
//
//	return 0;
//}
#include <string.h>

//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//*p-'a'-97 - 程序崩溃
//	//printf("%d\n", strlen(p[0]));//p[0]---*(p+0) -- *p -- 程序崩溃
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//48 - a作为数组名，单独放在sizeof内部了，a表示的是整个数组,计算的是整个数组的大小，单位是字节
//	printf("%zd\n", sizeof(a[0][0]));//4 -  a[0][0]是第一行第一个元素，大小是4个字节
//	printf("%zd\n", sizeof(a[0]));//16- a[0]是第一行的数组名，单独放在sizeof内部，计算的是数组的大小 4*4 = 16个字节
//	printf("%zd\n", sizeof(a[0] + 1));//a[0]是第一行的数组名,但是没有单独放在sizeof内部，
//	//那么只能是数组首元素的地址，那就是第一行第一个元素的地址 - &a[0][0]
//	//a[0]+1 ==  &a[0][0]+1 == &a[0][1]
//	//地址的大小 - 4/8
//	printf("%zd\n", sizeof(*(a[0] + 1)));//*(a[0] + 1) 是第一行第二个元素，大小是4个字节
//	printf("%zd\n", sizeof(a + 1));//a是二维数组的数组名，并没有单独放在sizeof内部，a表示首元素的地址-也就是第一行的地址
//	//a+1 是第二行的地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(*(a + 1)));//16
//	//1. *(a+1)--a[1]--是第二行的数组名，单独放在sizeof内部，计算的是第二行的大小
//	//2. a+1是第二行的地址，类型是int(*)[4],数组指针，解引用访问的是这个数组，大小是16个字节
//
//	printf("%zd\n", sizeof(&a[0] + 1));//4/8
//	//a[0]是第1行的数组名，&数组名其实就是第一行的地址，&a[0]+1就是第二行的地址,是地址就是4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//16
//	printf("%zd\n", sizeof(*a));//16
//	//1. a - 首元素的地址（第一行的地址），*a是第一行了
//	//2. *a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a[3]));//16
//	//sizeof内部的表达式是不会真实计算的
//	//a[3]- 第四行的数组名 int [4]
//
//	return 0;
//}
//


//
//int main()
//{
//	short s = 8;//2
//	int n = 12;//4
//	//printf("%zd\n", sizeof(s = n + 5));
//	//s = n + 5;
//	printf("%d\n", s);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
//

//在X86环境下
//假设结构体的大小是20个字节
//程序输出的结果是啥？
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//} * p = (struct Test*)0x100000;
//
//
//int main()
//{
//    printf("%p\n", p + 0x1);//p是结构体指针,+1就是跳过一个结构体，一个结构体是20个字节
//    //0x00100014
//    printf("%p\n", (unsigned long)p + 0x1);//整数+1-- 0x00100001
//    printf("%p\n", (unsigned int*)p + 0x1);//+1跳过一个unsigned int类型的变量，是4个字节
//    //0x00100004
//
//    return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//
//    return 0;
//}

//假设环境是x86环境，程序输出的结果是啥？
//#include <stdio.h>
//
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//    return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}


#include <stdio.h>
int main()
{
    char* c[] = { "ENTER","NEW","POINT","FIRST" };
    char** cp[] = { c + 3,c + 2,c + 1,c };
    char*** cpp = cp;

    printf("%s\n", **++cpp);
    printf("%s\n", *-- * ++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);

    return 0;
}






