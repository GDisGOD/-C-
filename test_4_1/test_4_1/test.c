#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//printf("hello world");
//	//printf("hello world\n");
//	//abc
//	//def
//	printf("abc\ndef");
//
//	return 0;
//}
//


//int main()
//{
//	printf("%dabc\n", 100);
//	return 0;
//}
//
//int main()
//{
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "wangwu");
//
//	return 0;
//}


//int main()
//{
//	printf("%s says it is %d o'clock\n", "lisi", 10);
//	printf("%s says it is %d o'clock\n", "cuihua", 24);
//
//	return 0;
//}


//int main()
//{
//	printf("this is %c\n", 'A');
//	return 0;
//}


//int main()
//{
//	printf("%hd\n", 100);
//	printf("%ho\n", 100);
//	printf("%x\n", 15);//0 1 2 3 4 5 6 7 8 9 a b c d e f 
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123);
//	printf("%-5dxxxx\n", 123);
//	printf("%5d\n", 123456);
//
//
//	return 0;
//}


//int main()
//{
//	printf("%lf\n", 123.45);
//	printf("%12lf\n", 123.45);
//
//	
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123); //123
//	printf("%d\n", -123);//-123
//
//	printf("%+d\n", 123); //+123
//	printf("%+d\n", -123);//-123
//
//
//	return 0;
//}

//int main()
//{
//	printf("%.2lf\n", 123.45);
//	printf("%.3lf\n", 123.45);
//	printf("%.1lf\n", 123.45);
//	printf("%12.1lf\n", 123.45);
//
//	printf("%*.*lf\n", 12, 1, 123.45);
//	printf("%*.*lf\n", 12, 3, 123.45);
//
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%.3s\n", "abcdef");
//
//	return 0;
//}
//


//int main()
//{
//	int score = 0;
//	printf("������ɼ�:");
//	scanf("%d", &score);//�������
//	//scanf������ռλ���ĺ�ߵĲ�����Ҫ���ǵ�ַ
//	//& ȡ��ַ��������&score - ȡ��score�ĵ�ַ
//	printf("�ɼ��� %d\n", score);
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f1 = 0.0;
//	float f2 = 0.0;
//
//	scanf("%d %d %f %f", &a, &b, &f1, &f2);
//	printf("%d %d %f %f\n", a, b, f1, f2);
//
//	return 0;
//}
//


#include <stdio.h>

//int main()
//{
//    int x;
//    float y;
//
//    // �û����� "    -13.45e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    printf("%f\n", y);
//    return 0;
//}


//int main()
//{
//    int x;
//    float y;
//
//    // �û����� "    -13.45e12# 0"
//    scanf("%d %f", &x, &y);
//    printf("%d %f\n", x, y);
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf(" %c", &ch);
//	printf("xxxx%cyyyy\n", ch);
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };//����
//	scanf("%s", arr);//arr�����������������ǵ�ַ
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[5] = { 0 };//����
//	scanf("%4s", arr);//arr�����������������ǵ�ַ
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d-%d-%d", &year, &month, &day);
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}


//int main()
//{
//	int a;
//	printf("%d\n", a);
//
//	return 0;
//}
//int a;
//
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}
//


//int main()
//{
//	int num = -1;
//	if (num)
//		printf("hehe\n");
//
//
//	return 0;
//}

//int main()
//{
//	if (1 == 2)
//		printf("hehe\n");
//
//
//	return 0;
//}

//����һ���������ж��Ƿ�Ϊ����

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�жϺ����
//	if (num % 2 == 1)
//		printf("%d������\n", num);
//	
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�жϺ����
//	if (num % 2 == 1)
//		printf("%d������\n", num);
//	else
//		printf("%d��ż��\n", num);
//
//	return 0;
//}

//����һ�����䣬>= 18�����������꣬����������δ����
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("����̸������\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("��̸ֹ����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//
//	//�жϺ����
//	if (num == 0)
//		printf("�����ֵ��0\n");
//	else
//	{
//		if (num > 0)
//			printf("�����ֵ������\n");
//		else
//			printf("�����ֵ�Ǹ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//
//	//�жϺ����
//	if (num == 0)
//		printf("�����ֵ��0\n");
//	else if (num > 0)
//		printf("�����ֵ������\n");
//	else
//		printf("�����ֵ�Ǹ���\n");
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//
//	//�жϺ����
//	if (num >= 0)
//	{
//		if (num == 0)
//			printf("�����ֵ��0\n");
//		else
//			printf("�����ֵ������\n");
//	}
//	else
//	{
//		printf("�����ֵ�Ǹ���\n");
//	}
//	return 0;
//}

//����һ���˵�����
//������� < 18�꣬��ӡ"����"
//���������18����44���ӡ"����"
//���������45����59���ӡ"������"
//���������60����89���ӡ"����"
//���90�꼰���ϴ�ӡ"������"

//
//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//
//	//�жϺ����
//	if (age < 18)
//		printf("����\n");
//	else //age>=18
//	{
//		if (age <= 44)//18~44
//			printf("����\n");
//		else //>44
//		{
//			if (age <= 59) //45~59
//				printf("������\n");
//			else //>59
//			{
//				if (age <= 89)
//					printf("����\n");
//				else//>89
//					printf("������\n");
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//
//	//�жϺ����
//	if (age < 18)
//		printf("����\n");
//	else if (age <= 44)//18~44
//		printf("����\n");
//	else if (age <= 59) //45~59
//		printf("������\n");
//	else if (age <= 89)
//		printf("����\n");
//	else//>89
//		printf("������\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int num = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}




