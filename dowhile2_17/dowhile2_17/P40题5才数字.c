//写一个猜数游戏
//1.自动产生一个1-100之间的随机书
//2.猜数字
//	a.猜对了，就恭喜你，游戏结束
//	b. 你猜错了，会告诉你猜大了，还是猜小了，继续猜，直到猜对
//3.游戏一直玩，除非退出游戏
#include <stdio.h>
#include <stdlib.h>//随机数的头文件
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("****1.  Play  ******\n");
	printf("****0.  退出  ******\n");
	printf("********************\n");
}
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0-32767之间的数字
	//rand每次随机都是固定的，要提前调用srand来打乱
	int ret = rand()%100+1;//%100的余数是0-99，+1后就范围变成了1-100
	//printf("%d\n", ret);
	int guess = 0;
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了%d\n", ret);
			break;
		}
	}

}
	
int main()
{
	int input = 0;
	//为什么放下面，因为之生成一次不加入到循环，随机的数值就会很乱，不会相近.
	srand((unsigned int)time(NULL));//unsigned int是srand需要的值，这里强制转换time(NULL)给srand用
	do
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);//判断input是数值，0为终止，为真就重新来，仅限于do while循环。
	return 0;
}
