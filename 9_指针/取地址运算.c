#include<stdio.h>
int main(){
	/**
	1.变量的地址
	2.相邻的变量的地址
	3.&的结果的sizeof
	4.数组的地址
	5.数组单元的地址
	6.相邻的数组单元的地址
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
