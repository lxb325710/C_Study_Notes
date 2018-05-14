#include<stdio.h>

struct date {
	int year;
	int month;
	int day;
}myDate;

struct time {
	int hour;
	int minute;
	int second;
}myTime;

int main(){
	
	//结构数组 
	struct date dates[100];		
	struct date datess[]={
		{1,2,3},
		{5,6,7}
	};
	
	//结构中的结构
	struct dateAndtime {
		struct date d;
		struct time t;
	} dt; 
	
	struct dateAndtime *dtp ;
	dtp = &dt;
	dt.d.year = 2018 ;
	dtp->d.month = 11;
	(dt.d).day = 30;
	(dtp->t).hour = 12;
	dt.t.minute = 24;
	dtp->t.second= 48;
	
	printf("dateAndtime -> date year : %d , month : %d , day : %d  \n",dt.d.year,dt.d.month,dt.d.day);
	
	printf("dateAndtime -> time hour : %d ,minute : %d ,second : %d \n",dtp->t.hour,dtp->t.minute,dtp->t.second);
	
	return 0 ;
}
 
