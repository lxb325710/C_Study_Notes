#include<stdio.h>
/*
1.ö����������Ϊֵ
2.ö�����Ϳ��Ը���enum��Ϊ����
3.��ʵ�����������������ڲ�������ⲿ��������� 
*/

//С��·:������ö��������һ�� NumCOLORS  ,  NumCOLORS��ֵ����ö������ĸ��� 
enum color{red,blue,yellow,NumCOLORS}; 
//����ö������ʱ�����ָ��ֵ
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

