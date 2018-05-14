#include<stdio.h>
/*
1.枚举量可以作为值
2.枚举类型可以跟上enum作为类型
3.但实际上是以整数来做内部计算和外部输入输出的 
*/

//小套路:可以在枚举最后加上一个 NumCOLORS  ,  NumCOLORS的值就是枚举里面的个数 
enum color{red,blue,yellow,NumCOLORS}; 
//声明枚举量的时候可以指定值
enum COLOR{RED=1,BLUE=10,GREEN=5,}; 
void fun(enum color c);

int main(){
	int i ;
	//enum color c = red;
	//enum color c = blue;
	enum color c = yellow;
	fun(c);
	scanf("%d",&i);
	fun(i);
	printf("code for green is %d\n",GREEN);	
	printf("enum's num of color is %d\n",NumCOLORS);
	return 0 ;
} 

void fun (enum color c){
	printf("%d\n",c);	
}

