#include<stdio.h>

int main (){
	
	char *c = "hello world!";
	char string[8];
	scanf("%7s",string);
	
	/*
		��%��s֮������ֱ�ʾ������������ַ���������
		�������Ӧ�ñ�����Ĵ�ССһ
	*/
		
	printf("%s \n",string);
	printf("%s\n",c);
	
	return 0 ;
} 
