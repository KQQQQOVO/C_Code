#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = {0};//�������飬����Ĭ��ֵ0
	int i = 0;
	int sum = 0;
	int max = arr[0];//�����maxֵ������0����Ϊ���������
	for (i = 0; i < 10; i++)//
	{
		printf("������� %d",i+1);//���ﲻ��������������ֻ���ȷֿ�
		printf("������ \n");
		scanf("%d",&arr[i]);//ȡ¼������֣�ѭ��10��
		sum += arr[i] ;//a +=b����˼���� a = a + b(����������)����a�ͻ�һֱ�ۼ���������ܺ�
	}	
	for (i = 0; i < 10; i++)//�ڰ��������������ȴ�С��10��
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("���ֵΪ:%d\n",max);
	//printf("�ܺ�Ϊ:%d\n",sum);
	printf("ƽ��ֵΪ:%d\n",sum/10);
	return 0;
}