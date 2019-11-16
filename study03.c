#include<stdio.h>
/*
定义数组
查找在数组中的数
*/

int main() {
	//定义需要查找的数组
	int a[] = {12,56,45,78,90,80,23,16,8,63};
	//打印提示
	printf("请输入一个需要查找的数：");
	//定义存储需要查找的变量
	int s;
	//输入并赋值
	scanf_s("%d",&s);
	int i = 0;
	//开始查找 当查找到元素后跳出
	for ( i = 0; i < sizeof(a)/sizeof(int) ;i++) {
		if (s == a[i]) {
			break;
		}
	}
	//判断是否查找到相应数字
	if (i == sizeof(a) / sizeof(int)) {
		printf("没有找到！\n");
	}else{
		printf("在第%d个元素中！\n",i+1);
	}
	
	return 0;

}