#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����������������Լ��

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
//շת����� �Ż�
//���ƣ�����Ҫif�ȱȴ�С����Ϊ���Զ���λ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)//��ľͼ���ѭ�����پ�����ѭ���������������ͻ����ѭ����ѭ������0������
//	{
//		int tmp = a;
//		a = b;
//		b = tmp % a;	
//	}
//	printf("���Լ��:%d\n", b);
//	//��С������ = ��a * b��/���Լ����
//	return 0;
//}