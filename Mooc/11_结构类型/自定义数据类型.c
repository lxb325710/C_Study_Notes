#include<stdio.h> 
/*
C�����ṩ��һ������ typedef �Ĺ���������һ�����е��������͵������֡����磺
	typedef int Length;
	ʹ�� Length ��Ϊ int ���͵ı�����

������Length ������־Ϳ��Դ���int�����ڱ�������Ͳ��������ĵط��ˣ�
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
