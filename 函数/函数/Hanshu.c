#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)//��������add������x��y���ͣ�
{
	int sum = 0;
	sum = x + y;//д��ʽ
	return sum;
}
int Cheng(int x, int y)
{
	int sum = 0;
	sum = x * y;
	return sum;
}

//����
//int main()
//{	
//	//printf("��������������:");
//	//int num1 = 0;
//	//int num2 = 0;
//	//scanf("%d%d",&num1,&num2);//���ﾭ����������&����
//	//int sum = Add(num1,num2);
//	//int cheng = Cheng(num1,num2);
//	//printf("�͵�ֵΪ: %d\n",sum);
//	//printf("�˵�ֵΪ: %d\n",cheng);
//
//	return 0;
//}


//ǰ++�ͺ�++������
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++��ʹ�ã�b= a�ȼ�1=11
//	//++a�ȼ����ˣ��������ν��Ϊ
//	printf("a��ֵΪ��%d\n",a);//11
//	printf("b��ֵΪ��%d\n",b);//11
//
//	int a = 10;
//	int b = a++;//��Ӽ���������ʹ�ú�++������Ϊ b = 10��Ȼ��a��ֵ++ a���11
//	printf("a��ֵΪ��%d\n", a);//11
//	printf("b��ֵΪ��%d\n", b);//10
//	return 0;
//}

int main()
{	
	//ǿ������ת��
	int a = (int)3.14;
	printf("%d\n",a);
	return 0;
}