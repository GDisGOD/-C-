#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = &arr[0];
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr     = %p\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);
//
//	printf("arr       = %p\n", arr);
//	printf("arr+1     = %p\n", arr+1);
//
//	printf("&arr      = %p\n", &arr);
//	printf("&arr+1    = %p\n", &arr+1);
//
//
//	return 0;
//}
//
//


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	int *p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);//p+i ���±�ΪiԪ�صĵ�ַ
//	}
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);//p+i ���±�ΪiԪ�صĵ�ַ
//	}
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	int* p = arr;
//
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", p + i);//p+i ���±�ΪiԪ�صĵ�ַ
//		scanf("%d", arr + i);
//	}
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		printf("%d ", i[arr]);
//	}
//
//	return 0;
//}

//���鴫�ε�ʱ���βο���д�����飬Ҳ����д��ָ��
//д���������ʽ����򵥣���Ϊ�˷�����⣬���׽��������﷨
//���Ǽ�ʹд���������ʽ�������ϻ���ָ��
//        int* arr
//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//
//void test(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);//arr[i] == *(arr+i)
//		printf("%d ", *(arr+i));//arr[i] == *(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);//10
//
//	test(arr, sz1);//arr ������������������ʾ������Ԫ�صĵ�ַ
//	//���鴫�εı��ʣ����ݵ���������Ԫ�صĵ�ַ
//	//�����βμ�ʹд���������ʽ��������Ҳ��һ��ָ�����
//	//
//	return 0;
//}
//
//
//
//void input(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//
//int count = 0;
//void bubble_sort(int *arr, int sz)
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����Ѿ�����˳��
//		//ÿһ���ڲ��ıȽ�
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			count++;
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;//����������
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
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
//	int arr[10] = { 0 };
//	//����һЩֵ
//	//1 2 3 4 5 6 7 8 9 10
//	//9 8 7 6 5 4 3 2 1 0
//	//2 1 9 7 0 3 4 8 5 6 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//
//	//���� - дһ�������������������ų�����
//	bubble_sort(arr, sz);//ʹ��ð������
//	print_arr(arr, sz);
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//
//	int* pa = &a; //pa��һ��ָ�����
//
//	int** ppa = &pa;//ppa���Ƕ���ָ�����
//
//	printf("%d\n", **ppa);
//	**ppa = 200;
//	printf("%d\n", a);//200
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	int* arr[3] = { &a, &b, &c };
//	//              0   1   2
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	
//	int* arr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", *pc);
//
//	return 0;
//}


//int main()
//{
//	const char * p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);//ʹ��%s��ӡ�ַ�����ʱ��ֻ��Ҫ�ṩ���ַ��ĵ�ַ����
//
//	//*p = 'q';
//
//	//char arr[] = "abcdef";
//	//char* p = arr;
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");//1
//    else
//        printf("str1 and str2 are not same\n");//2
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//3
//    else
//        printf("str3 and str4 are not same\n");//4
//
//    return 0;
//}




//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	int (*p) [10] = &arr;//p��������ָ�룬p�д�ŵ�������ĵ�ַ
//	//int(*)[10]  = int(*)[10]
//
//	//arr -- int*            arr+1 ����4���ֽ�
//	//&arr[0]  -- int*       &arr[0]+1����4���ֽ�
//	//&arr -- int(*)[10]     &arr+1 ����40���ֽ�
//	//
//	int * ptr;
//	return 0;
//}

int main()
{
	char* ch[5];

	char* (*pc)[5] = &ch;



	return 0;
}