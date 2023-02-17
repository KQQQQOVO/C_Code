//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr1这个有序数组中查找k（7）的值
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//计算元素数量，整个数组大小/第一个数组元素的大小=数组元素个数
//	int left = 0;//数组左边第一个元素
//	int right = sz - 1;//数组最后一个元素
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
//			printf("找到了,下标是：%d\n", mid);
//			printf("值是：%d\n", arr1[mid]);
//			break;
//		}
//	}
//	if (left < right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}