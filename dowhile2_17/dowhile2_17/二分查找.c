//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr1������������в���k��7����ֵ
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//����Ԫ�����������������С/��һ������Ԫ�صĴ�С=����Ԫ�ظ���
//	int left = 0;//������ߵ�һ��Ԫ��
//	int right = sz - 1;//�������һ��Ԫ��
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr1[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			printf("ֵ�ǣ�%d\n", arr1[mid]);
//			break;
//		}
//	}
//	if (left < right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}