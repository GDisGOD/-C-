#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
//		//printf("%d ", i);
//		//ÿһ��ѭ�������������һ������
//		//�ж�i�Ƿ�������
//		//����2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//����i������
//		//printf("%d ", i);
//		//ÿһ��ѭ�������������һ������
//		//�ж�i�Ƿ�������
//		//����2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//sqrt ��һ���⺯�� - ����ƽ����
//math.h

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;//����i������
//		//printf("%d ", i);
//		//ÿһ��ѭ�������������һ������
//		//�ж�i�Ƿ�������
//		//����2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	if (1)
//		goto end;
//
//	printf("haha\n");
//
//end:
//	printf("end\n");
//
//	return 0;
//}
//
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//
//�ػ�����
//1. ��������������ʱ�򣬾Ϳ�ʼ����ʱ60��ػ�
//2. ��������������룺��������ȡ���ػ�
//
//system -- �⺯��������ִ��ϵͳ����
//stdlib.h

#include <stdlib.h>
#include <string.h>

//�����ַ����Ƚ���ȵ�ʱ�򣬲���ʹ��==
//Ӧ��ʹ��strcmp
//string.h

//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);//�������Ϣ����input������
//	//�ж�input�д�ŵ��ǲ��ǡ�������
//	if (strcmp("������", input) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);//�������Ϣ����input������
//		//�ж�input�д�ŵ��ǲ��ǡ�������
//		if (strcmp("������", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//
//


#include <stdlib.h>
#include <time.h>
//
//int main()
//{
//	//�����������������㣨���ӣ�
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}
//

//int main()
//{
//	//�����������������㣨���ӣ�
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", rand()%100+1);
//	}
//	return 0;
//}

//����
//void ��ʾ�����������κ�ֵ
//void menu()
//{
//	printf("************************\n");
//	printf("****** 1. play   *******\n");
//	printf("****** 0. exit   *******\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//��Ϸ���߼�
//	//1. ���������
//	int r = rand() % 100 + 1;
//	//2. ������
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("����%d�λ���\n", count);
//		printf("�������:");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < r)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("���������еĻ��ᣬ������ʧ��,��ȷ��ֵ��:%d\n", r);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//������������������
//	//����������ֻ�õ���һ�ξͿ�����
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		//��ӡ�˵�
//		menu();
//
//		//ѡ��
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//����Ϸ���߼�
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//	//һά����Ĵ���
//	//int math[20];//������20��Ԫ�أ�ÿ��Ԫ�ص�������int
//	//char ch[5];
//	//double arr[6];
//
//	//�����ͳ�ʼ��
//	int math[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
//	int math2[20] = { 0,1,2,3,4,5 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//
//	char ch[5] = {'a', 'b'};
//	char ch2[5] = "abc";
//
//	double arr[6] = {0.0};
//	int arr2[3] = { 1,2,3};
//
//
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	double d = 0.0;
//
//	int arr[10] = {0};
//	//������û������
//	//�����������ʲô��
//	//�����Ԫ��������int
//	//��������� - int[10]
//
//	int arr2[5];//int [5]
//
//	return 0;
//}


//ʹ��һά����

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//10 ��ָ�������Ԫ�ظ�����
//
//	printf("%d\n", arr[5]);//[] -- �±����ò�����
//	//            �����5������Ԫ�ص��±�
//
//	printf("%d\n", arr[9]);
//
//
//	return 0;
//}

//int main()
//{
//	//����������г�ʼ����ʱ������Ĵ�С����ʡ�ԡ����������������ĳ�ʼ�����ݣ��Զ����������Ԫ�ظ���
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//10 ��ָ�������Ԫ�ظ�����
//
//	printf("%d\n", arr[5]);//[] -- �±����ò�����
//	//            �����5������Ԫ�ص��±�
//
//	printf("%d\n", arr[9]);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	//0~9
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//while (i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//
//	//������������10��ֵ
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//��ӡ���������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


//һά�������ڴ��еĴ洢
//%d - ����
//%c - �ַ�
//%s - �ַ���
//%p - ��ַ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	//��ӡ��10��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i,  &arr[i]);//&-ȡ��ַ������-ȡ���������ڴ��еĵ�ַ
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//int a = 0;
//	//printf("%zd\n", sizeof(a));//��λ���ֽ�
//	//printf("%zd\n", sizeof(int));
//
//
//	return 0;
//}


//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//








#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, time, localtime, strftime */
#include <locale.h>     /* struct lconv, setlocale, localeconv */

int main()
{
    time_t rawtime;
    struct tm* timeinfo;
    char buffer[80];

    struct lconv* lc;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    int twice = 0;

    do {
        printf("Locale is: %s\n", setlocale(LC_ALL, NULL));

        strftime(buffer, 80, "%c", timeinfo);
        printf("Date is: %s\n", buffer);

        lc = localeconv();
        printf("Currency symbol is: %s\n-\n", lc->currency_symbol);

        setlocale(LC_ALL, "");
    } while (!twice++);

    return 0;
}