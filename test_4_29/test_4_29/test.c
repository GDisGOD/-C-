#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//������
//const���α�����ʱ�򣬽У�������
//��������εı��������ϻ��Ǳ�����ֻ�ǲ��ܱ��޸�
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
//	//C99 ֮ǰ��֧�ֱ䳤���飬�����С����Ҫ�������������ʽ��ָ���ģ������Ǳ���
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
//	//const ����ָ�����
//	//����*����ߣ����Ƶ���ָ��ָ������ݣ�Ҳ���ǲ���ͨ��ָ��������޸�����ָ�������
//	//����ָ����������ǿ��Ըı��
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
//	//const ����ָ�����
//	//����*���ұߣ����Ƶ���ָ���������ָ�벻�ܸı�����ָ��
//	//���ǿ���ͨ��ָ������޸�����ָ�������
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
//	//const ����ָ�����
//	//����*���ұߣ����Ƶ���ָ���������ָ�벻�ܸı�����ָ��
//	//���ǿ���ͨ��ָ������޸�����ָ�������
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

//дһ�����������ַ����ĳ���
#include <string.h>

//size_t ��һ���޷�������

//size_t my_strlen(char* p)
//{
//	size_t count = 0;//������
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
//	size_t len = my_strlen(arr);//��������ʵ��������Ԫ�صĵ�ַ arr == &arr[0]
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
//	//һ���ֲ���������ʼ���Ļ�������ֻ�������
//	int* p;//p�Ǿֲ�����������û�г�ʼ������ֵ�����ֵ�ģ������p�д�ŵ�ֵ������ַ
// //�����ò������ͻ��γɷǷ�����
//	*p = 20;//p����Ұָ��
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
//	//int* p = &a;//��һ����ȷ�ĵ�ַ
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

//���ַ�������
//����sָ����ַ������������޸�
//size_t my_strlen(const char* s)
//{
//	size_t count = 0;
//	assert(s != NULL);//���ָ��s�Ƿ���Ч
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


//дһ�������������������ͱ�����ֵ

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
//	//����a��b��ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap1(a, b);//��ֵ����
//	printf("������a=%d b=%d\n", a, b);
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
//	//����a��b��ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//��ַ����
//	printf("������a=%d b=%d\n", a, b);
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
	int c = Add(a, b);//��ֵ
	printf("%d\n", c);
	return 0;
}