//#include <stdio.h>

// #define M 100+200
// //呵呵
// int main()
// {
     
//     int a = M;
//     printf("hehe\n");
//     return 0;
// }

// int main()
// {
// 	printf("%s\n", __FILE__);
// 	printf("%d\n", __LINE__);
// 	printf("%s\n", __DATE__);
// 	printf("%s\n", __TIME__);
// 	printf("%d\n", __STDC__);//说明gcc完全遵循ANSI C

// 	return 0;
// }

// #define M 100
// #define STR "hehe"
// #define reg register

// int main()
// {
//     int arr[M] = {0};
//     int a = M;
//     printf("%d\n", M);
//     printf("%s\n", STR);
//     register int num = 0;
//     reg int num2 = 0;
//     return 0;
// }




// #define CASE break;case

// int main()
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	switch (n)
// 	{
// 	case 1:
// 		//
// 	CASE 2:
// 		//
// 	CASE 3:
// 		//..
// 	}
// 	return 0;
// }

//#define 定义符号的时候，最后不要加上分号
// #define M 100;

// int main()
// {
//     int a = M;
//     printf("%d\n", M);

//     int b = 0;
//     if(a>3)
//      b = M;
//     else
//      b = -1;

//     return 0;
// }


//实现一个宏，求平方

// #define SQUARE(n)  (n)*(n)

// int main()
// {
//     //int x = 0;
//     //scanf("%d", &x);
//     int ret = SQUARE(5+1);
//     printf("%d\n", ret);

//     return 0;
// }

//写一个代码求一个数的2倍
// #define DOUBLE(x) ((x)+(x))

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret= DOUBLE(n);
//     printf("%d\n", ret);
    
//     ret = 10*DOUBLE(5);
//     printf("%d\n", ret);

//     return 0;
// }

// #define MAX(x, y)  ((x)>(y)?(x):(y))

// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int m = MAX(a, b);
// 	printf("%d\n", m);

// 	return 0;
// }


//#define PRINT(format, n)    printf("the value of " #n " is " format"\n", n)

// int main()
// {
// 	int a = 10;
// 	PRINT("%d", a);

// 	int b = 20;
// 	PRINT("%d", b);

// 	float f = 5.5f;
// 	PRINT("%f", f);


// 	return 0;
// }

// //生成函数的模板
// #define GENERIC_MAX(type) \
// type type##_max(type x, type y)\
// {\
// 	return x>y?x:y;\
// }

// //使用这个模板生成名字叫：int_max的函数
// GENERIC_MAX(int)

// //使用这个模板生成名字叫：float_max的函数
// GENERIC_MAX(float)

// //使用这个模板生成名字叫：char_max的函数
// GENERIC_MAX(char)


// int main()
// {

// 	return 0;
// }


// int main()
// {
//     int arr[SZ] = {0};
//     int i = 0;
//     for(i=0; i<SZ; i++)
//     {
//         arr[i] = i+1;
//     }
//     for(i=0; i<SZ; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// #define M 3

// int main()
// {
// #if M==2
// 	printf("hehe\n");
// #endif


// 	return 0;
// }

#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"

int main()
{

    return 0;
}
