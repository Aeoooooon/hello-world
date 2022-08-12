#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include <stdio.h>

//struct BOOK
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct BOOK b1 = { "C语言程序设计",55 };
//	struct BOOK* pb = &b1;
//	printf("书名： %s\n", (*pb).name);
//	printf("价格： %d\n", (*pb).price);
//	printf("书名： %s\n", pb->name);
//	printf("价格： %d\n", pb->price);
//	printf("书名： %s\n", b1.name);
//	printf("价格： %d\n", b1.price);
//	b1.price = 15;
//	printf("变更后的价格：%d\n", b1.price);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", sizeof d);
//	printf("d = %lf\n", d);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'y';
//	printf("pc = %c\n", ch);
//	printf("%d", sizeof(pc));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y) 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个数： \n");
//	scanf("%d %d",&a,&b);
//	max = MAX(a,b);
//	printf("两数较大的是： \n%d",max);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = a && b;
//	printf("c = %d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = --a;
//	//int b = a--;
//	//int b = ++a;
//	//int b = a++;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("请输入两个待比较的数：\n");
//	scanf("%d %d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	{
//		int num1 = 0;
//		int num2 = 0;
//		int sum = 0;
//		scanf("%d%d", &num1, &num2);
//		sum = num1 + num2;
//		printf("sum = %d\n", sum);
//		return 0;
//	}
//
//}
