//水仙花数的判断
#include<stdio.h>
void main(){
	int gw;
	int sw;
	int bw;

	printf("水仙花数的值为：");
	for(int i=100;i<=999;i++){
		bw = i/100;
		sw = i/10%10;
		gw = i%10;
		if((sw*sw*sw + gw*gw*gw +bw*bw*bw) == i)
			printf("%d\n",i);
	}

}
