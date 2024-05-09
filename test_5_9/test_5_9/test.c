#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//void bubble_sort(int arr[], int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ���ڲ��������Ƚ�
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
//	//���� - ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//
//void qsort(void* base, //ָ�����������ĵ�һ��Ԫ�ص�ָ��
//           size_t num, //baseָ�������е�Ԫ�ظ���
//           size_t size,//baseָ���������һ��Ԫ�صĴ�С����λ���ֽ�
//           int (*cmp)(const void*, const void*) //����ָ�� - ���ݺ����ĵ�ַ
//           //
//          );
//



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////�ṹ���Ա���ʲ�����
//// .    �ṹ�����.��Ա��
//// ->   �ṹ��ָ��->��Ա��
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

//�Ժ����ķ���ֵ��Ҫ��
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

//����qsort ��������������
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

//����qsort ��������ṹ������
//�������ֱȽ������ṹ������
//�������ַ������ַ����Ƚ�ʽʹ��strcmp������
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
	//����
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ���ڲ��������Ƚ�
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			//if (arr[j] > arr[j + 1])
			//�Ƚ�����Ԫ��
			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//��������Ԫ��
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
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)
//2. &������
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%zd\n", sizeof(a));//16
//	//������a��������sizeof�ڲ���a��ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	printf("%zd\n", sizeof(a + 0));//�����a����������ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
//	//����sizeof���������Ԫ�ص�ַ�Ĵ�С 4/8
//	printf("%zd\n", sizeof(*a));//4 �����a����������ʾ��Ԫ�صĵ�ַ,*a ������Ԫ�أ�����a[0]
//	//*a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a + 1));//�����a����������ʾ��Ԫ�صĵ�ַ,a+1�ǵڶ���Ԫ�صĵ�ַ��&a[1]��
//	//������ǵ�ַ�Ĵ�С 4/8
//	printf("%zd\n", sizeof(a[1]));//4
//	printf("%zd\n", sizeof(&a));//
//	//&a - �����������a��ʾ�������飬&a����������ĵ�ַ
//	//����ĵ�ַҲ�ǵ�ַ���ǵ�ַ���� 4/8 ���ֽڵĳ���
//	printf("%zd\n", sizeof(*&a));//
//	//1. *&a,�����*��&�����ˣ�����sizeof(*&a) == sizeof(a) 16
//	//2. &a - ��������ĵ�ַ�������ǣ�int(*)[4]��*&a ���ʵľ����������
//	printf("%zd\n", sizeof(&a + 1));//
//	//&a������ĵ�ַ��&a+1�����������������Ǹ�λ�õĵ�ַ
//	//&a+1�ǵ�ַ����ַ����4/8���ֽ�
//	printf("%zd\n", sizeof(&a[0]));//4/8
//	printf("%zd\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ 4/8
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
	printf("%zd\n", strlen(arr));//���ֵ
	printf("%zd\n", strlen(arr + 0));//���ֵ
	//printf("%zd\n", strlen(*arr));//arr����������ʾ��Ԫ�صĵ�ַ
	//*arr ����Ԫ�� -- 'a' - 97 ,���ݸ�strlen��strlen ����Ϊ97���ǵ�ַ��Ȼ��ȥ�����ڴ�
	//err -- ������
	//printf("%zd\n", strlen(arr[1]));//'b' -98 //err
	printf("%zd\n", strlen(&arr));//���ֵ
	printf("%zd\n", strlen(&arr + 1));//���ֵ
	printf("%zd\n", strlen(&arr[0] + 1));//���ֵ

	return 0;
}