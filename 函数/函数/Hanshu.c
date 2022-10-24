#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)//创建函数add（创建x、y整型）
{
	int sum = 0;
	sum = x + y;//写公式
	return sum;
}
int Cheng(int x, int y)
{
	int sum = 0;
	sum = x * y;
	return sum;
}

//函数
//int main()
//{	
//	//printf("请输入两个数字:");
//	//int num1 = 0;
//	//int num2 = 0;
//	//scanf("%d%d",&num1,&num2);//这里经常容易忘记&符号
//	//int sum = Add(num1,num2);
//	//int cheng = Cheng(num1,num2);
//	//printf("和的值为: %d\n",sum);
//	//printf("乘的值为: %d\n",cheng);
//
//	return 0;
//}


//前++和后++的区别
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++是先++后使用，b= a先加1=11
//	//++a先加上了，所以两次结果为
//	printf("a的值为：%d\n",a);//11
//	printf("b的值为：%d\n",b);//11
//
//	int a = 10;
//	int b = a++;//后加加则是先用使用后++，计算为 b = 10，然后a的值++ a变成11
//	printf("a的值为：%d\n", a);//11
//	printf("b的值为：%d\n", b);//10
//	return 0;
//}

int main()
{	
	//强制类型转换
	int a = (int)3.14;
	printf("%d\n",a);
	return 0;
}