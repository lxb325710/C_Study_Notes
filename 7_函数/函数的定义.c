#include<stdio.h> 

int sum(int begin , int end);
int max(int a ,int b);
int main(){
	
	//求和函数
	printf("%d\n",sum(1,10));	
	printf("%d\n",sum(10,22));
	//最大值函数
	printf("%d\n",max(10,22));
	printf("%d\n",max(220,55));
	
	return 0;
}

int max(int a ,int b){
	
	return a >=b ? a:b ;
	
}

int sum(int begin , int end){
	if(begin > end){
		return -1;
	}	
	
	int sum = 0;
	for(begin;begin <= end ;begin ++){
		sum += begin ;
	}
	return sum;
} 
