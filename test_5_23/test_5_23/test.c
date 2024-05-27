#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//
//	return 0;
//}
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//}s1;
//
//int main()
//{
//	struct S s2;
//
//	return 0;
//}

//struct 
//{
//	char c;
//	int i;
//	double d;
//}s1, s2;


//struct
//{
//	char c;
//	int i;
//	double d;
//}s1;
//
//struct
//{
//	char c;
//	int i;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s1;//?
//	return 0;
//}


//struct Node
//{
//	int data;//存放数据 -- 数据域
//	struct Node* next;//-- 指针域
//};


//typedef struct Node
//{
//	int data;//存放数据 -- 数据域
//	struct Node* next;//-- 指针域
//}Node;
//
//
//int main()
//{
//
//	return 0;
//}

//#include <stddef.h>
//
//struct S1
//{
//	char c1;
//	char c2;
//	int n;
//};
//
//struct S2
//{
//	char c1;
//	int n;
//	char c2;
//};
//
//int main()
//{
//	//printf("%zd\n", sizeof(struct S1));
//	//printf("%zd\n", sizeof(struct S2));
//	//struct S1 s1 = {0};
//	//printf("%zd\n", offsetof(struct S1, c1));
//	//printf("%zd\n", offsetof(struct S1, c2));
//	//printf("%zd\n", offsetof(struct S1, n));
//	
//	printf("%zd\n", offsetof(struct S2, c1));
//	printf("%zd\n", offsetof(struct S2, n));
//	printf("%zd\n", offsetof(struct S2, c2));
//
//	return 0;
//}


#include <stddef.h>

//struct S1
//{
//	char c1;
//	char c2;
//	int n;
//};
//
//struct S2
//{
//	char c1;
//	int n;
//	char c2;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S4 s4;
//	printf("%zd\n", sizeof(struct S4));
//
//	return 0;
//}

//VS上默认对齐数是8
//
//#pragma pack(2)
//
//struct S
//{
//	char c1;//1 1 1
//	int n;  //4 1 1
//	char c2;//1 1 1
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//
//	return 0;
//}
//
//struct S
//{
//	int arr[1000];
//	int n;
//	char ch;
//};
//
//
//void print1(struct S tmp)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("n = %d\n", tmp.n);
//	printf("ch = %c\n", tmp.ch);
//}
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("n = %d\n", ps->n);
//	printf("ch = %c\n", ps->ch);
//
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10},  10, 'w'};
//	print1(s);
//	print2(&s);
//
//	return 0;
//}


//struct S
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//
//	return 0;
//}


//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//
//int main()
//{
//    struct S s = { 0 };
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//
//
//    printf("%zd\n", sizeof(struct S));
//    return 0;
//}


//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//
//
//int main()
//{
//    struct A sa = {0};
//    int d = 0;
//    scanf("%d", &d);
//    sa._d = d;
//    printf("%d\n", sa._d);
//
//    return 0;
//}


//#define MALE 3
//#define FEMALE 5
//#define SECRET 7


enum Sex
{
	//该枚举类型的三种可能取值
	//他们都是常量，被称为枚举常量
	MALE=3,//0
	FEMALE=5,
	SECRET=7
};

//
int main()
{
	enum Sex sex1 = MALE;
	enum Sex sex2 = FEMALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}

