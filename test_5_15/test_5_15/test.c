#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>

//
//int main()
//{
//	int ret = islower('A');
//	printf("%d\n", ret);
//	ret = islower('a');
//	printf("%d\n", ret);
//	
//	ret = islower('0');
//	printf("%d\n", ret);
//	
//	return 0;
//}


//int main()
//{
//	int ret = isxdigit('9');
//	printf("%d\n", ret);
//	
//	return 0;
//}

//дһ�����룬���ַ����е�Сд��ĸת��д�������ַ�����


//int main()
//{
//	char arr[] = "I am a Student.";
//	//            0123
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] -= 32;
//		}
//		i++;
//	}
//
//	printf("%s\n", arr);
//	
//	return 0;
//}
//

//
//int main()
//{
//	char ch = toupper('a');
//	printf("%c\n", ch);
//
//	ch = tolower('A');
//	printf("%c\n", ch);
//
//	return 0;
//}
//
//
//int main()
//{
//	char arr[] = "I am a Student.";
//	//            0123
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))// if(arr[i]>='a' && arr[i]<='z')
//		{
//			arr[i] = toupper(arr[i]);// -= 32
//		}
//		i++;
//	}
//
//	printf("%s\n", arr);
//	
//	return 0;
//}

#include <string.h>


//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = {'a', 'b','c'};
//
//	size_t len = strlen(arr);
//
//	printf("%zd\n", len);
//
//	return 0;
//}

//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}
//



//int main()
//{
//	if ((int)strlen("abc") - (int)strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") > strlen("abcdef"))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}

#include <assert.h>

//����1-������
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//2.ָ��-ָ��
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}


//3. �ݹ�ķ�ʽ

//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = {0};//1��Ԫ��
//	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
// 	return 0;
//}


//#include <string.h>
//
//int main()
//{
//	char arr1[] = "hello world";
//	char* p = "xxxxxxxxxxxxxxxxxxxx";//�����ַ���-�����޸�
//	strcpy(p, arr1);//err
//	printf("%s\n", p);
//
//	return 0;
//}

//
//ģ��ʵ��һ��strcpy?
//
//
//Ϊ����ʵ����ʽ����
//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//

//char* my_strcpy(char* dest, const char* src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//
//	assert(dest && src);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//\0
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//
//	assert(dest && src);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//\0
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}


//char* my_strcpy(char* dest, const char* src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)//������ȥ�ַ����жϱ��ʽ��ֵ����\0������ȥ���ж�Ϊ�٣�ֹͣѭ��
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//
//	char* pstr = my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//	printf("%s\n", pstr);
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}
//

#include <string.h>

//Ҫ����Ŀ��ռ����ʼ��ַ
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1. ��Ŀ��ռ��\0
//	while (*dest != '\0')
//		dest++;
//	//2. ����
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//
//int main()
//{
//	/*char arr1[20] = "he\0lloxxxxx";
//	char arr2[] = "world";*/
//
//	char arr[20] = "abc";
//
//	strcat(arr, arr);//�ַ���׷��
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	int ret = strcmp(arr1, arr2);
//	//printf("%d\n", ret);
//	if (ret >0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}
//


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);	
//}
//
//int main()
//{
//	char arr1[] = "abcq";
//	char arr2[] = "abcdef";
//
//	int ret = my_strcmp(arr1, arr2);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "xxxxxxxxxxx";
//
//	strncpy(arr2, arr1, 8);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//

//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "xxxxxxxxxxx";
//
//	strncpy(arr2, arr1, 8);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "abcdef\0yyyyyyyy";
//	char arr2[20] = "xxxxxxxx";
//
//	strncat(arr1, arr2, 3);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}
//

//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "ab";
//
//	int ret = strncmp(arr1, arr2, 4);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//


int main()
{
	char arr[] = "zpengwei@yeah.net@hehe.haha#ttttt";
	char buf[256] = {0};
	strcpy(buf, arr);//"zpengwei\0yeah.net"
	//char sep[] = "@.";
	char* sep = "@.";
	char* ret = NULL;
	for (ret = strtok(buf, sep); ret != NULL; ret=strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}

	//char* ret = strtok(buf, sep);
	//printf("%s\n", ret);
	//ret = strtok(NULL, sep);
	//printf("%s\n", ret);
	//ret = strtok(NULL, sep);
	//printf("%s\n", ret);

	return 0;
}