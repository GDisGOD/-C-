#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)
//2. &������ -- �������������ʾ�������飬ȡ����������ĵ�ַ
//


//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr));//��������������sizeof�ڲ��������������Ĵ�С - 7
//	printf("%zd\n", sizeof(arr + 0));//arr+0��������Ԫ�صĵ�ַ����Ȼ�ǵ�ַ����С����4/8���ֽ�
//	printf("%zd\n", sizeof(*arr));//*arr ����Ԫ�أ�sizeof(*arr) --1
//	printf("%zd\n", sizeof(arr[1]));//1
//	printf("%zd\n", sizeof(&arr));//&arr������ĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(&arr + 1));//&arr������ĵ�ַ��&arr+1�������������飬ָ�����������Ǹ�λ��
//	//����&arr+1���ǵ�ַ���ǵ�ַ��С����4/8���ֽ�
//
//	printf("%zd\n", sizeof(&arr[0] + 1));//?//&arr[0]����Ԫ�صĵ�ַ��&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	//�ǵ�ַ����4/8���ֽ�
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
//	printf("%d\n", strlen(arr));//arr ����Ԫ�صĵ�ַ��strlen�Ǵӵ�һ��Ԫ�ؿ�ʼͳ��\0֮ǰ���ַ��ĸ���-6
//	printf("%d\n", strlen(arr + 0));//arr ����Ԫ�صĵ�ַ,arr+0������Ԫ�صĵ�ַ - 6
//	//printf("%d\n", strlen(*arr));//arr ����Ԫ�صĵ�ַ,*arr����Ԫ�� -'a'-97, 97��Ϊ��ַ��������strlen
//	//����97�����ַ���ܱ����� - ��������
//	//printf("%d\n", strlen(arr[1]));//err - �������
//	printf("%d\n", strlen(&arr));//6-&arr������ĵ�ַ������ĵ�ַ��������Ԫ�صĵ�ַ��ָ��ͬһ��λ�õ�
//	//��ôstrlenҲ�Ǵӵ�һ��Ԫ�ص�λ�ÿ�ʼ�����ʵ�
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zd\n", sizeof(p));//p��ָ��������������ָ�����p�Ĵ�С��4/8���ֽ�
//	printf("%zd\n", sizeof(p + 1));//p+1 �ǵڶ���Ԫ�صĵ�ַ�� ��ַ�Ĵ�С����4/8���ֽ�
//	printf("%zd\n", sizeof(*p));//1 - p��������char*,����*pֻ�ܷ���1���ֽ�
//	printf("%zd\n", sizeof(p[0]));//p[0] --> *(p+0) -- *p -- 1���ֽ�
//	printf("%zd\n", sizeof(&p));//&p��ָ�����p�ĵ�ַ��Ҳ�ǵ�ַ���ǵ�ַ����4/8���ֽ�
//	//&p -- char** -- ����ָ��
//	printf("%zd\n", sizeof(&p + 1));//&p��p�ĵ�ַ��&p+1������p������ָ����p�ĺ��
//	//&p+1�ǵ�ַ������4/8���ֽ�
//	printf("%zd\n", sizeof(&p[0] + 1));//&p[0] + 1 ����b�ĵ�ַ
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
//	//printf("%d\n", strlen(*p));//*p-'a'-97 - �������
//	//printf("%d\n", strlen(p[0]));//p[0]---*(p+0) -- *p -- �������
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
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
//	printf("%zd\n", sizeof(a));//48 - a��Ϊ����������������sizeof�ڲ��ˣ�a��ʾ������������,���������������Ĵ�С����λ���ֽ�
//	printf("%zd\n", sizeof(a[0][0]));//4 -  a[0][0]�ǵ�һ�е�һ��Ԫ�أ���С��4���ֽ�
//	printf("%zd\n", sizeof(a[0]));//16- a[0]�ǵ�һ�е�����������������sizeof�ڲ��������������Ĵ�С 4*4 = 16���ֽ�
//	printf("%zd\n", sizeof(a[0] + 1));//a[0]�ǵ�һ�е�������,����û�е�������sizeof�ڲ���
//	//��ôֻ����������Ԫ�صĵ�ַ���Ǿ��ǵ�һ�е�һ��Ԫ�صĵ�ַ - &a[0][0]
//	//a[0]+1 ==  &a[0][0]+1 == &a[0][1]
//	//��ַ�Ĵ�С - 4/8
//	printf("%zd\n", sizeof(*(a[0] + 1)));//*(a[0] + 1) �ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%zd\n", sizeof(a + 1));//a�Ƕ�ά���������������û�е�������sizeof�ڲ���a��ʾ��Ԫ�صĵ�ַ-Ҳ���ǵ�һ�еĵ�ַ
//	//a+1 �ǵڶ��еĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(*(a + 1)));//16
//	//1. *(a+1)--a[1]--�ǵڶ��е�����������������sizeof�ڲ���������ǵڶ��еĴ�С
//	//2. a+1�ǵڶ��еĵ�ַ��������int(*)[4],����ָ�룬�����÷��ʵ���������飬��С��16���ֽ�
//
//	printf("%zd\n", sizeof(&a[0] + 1));//4/8
//	//a[0]�ǵ�1�е���������&��������ʵ���ǵ�һ�еĵ�ַ��&a[0]+1���ǵڶ��еĵ�ַ,�ǵ�ַ����4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//16
//	printf("%zd\n", sizeof(*a));//16
//	//1. a - ��Ԫ�صĵ�ַ����һ�еĵ�ַ����*a�ǵ�һ����
//	//2. *a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a[3]));//16
//	//sizeof�ڲ��ı��ʽ�ǲ�����ʵ�����
//	//a[3]- �����е������� int [4]
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

//��X86������
//����ṹ��Ĵ�С��20���ֽ�
//��������Ľ����ɶ��
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
//    printf("%p\n", p + 0x1);//p�ǽṹ��ָ��,+1��������һ���ṹ�壬һ���ṹ����20���ֽ�
//    //0x00100014
//    printf("%p\n", (unsigned long)p + 0x1);//����+1-- 0x00100001
//    printf("%p\n", (unsigned int*)p + 0x1);//+1����һ��unsigned int���͵ı�������4���ֽ�
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

//���軷����x86��������������Ľ����ɶ��
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






