#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = a + b;
//
//	char a = 20;
//	//
//	//00000000000000000000000000010100
//	//00010100 - a
//	//
//	char b = 130;
//	//00000000000000000000000010000010
//	//10000010 - b
//
//	char c = a + b;
//	//00000000000000000000000000010100 - a
//	//11111111111111111111111110000010 - b
//	//11111111111111111111111110010110 //�ض�
//	//10010110 - c
//	//11111111111111111111111110010110
//	//10000000000000000000000001101001
//	//10000000000000000000000001101010
//	//
//	//%d - ��ӡ�з��ŵ�����
//	//
//	printf("%d\n", c);//-106
//
//	return 0;
//}
//
//int main()
//{
//    int i = 10;
//    i = i-- - --i * (i = -3) * i++ + ++i;
//    printf("i = %d\n", i);
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//
//int main()
//{
//    int answer;
//    //2 3 4
//    answer = fun() - fun() * fun();
//    //
//    printf("%d\n", answer);//������٣�
//
//    return 0;
//}
//
//


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//
//    printf("%d\n", ret);//?
//    printf("%d\n", i);//4
//    return 0;
//}
//

//int main()
//{
//	int a = 20;
//	//���������ı�����ʵ�����ڴ�������ռ�
//	//���ڴ�����4���ֽڵĿռ䣬�������20�����ֵ
//	//��4���ֽڣ�ÿ���ֽڶ��б��(��ַ)
//	//���������ֽ����Ǹ�����Ա���ģ��������������֣���������ͨ����ַ���ڴ浥Ԫ��
//	//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	//&a;//&--ȡ��ַ���������õ�����a�ĵ�ַ
//	printf("%p\n", &a);
//	int *   pa = &a;//pa��һ���������������pa��������ŵ�ַ(ָ��)�ģ�pa��ָ�����
//
//	return 0;
//}
//


//int main()
//{
//	int a = 20;
//	//1
//	//int* pa = &a;
//	//*pa = 200;//* - �����ò���������ӷ��ʲ�������
//
//	//2
//	//a = 200;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	////1. ָ�������������ŵ�ַ��,һ����ַ�Ĵ����Ҫ���ռ䣬��ôָ������Ĵ�С���Ƕ��
//	//printf("%zd\n", sizeof(p));//
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%zd\n", sizeof(pc));
//
//	return 0;
//}
//


//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//
//	return 0;
//}
//

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//
//

//
//int main()
//{
//	int a = 20;
//	int*  pa = &a;
//	char* pc = &a;
//
//	printf("&a = %p\n", &a);
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//
//	printf("&a+1 = %p\n", &a-1);
//	printf("pa+1 = %p\n", pa-1);
//	printf("pc+1 = %p\n", pc-1);
//
//	return 0;
//}

int main()
{
	int a = 10;
	//int* pa = &a;//int*
	//char* pc = &a;//int*
	char ch = 'w';


	void* pv1 = &a;//int*
	void* pv2 = &ch;//char*
	//*pv1 = 200;
	//pv1 + 1;

	return 0;
}