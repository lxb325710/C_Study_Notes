#include<stdio.h>
int main(){
	/**
	1.�����ĵ�ַ
	2.���ڵı����ĵ�ַ
	3.&�Ľ����sizeof
	4.����ĵ�ַ
	5.���鵥Ԫ�ĵ�ַ
	6.���ڵ����鵥Ԫ�ĵ�ַ
	*/
	int i = 0;
	int j = i+1;
	int arr[10]={1,2,3}; 
	printf("%d\n",&i); 
	printf("%d\n",&j); 
	printf("%d\n",&arr); 
	printf("%d\n",&arr[0]);
	printf("%d\n",&arr[1]);
	printf("%d\n",&arr[2]);
	printf("%d\n",sizeof(&i)); 
	return 0;
} 
