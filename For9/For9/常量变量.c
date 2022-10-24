#include <stdio.h>
//常量和变量
#define Max  10000
//int main()
//{	
//	//1.字面常量  
//	'a';
//	10;
//	"我是常量";
//
//	//2.const修饰的常变量
//	const int n = 10;//const后就定义为常量无法改变(常属性：不能改变的属性)
//	//n = 20;//无法改变所以不能运行
//	int arr[10] = { 0 };
//	//int arr1[n] = { 0 }; //n这虽然是常量了但本质还是变量，常变量
//
//	//3.#define定义的表示符常量（顶上）
//	#define WuBai 500
//	int a = Max;
//	printf("a= %d\n",Max);
//	printf("%d\n", WuBai);
//
//	
//	return 0;
//}

//4.枚举变量,可以依依枚举的常量
enum Sex {//括号内的都算常量
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