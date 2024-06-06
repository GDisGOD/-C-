#define    _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = a + 1;//b=11 a=10
//	int b = ++a;//b=11, a=11
//
//	return 0;
//}

//写一个宏，求两个数的较大值

//#define MAX(x, y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int m = MAX(a++, b++);
//	int m = ((a++) > (b++) ? (a++) : (b++));
//	       //10    > 20    ?  x    :  21  
//	       // a=11 b=22
//	printf("%d\n", m);//?
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#define MAX(x, y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	//10    > 20    ?  x    :  21  
//	// a=11 b=22
//	printf("%d\n", m);//?
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//#define M 100
//#define N M+2
//
//#define MAX(x, y)  ((x)>(y)?(x):(y))
//
//
//int main()
//{
//	int m = MAX(M, 15);
//	printf("MAX(M, 15)");
//
//	return 0;
//}

////宏
//#define MAX(x, y)  ((x)>(y)?(x):(y))
//
////函数
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int m = MAX(3+5, b);
//	//int m = ((10) > (20) ? (10) : (20));
//	//printf("%d\n", m);
//
//	int m = Max(3+5, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//#define MALLOC(n, type)    (type*)malloc(n*sizeof(type))
//
//int main()
//{
//	//int *p = (int*)malloc(10*sizeof(int));
//
//	int *p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//
//	return 0;
//}



//void print(int n)
//{
//	printf("the value of n is %d\n", n);
//}

//#define PRINT(format, n)    printf("the value of " #n " is " format"\n", n)

//int main()
//{
//	int a = 10;
//	PRINT("%d", a);
//	//printf("the value of " "a" " is " "%d""\n", a);
//	//printf("the value of n is " "%d""\n", a);
//	//printf("the value of a is %d\n", a);
//
//	int b = 20;
//	PRINT("%d", b);
//	//printf("the value of b is %d\n", b);
//
//	float f = 5.5f;
//	PRINT("%f", f);
//	//printf("the value of " "f" " is " "%f""\n", f)
//	//printf("the value of n is " "%f""\n", f);
//	//printf("the value of f is %f\n", f);
//
//
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello"" world\n");
//
//	return 0;
//}



//生成函数的模板
//#define GENERIC_MAX(type) \
//type type##_max(type x, type y)\
//{\
//	return x>y?x:y;\
//}
//
////使用上面的模板定义函数
////int_max
//GENERIC_MAX(int)
////float_max
//GENERIC_MAX(float)
//
//int main()
//{
//	//
//	printf("%d\n", int_max(3, 5));
//	printf("%f\n", float_max(3.0, 5.0));
//
//	return 0;
//}


//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}

#if 0
#define M 2

int main()
{
	printf("hehe\n");
	return 0;
}
#endif

//int main()
//{
//	int a = 2;
//#if a==2 //err
//	printf("hehe");
//#endif
//	return 0;
//}

//#define M 3
//int main()
//{
//#if M==1
//	printf("hehe\n");
//#elif M==3
//	printf("haha\n");
//#elif M == 4
//	printf("heihei\n");
//#else
//	printf("呵呵\n");
//#endif
//	return 0;
//}
//

//#define ZHANGSAN 100
//
//int main()
//{
//#if defined(ZHANGSAN)
//	printf("zhangsan\n");
//#endif
//	return 0;
//}


//#define ZHANGSAN 100
//
//int main()
//{
//#ifdef ZHANGSAN
//	printf("zhangsan\n");
//#endif
//	return 0;
//}
//
//

//#define ZHANGSAN 100
//
//int main()
//{
//#if !defined(ZHANGSAN)
//	printf("zhangsan\n");
//#endif
//	return 0;
//}


//#define ZHANGSAN 100

//int main()
//{
//#ifndef ZHANGSAN
//	printf("zhangsan\n");
//#endif
//	return 0;
//}
//

//跨平台性代码的编译


//#include "test.h"
//
//int main()
//{
//
//	return 0;
//}

