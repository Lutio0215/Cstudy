//判断字符串里的字母数字和字符的个数
#include <stdio.h>
int main(){
	int i=0, space=0, num=0, n=0, ch=0;
	char s[20];
	printf("请输入一串字符 ");
	gets(s);
	while(s[i] != '\0'){
		if(s[i]==' ')
			space++;
		else if(s[i]<='9' && s[i]>='0')
			num++;
		else if(s[i]<='z' && s[i]>='a' || s[i]<='Z' && s[i]>='A')
			ch++;
		else{
			n++;
			i++;
		}

	}
	printf("刚才输入的字符中英文字符个数为 %d\n", ch);
	printf("刚才输入的字符中空格个数为 %d\n", space);
	printf("刚才输入的字符中数字个数为 %d\n", num);
	printf("刚才输入的字符中其他个数为 %d\n", n);
	return 0;
}