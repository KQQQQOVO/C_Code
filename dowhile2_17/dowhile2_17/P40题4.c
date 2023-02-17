////输入密码，成功就提示，输错3次则退出程序
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s",password);
//		//if (password == "123456") //err - 两个字符串比较不能用==，应该用strcmp 
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，你还有%d次机会\n",2-i);
//		}
//	}
//	if (i == 3)
//	{
//		printf("输入错误3次，程序结束");
//	}
//	return 0;
//}