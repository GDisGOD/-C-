#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* p = "efab";
//	char* ret = strstr(arr, p);
//
//	printf("%s\n", ret);//efabcdef
//
//	return 0;
//}
//


//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* p = "cdefq";
//	char* ret = strstr(arr, p);
//
//	if (ret == NULL)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//
//	}
//	return 0;
//}
//
//
//#include <assert.h>
//
//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//
//	//������� - str2ָ����ǿ��ַ�����ֱ�ӷ���str1
//	if (*str2 == '\0')
//		return str1;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char arr[] = "abbbcdef";
//	char* p = "bbcq";
//	const char* ret = my_strstr(arr, p);
//
//	if (ret == NULL)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//
//	}
//
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d: %s\n", i, strerror(i));
//	}
//	return 0;
//}
//


//#include <errno.h>
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");//"r"- �����Զ��ļ�����ʽ�������ļ����������ļ������ڣ��ʹ�ʧ��
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�ԭ����: %s", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		printf("���ļ��ɹ�\n");
//		//.....
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}
//
//

//
//#include <errno.h>
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");//"r"- �����Զ��ļ�����ʽ�������ļ����������ļ������ڣ��ʹ�ʧ��
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�ԭ����: %s\n", strerror(errno));
//		perror("���ļ�ʧ�ܣ�ԭ����");
//		//perror == printf + strerror
//		return 1;
//	}
//	else
//	{
//		printf("���ļ��ɹ�\n");
//		//.....
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}
//
#include <assert.h>

//void* my_memcpy(void* dest,const void* src, size_t num)
//{
//	int i = 0;
//	void* ret = dest;
//	assert(src && dest);
//
//	for (i = 0; i < num; i++)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	int i = 0;
//	void* ret = dest;
//	assert(src && dest);
//
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//��arr1�е�3 4 5 6 7 �����ŵ�arr2��
//	my_memcpy(arr2, arr1+2, 17);
//
//	return 0;
//}

//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	int i = 0;
//	void* ret = dest;
//	assert(src && dest);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1+2, arr1, 20);
//
//	return 0;
//}
//

//
//
//#include <string.h>
//
//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)//ǰ->��
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//��->ǰ
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}


//
//
//#include <string.h>
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)//ǰ->��
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//��->ǰ
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}

//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
//
//

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr+6, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 4);
//	//0x01 01 01 01
//	return 0;
//}


//int main()
//{
//	//0000 0000 00000000 00000000 00000001
//	//0x00 00 00 01
//	int arr1[] = { 1,2,3,4,5 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,2,3,6,5 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 06 00 00 00 05 00 00 00
//
//	int ret = memcmp(arr1, arr2, 13);
//
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int n = 0x11223344;

	return 0;
}