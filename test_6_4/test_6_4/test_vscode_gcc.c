#include <stdio.h>

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
#define DOUBLE(x) ((x)+(x))

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret= DOUBLE(n);
    printf("%d\n", ret);
    
    ret = 10*DOUBLE(5);
    printf("%d\n", ret);

    return 0;
}