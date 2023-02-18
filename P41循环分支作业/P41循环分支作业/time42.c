#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入两个数字求最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int i = 0;
//	for (i = a; i > 0; i--)  
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n",i);
//			break;
//		}
//		
//	}
//}
//辗转相除法 优化
//优势，不需要if先比大小，因为会自动换位
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)//真的就继续循环，假就跳出循环。余出数就是真就会继续循环，循环到余0就跳出
//	{
//		int tmp = a;
//		a = b;
//		b = tmp % a;	
//	}
//	printf("最大公约数:%d\n", b);
//	//最小公倍数 = （a * b）/最大公约数；
//	return 0;
//}