#include <stdio.h>
//�����ͱ���
#define Max  10000
//int main()
//{	
//	//1.���泣��  
//	'a';
//	10;
//	"���ǳ���";
//
//	//2.const���εĳ�����
//	const int n = 10;//const��Ͷ���Ϊ�����޷��ı�(�����ԣ����ܸı������)
//	//n = 20;//�޷��ı����Բ�������
//	int arr[10] = { 0 };
//	//int arr1[n] = { 0 }; //n����Ȼ�ǳ����˵����ʻ��Ǳ�����������
//
//	//3.#define����ı�ʾ�����������ϣ�
//	#define WuBai 500
//	int a = Max;
//	printf("a= %d\n",Max);
//	printf("%d\n", WuBai);
//
//	
//	return 0;
//}

//4.ö�ٱ���,��������ö�ٵĳ���
enum Sex {//�����ڵĶ��㳣��
	MEAL,
	FEMEAL,
	SECRET
};
int main()
{
	enum Sex s = MEAL;
	printf("%d\n",MEAL);
	printf("%d\n",FEMEAL);
	printf("%d\n",SECRET);
	return 0;
}