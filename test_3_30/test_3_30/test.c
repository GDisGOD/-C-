#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//main����Ҳ��������

/**/

//int main()
//{
//	int a = 10;//�����������͵ı��������ֽ�a������ֵΪ10
//
//	printf("abcdef\b");/*ʹ��printf��ӡ*/
//	//ab
//	return 0;
//}
//
//
//#include <stdbool.h>
//
//int main()
//{
//	_Bool flag = true;
//	bool flag2 = false;
//
//	if (flag)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	printf("%d\n", a);*/
//	printf("%zd\n", sizeof(_Bool));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    short s = 5;
//    int b = 10;
//
//    printf("%zd\n", sizeof(s = b + 1));
//
//    printf("s = %d\n", s);
//
//    return 0;
//}


//int main()
//{
//	//signed int --- �з��ŵ�int
//	signed int num = 100;
//	num = -200;
//
//	//unsigned int
//	unsigned int num2 = 100;
//	num2 = 1000;
//
//	return 0;
//}
//

//int == signed int ���з��ŵ�int
//�����з��ŵ�������ӡӦ��ʹ��%d
//
//�����޷��������Ĵ�ӡӦ��ʹ��%u
//

//int main()
//{
//	int num = -100;
//	printf("%u\n", num);
//	return 0;
//}
//

#include <stdbool.h>
//
//int num = 100;//ȫ�ֱ��� - ������
//
//int main()
//{
//	//�ֲ����� - ���Ǽ�������г�
//	unsigned int age = 10;//��ʼ��
//	age = 20;//��ֵ
//
//	printf("%u\n", age);
//	char ch = 'q';
//	float score = 3.14f;
//	double wegiht = 4.5;
//	bool flag = true;
//
//	return 0;
//}


//int main()
//{
//	{
//		int num = 10;
//		printf("%d\n", num);
//	}
//	printf("%d\n", num);//err
//
//	return 0;
//}
//
//int m = 1000;
//
//int main()
//{
//	int m = 100;
//	printf("%d\n", m);//�ֲ�����
//
//	return 0;
//}

//
//int main()
//{
//	int m = 100;
//	printf("%d\n", m);
//	m = 200;
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	//printf("%d\n", 33 + 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 33 - 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a - b);
//	printf("%d\n", a - 23);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n",5*5);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a * b);
//	printf("%d\n", a * 10);
//
//	return 0;
//}
//


//int main()
//{
//	printf("%d\n", 9 / 3);//3
//	printf("%d\n", 10 / 4);//2
//	printf("%f\n", 10 / 4.0);//2.5
//	printf("%f\n", 10.0 / 4);//2.5
//	printf("%f\n", 10.0 / 4.0);//2.5
//
//
//
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    printf("%d\n", score);
//
//    return 0;
//}
//
//



//int main()
//{
//	printf("%d\n", 10 % 3);//10/3=3...1
//	//int n = 0;
//	//if(n%2 == 0)
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%d\n", 11 % -5); // 1
//    printf("%d\n", -11 % -5); // -1
//    printf("%d\n", -11 % 5); // -1
//    return 0;
//}
//
//int main()
//{
//	int a = 0;//��ʼ��
//
//	a = 10;//��ֵ�� = �Ǹ�ֵ������
//
//	return 0;
//}

//*= /= %=
//
//int main()
//{
//	int a = 0;//��ʼ��
//	a = a + 10;
//	a += 10;//���ϸ�ֵ
//
//	a = a - 3;//1
//	a -= 3;//2
//
//	a = a + 1;
//	a += 1;
//	a++;
//
//	return 0;
//}

//++ --

//int main()
//{
//	int a = 5;
//	//a = a + 1;//a����1
//	//a++;
//	++a;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = ++a;//a=6 b=6
//	//ǰ��++
//	//�ھ�����++����ʹ��
//	//a=a+1, b=a
//	//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//a=6 b=5
//	//����++
//	//�ھ�����ʹ�ã���++
//	//b=a, a=a+1
//	//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a--;//a=4 b=5
//	//����--
//	//�ھ�����ʹ�ã���--
//	//b=a, a=a-1
//	//
//	printf("a = %d\n", a);//4
//	printf("b = %d\n", b);//5
//
//	return 0;
//}

//
//int main()
//{
//	int a = 5;
//	int b = --a;//a=4 b=4
//	//ǰ--
//	//�ھ�����--����ʹ��
//	//a=a-1, b=a
//	//
//	printf("a = %d\n", a);//4
//	printf("b = %d\n", b);//4
//
//	return 0;
//}
//

//int main()
//{
//	int a = 5;
//	//printf("%d\n", --a);
//	printf("%d\n", a--);//5
//	printf("%d\n", a);//4
//
//	return 0;
//}

//
//int main()
//{
//	int a = -10;
//	printf("%d\n", +10);
//	printf("%d\n", +a);
//	printf("%d\n", 10);
//
//	return 0;
//}


//int main()
//{
//	int a = -10;
//	printf("%d\n", -10);
//	printf("%d\n", -a);
//	printf("%d\n", 10);
//
//	return 0;
//}

int main()
{
	int a = (int)3.14;

	printf("%d\n", a);
	//int b = int(3.14);//err
	return 0;
}