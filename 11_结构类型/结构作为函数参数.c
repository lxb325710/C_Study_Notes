#include<stdio.h>
struct date {
		int x ;
		int y ; 
		int z ;
} myDate; 	

struct date* inputDate(struct date *d);
void outputDate(struct date *d);
int main(){
	
	//�ṹָ����Ϊ���� 
	struct date *p = &myDate;
	//�� -> ��ʾָ����ָ�Ľṹ�����е� ��Ա
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
	//& һ���������� ,d->x ֻ��һ����Ա 
	scanf("%d",&(d->x));
	scanf("%d",&(d->y));
	scanf("%d",&(d->z));
	//���ش����ָ����һ����·
	return d;
}

void outputDate(struct date *d){
	printf("struct date x:%d , y:%d , z:%d \n",d->x,d->y,d->z);
}

