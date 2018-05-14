#include<stdio.h>
struct date {
		int x ;
		int y ; 
		int z ;
} myDate; 	

struct date* inputDate(struct date *d);
void outputDate(struct date *d);
int main(){
	
	//结构指针作为参数 
	struct date *p = &myDate;
	//用 -> 表示指针所指的结构变量中的 成员
	p -> x = 1 ;
	p -> y = 2 ;
	(*p).z = 3 ;
	printf("struct date x : %d , y : %d ,z : %d \n",p->x,p->y,p->z );
		
	printf("-------------------------------------------------------\n");
	
	struct date d ={0,0};
	inputDate(&d);
	outputDate(&d);
	return 0 ;
}

struct date* inputDate(struct date *d){
	//& 一定不能忘了 ,d->x 只是一个成员 
	scanf("%d",&(d->x));
	scanf("%d",&(d->y));
	scanf("%d",&(d->z));
	//返回传入的指针是一种套路
	return d;
}

void outputDate(struct date *d){
	printf("struct date x:%d , y:%d , z:%d \n",d->x,d->y,d->z);
}

