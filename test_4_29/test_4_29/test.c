#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//常属性
//const修饰变量的时候，叫：常变量
//这个被修饰的变量本质上还是变量，只是不能被修改
//

//int main()
//{
//	const int num = 100;
//	num = 200;//err
//
//	printf("%d\n", num);
//
//	return 0;
//}



//int main()
//{
//	//int arr[10] = {0};
//	const int n = 10;
//	//C99 之前不支持变长数组，数组大小是需要常量、常量表达式来指定的，不能是变量
//	int arr[n];
//
//	return 0;
//}
//


//int main()
//{
//	const int n = 10;
//	//n = 20;
//
//	int* p = &n;
//	*p = 200;
//
//	printf("%d\n", n);
//
//	return 0;
//}
//


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int * p = &n;
//	*p = 20;//ok
//	p = &m;//ok
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int const * p = &n;
//	//const 修饰指针变量
//	//放在*的左边，限制的是指针指向的内容，也就是不能通过指针变量来修改它所指向的内容
//	//但是指针变量本身是可以改变的
//
//	*p = 20;//err
//	p = &m;//ok
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int * const p = &n;
//	//const 修饰指针变量
//	//放在*的右边，限制的是指针变量本身，指针不能改变它的指向
//	//但是可以通过指针变量修改它所指向的内容
//
//	*p = 20;//ok
//	p = &m;//err
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int const * const p = &n;
//	//const 修饰指针变量
//	//放在*的右边，限制的是指针变量本身，指针不能改变它的指向
//	//但是可以通过指针变量修改它所指向的内容
//
//	*p = 20;//err
//	p = &m;//err
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
//




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz-1];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//
//	return 0;
//}






//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}

//int main()
//{
//	char ch[6] = {0};
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &ch[5] - &arr[0]);//err
//
//	return 0;
//}

//写一个函数，求字符串的长度
#include <string.h>

//size_t 是一种无符号整型

//size_t my_strlen(char* p)
//{
//	size_t count = 0;//计数器
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//size_t my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//
//size_t my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end)
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);//数组名其实是数组首元素的地址 arr == &arr[0]
//	printf("%zd\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p<&arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	//一个局部变量不初始化的话，它的只是随机的
//	int* p;//p是局部变量，但是没有初始化，其值是随机值的，如果将p中存放的值当做地址
// //解引用操作符就会形成非法访问
//	*p = 20;//p就是野指针
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


#include <stdio.h>

//int* test()
//{
//    int n = 100;
//    return &n;
//}
//
//int main()
//{
//    int* p = test();
//    printf("%d\n", *p);
//    return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;//给一个明确的地址
//
//	int* p2 = NULL;
//	//*p2 = 200;//err
//
//	return 0;
//}

//#define NDEBUG
//#include <assert.h>
//
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	assert(p != NULL);
//
//	/*if (p != NULL)
//	{
//		*p = 200;
//	}*/
//
//	return 0;
//}

#include <assert.h>

//求字符串长度
//参数s指向的字符串不期望被修改
//size_t my_strlen(const char* s)
//{
//	size_t count = 0;
//	assert(s != NULL);//检测指针s是否有效
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数，交换两个整型变量的值

//void Swap1(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换a和b的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;
//
//	int* p = &a;
//	*p = 20;
//	return 0;
//}


//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;  //z=a;
//	*pa = *pb;//a=b;
//	*pb = z;  //b=z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换a和b的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);//传值
	printf("%d\n", c);
	return 0;
}