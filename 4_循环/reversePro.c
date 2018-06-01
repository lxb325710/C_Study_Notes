#include<stdio.h> 

/*整数的逆序,注意尾数是0*/

int main(){
	
	int a ;
	printf("请输入一个整数:\n");
	
	scanf("%d",&a);
	int temp;	
	printf("逆序为:");
	while(a>0){
		temp = a % 10;
		a /= 10; 
		printf("%d",temp);
	}

	return 0;
}
