#include<stdio.h>
/*
�ͱ��ر���һ�����ں����ڲ������Ľṹ����ֻ���ں����ڲ�ʹ��
����ͨ���ں����ⲿ�����ṹ���ͣ������Ϳ��Ա����������ʹ?����
*/
struct date {
	int year;
	int month;
	int day;
}; 
/*
�����ṹ��������ʽ:
1.
	struct date {
		int year;
		int month;
		int day;	
	};
	struct date d1,d2; 
	---d1,d2����date,������year,mont,day
2.
	struct {
		int year;
		int month;
		int day;
	}d1,d2;
	---d1,d2����һ�������ṹ,������year,mont,day
3. 
	struct date {
		int year;
		int month;
		int day;
	}d1,d2;
	---d1,d2����date,������year,mont,day
	
���ڵ�һ�͵�������ʽ���������˽ṹdate�����ǵڶ�����ʽû������date��ֻ�Ƕ�������������
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
	//�ṹ�����ֳ�ʼ������ 
	struct date today1 = {2018,7,31};
	struct date today2 = {.month=10,.year=2019};
	printf("today1 is %d \t %d \t %d \n",today1.year,today1.month,today1.day);
	printf("today2 is %d \t %d \t %d \n",today2.year,today2.month,today2.day);
	
	//�ṹ����
	struct date today3;
	today3 = today2;
	printf("today3 is %d \t %d \t %d \n",today3.year,today3.month,today3.day);
	
	struct date today4=(struct date){2018,12,12};
	printf("today4 is %d \t %d \t %d \n",today4.year,today4.month,today4.day);
	
	struct date today5=(struct date){.year=2018,.day=31};
	printf("today5 is %d \t %d \t %d \n",today5.year,today5.month,today5.day);
	
	//�ṹָ��: �����鲻ͬ���ṹ���������ֲ����ǽṹ�����ĵ�ַ������ʹ��&�����
	struct date *pDate = &today1;
	printf("�ṹ�ĵ�ַ:%d \n",pDate);
	
	return 0 ;
}
 
