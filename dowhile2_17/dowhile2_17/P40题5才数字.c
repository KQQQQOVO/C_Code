//дһ��������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//	a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//	b. ��´��ˣ��������´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸһֱ�棬�����˳���Ϸ
#include <stdio.h>
#include <stdlib.h>//�������ͷ�ļ�
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("****1.  Play  ******\n");
	printf("****0.  �˳�  ******\n");
	printf("********************\n");
}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//randÿ��������ǹ̶��ģ�Ҫ��ǰ����srand������
	int ret = rand()%100+1;//%100��������0-99��+1��ͷ�Χ�����1-100
	//printf("%d\n", ret);
	int guess = 0;
	while (1)
	{
		printf("����������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���%d\n", ret);
			break;
		}
	}

}
	
int main()
{
	int input = 0;
	//Ϊʲô�����棬��Ϊ֮����һ�β����뵽ѭ�����������ֵ�ͻ���ң��������
	srand((unsigned int)time(NULL));//unsigned int��srand��Ҫ��ֵ������ǿ��ת��time(NULL)��srand��
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//�ж�input����ֵ��0Ϊ��ֹ��Ϊ�����������������do whileѭ����
	return 0;
}