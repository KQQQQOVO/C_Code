#define _CRT_SECURE_NO_WARNINGS 1
//C语言从主函数的第一行开始执行所以得有主函数


#include <stdio.h>//printf的头文件
int main() //主函数
{

	int a = 0;
	int b = 0;
	int sum =0;
	scanf("%d %d",&a,&b);//录入键盘输入
	sum = a + b;
	printf("hello\n");//printf为“库函数”，属于别人的，所以得先引用头文件才能有效果
	printf("sum = %d\n", sum);
	return 0;
}
//得先编译再运行