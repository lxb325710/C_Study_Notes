#include<stdio.h> 
/*
C语言提供了一个叫做 typedef 的功能来声明一个已有的数据类型的新名字。比如：
	typedef int Length;
	使得 Length 成为 int 类型的别名。

这样，Length 这个名字就可以代替int出现在变量定义和参数声明的地方了：
	Length a, b, len ;
	Length numbers[10] ;
*/
int main(){
	
	typedef long int64_t;
	
	typedef struct ADate {
		int year;
		int month;
		int day;
	} Date;

	int64_t i = 1000000000000;

	Date d = {2018,10,1};	
	
	printf("d is %d - %d - %d \n",d.year,d.month,d.day);
	
	return 0 ;
	
}
