//�ж��ַ��������ĸ���ֺ��ַ��ĸ���
#include <stdio.h>
int main(){
	int i=0, space=0, num=0, n=0, ch=0;
	char s[20];
	printf("������һ���ַ� ");
	gets(s);
	while(s[i] != '\0'){
		if(s[i]==' ')
		space++;
		else if(s[i]<='9' && s[i]>='0')
		num++;
		else if(s[i]<='z' && s[i]>='a' || s[i]<='Z' && s[i]>='A')
		ch++;
		else
		n++;
		i++;
	}
	printf("�ղ�������ַ���Ӣ���ַ�����Ϊ %d\n", ch);
	printf("�ղ�������ַ��пո����Ϊ %d\n", space);
	printf("�ղ�������ַ������ָ���Ϊ %d\n", num);
	printf("�ղ�������ַ�����������Ϊ %d\n", n);
	return 0;
}