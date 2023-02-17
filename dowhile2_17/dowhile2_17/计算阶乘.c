//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//计算1！+ 2！ + 3！ +n！的和

//双重for循环
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (a = 1; a <= i; a++)  
//		{ 
//			ret *= a;	
//		}
//		sum += ret;
//	}
//		
//	printf("%d\n", sum);
//	return 0;
//}

//优化后
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 10; i++)
//	{	
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
