#include<stdio.h> 

/*����������,ע��β����0*/

int main(){
	
	int a ;
	printf("������һ������:\n");
	
	scanf("%d",&a);
	int temp;	
	printf("����Ϊ:");
	while(a>0){
		temp = a % 10;
		a /= 10; 
		printf("%d",temp);
	}

	return 0;
}
