#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = {0};//定义数组，输入默认值0
	int i = 0;
	int sum = 0;
	int max = arr[0];//定义个max值，给个0，因为后面会给替代
	for (i = 0; i < 10; i++)//
	{
		printf("请输入第 %d",i+1);//这里不会连起来，所以只能先分开
		printf("个数字 \n");
		scanf("%d",&arr[i]);//取录入的数字，循环10次
		sum += arr[i] ;//a +=b的意思就是 a = a + b(从右往左算)所以a就会一直累加所以算出总和
	}	
	for (i = 0; i < 10; i++)//在把输入的数字在这比大小比10次
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值为:%d\n",max);
	//printf("总和为:%d\n",sum);
	printf("平均值为:%d\n",sum/10);
	return 0;
}