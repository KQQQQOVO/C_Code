int Pingjun()
{
	int arr[10] = {0};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入第 %n",i+1);
		printf("个数字");
		scanf("%d",arr[i]);
	}
	return 0;
}