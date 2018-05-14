#include<stdio.h>
/*
和本地变量一样，在函数内部声明的结构类型只能在函数内部使用
所以通常在函数外部声明结构类型，这样就可以被多个函数所使?用了
*/
struct date {
	int year;
	int month;
	int day;
}; 
/*
声明结构的三种形式:
1.
	struct date {
		int year;
		int month;
		int day;	
	};
	struct date d1,d2; 
	---d1,d2都是date,里面有year,mont,day
2.
	struct {
		int year;
		int month;
		int day;
	}d1,d2;
	---d1,d2都是一种无名结构,里面有year,mont,day
3. 
	struct date {
		int year;
		int month;
		int day;
	}d1,d2;
	---d1,d2都是date,里面有year,mont,day
	
对于第一和第三种形式，都声明了结构date。但是第二种形式没有声明date，只是定义了三个变量
*/
int main(){
	/*struct date {
		int year;
		int month;
		int day;
	};*/ 
	
	struct date today;
	today.year = 2018;
	today.month = 5;
	today.day = 14;
	printf("today  is %d \t %d \t %d \n",today.year,today.month,today.day);
	//结构的两种初始化方法 
	struct date today1 = {2018,7,31};
	struct date today2 = {.month=10,.year=2019};
	printf("today1 is %d \t %d \t %d \n",today1.year,today1.month,today1.day);
	printf("today2 is %d \t %d \t %d \n",today2.year,today2.month,today2.day);
	
	//结构运算
	struct date today3;
	today3 = today2;
	printf("today3 is %d \t %d \t %d \n",today3.year,today3.month,today3.day);
	
	struct date today4=(struct date){2018,12,12};
	printf("today4 is %d \t %d \t %d \n",today4.year,today4.month,today4.day);
	
	struct date today5=(struct date){.year=2018,.day=31};
	printf("today5 is %d \t %d \t %d \n",today5.year,today5.month,today5.day);
	
	//结构指针: 和数组不同，结构变量的名字并不是结构变量的地址，必须使用&运算符
	struct date *pDate = &today1;
	printf("结构的地址:%d \n",pDate);
	
	return 0 ;
}
 
