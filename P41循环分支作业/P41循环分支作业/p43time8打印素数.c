//打印100-200之间的素数
//素数-质数
//只能被1和它本身整除
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;;
//	for (i = 100; i <= 200; i++)
//	{
//	  //判断i是否为素数
//	  //2至i-1之间的数字除i，看能不能被整除，能就不是
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//求到能被j整除的就跳出循环
//			{
//				break;
//			}
//						   //跳到这里
//		}
//		if (i == j)//当两个值相等时，2至i-1之间没有能被
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n素数数量是%d:",count);
//	return 0;
//}
////思路2
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)//每次求到能被整除的时候（非质数），flag就变成0，不被整除的话flag就一直为1
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)//这里之需要筛选出flag为1的就能判断（质数/素数）
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int count = 0;
	//m =a*b
	//a和b之间一定有一个数字是 <= 开平方m的
	//16 = 2*8 = 4*4，2 < 4, 4 <= 4
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <= sqrt(i); j++)//sqrt()开平方函数
		{
			if (i % j == 0)//每次求到能被整除的时候（非质数），flag就变成0，不被整除的话flag就一直为1
			{
				flag = 0;//不是素数
				break;
			}
		}
		if (flag == 1)//这里之需要筛选出flag为1的就能判断（质数/素数）
		{
			printf("%d ", i);
			count++;
		}
	}
	return 0;
}