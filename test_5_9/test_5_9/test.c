#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟内部的两两比较
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,1,7,9,4,2,6,5,8,0 };
//	//排序 - 升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//
//void qsort(void* base, //指向待排序数组的第一个元素的指针
//           size_t num, //base指向数组中的元素个数
//           size_t size,//base指向的数组中一个元素的大小，单位是字节
//           int (*cmp)(const void*, const void*) //函数指针 - 传递函数的地址
//           //
//          );
//



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////结构体成员访问操作符
//// .    结构体变量.成员名
//// ->   结构体指针->成员名
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	printf("%s %d\n", s.name, s.age);
//
//	struct Stu * ps = &s;
//	printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//
//	return 0;
//}


void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//对函数的返回值有要求
//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

//测试qsort 来排序整型数据
void test1()
{
	int arr[] = { 3,1,7,9,4,2,6,5,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

struct stu
{
	char name[20];
	int age;
};

//测试qsort 函数排序结构体数据
//按照名字比较两个结构体数据
//名字是字符串，字符串比较式使用strcmp函数的
//
#include <string.h>

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}

void test2()
{
	struct stu arr[] = { {"zhangsan", 20},{"lisi",35},{"wangwu", 18}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}


int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
}

void test3()
{
	struct stu arr[] = { {"zhangsan", 20},{"lisi",35},{"wangwu", 18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

void Swap(char*buf1, char*buf2, size_t width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;

		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟内部的两两比较
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			//if (arr[j] > arr[j + 1])
			//比较两个元素
			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//交换两个元素
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test4()
{
	int arr[] = { 3,1,7,9,4,2,6,5,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

void test5()
{
	struct stu arr[] = { {"zhangsan", 20},{"lisi",35},{"wangwu", 18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

void test6()
{
	struct stu arr[] = { {"zhangsan", 20},{"lisi",35},{"wangwu", 18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	test6();
//	return 0;
//}
//
//




//
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//
//	int arr[10] = { 100,200 };
//	printf("%zd\n", sizeof(arr));
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//
//	printf("%zd\n", sizeof(arr1));
//	printf("%zd\n", sizeof(arr2));
//
//	return 0;
//}
//


//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,0};
//	//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	printf("%zd\n", strlen(arr));
//
//	return 0;
//}
//
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)
//2. &数组名
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%zd\n", sizeof(a));//16
//	//数组名a单独放在sizeof内部，a表示整个数组，计算的是整个数组的大小，单位是字节
//	printf("%zd\n", sizeof(a + 0));//这里的a是数组名表示首元素的地址，a+0还是首元素的地址
//	//这里sizeof计算的是首元素地址的大小 4/8
//	printf("%zd\n", sizeof(*a));//4 这里的a是数组名表示首元素的地址,*a 就是首元素，就是a[0]
//	//*a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a + 1));//这里的a是数组名表示首元素的地址,a+1是第二个元素的地址（&a[1]）
//	//计算的是地址的大小 4/8
//	printf("%zd\n", sizeof(a[1]));//4
//	printf("%zd\n", sizeof(&a));//
//	//&a - 这里的数组名a表示整个数组，&a是整个数组的地址
//	//数组的地址也是地址，是地址就是 4/8 个字节的长度
//	printf("%zd\n", sizeof(*&a));//
//	//1. *&a,这里的*和&抵消了，所以sizeof(*&a) == sizeof(a) 16
//	//2. &a - 这是数组的地址，类型是：int(*)[4]，*&a 访问的就是这个数组
//	printf("%zd\n", sizeof(&a + 1));//
//	//&a是数组的地址，&a+1是跳过整个数组后的那个位置的地址
//	//&a+1是地址，地址都是4/8个字节
//	printf("%zd\n", sizeof(&a[0]));//4/8
//	printf("%zd\n", sizeof(&a[0] + 1));//第二个元素的地址 4/8
//
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	return 0;
//}
#include <string.h>

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", strlen(arr));//随机值
	printf("%zd\n", strlen(arr + 0));//随机值
	//printf("%zd\n", strlen(*arr));//arr是数组名表示首元素的地址
	//*arr 是首元素 -- 'a' - 97 ,传递给strlen后，strlen 会认为97就是地址，然后去访问内存
	//err -- 程序奔溃
	//printf("%zd\n", strlen(arr[1]));//'b' -98 //err
	printf("%zd\n", strlen(&arr));//随机值
	printf("%zd\n", strlen(&arr + 1));//随机值
	printf("%zd\n", strlen(&arr[0] + 1));//随机值

	return 0;
}