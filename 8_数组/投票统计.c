#include<stdio.h>
/*����������ȷ����[0,9]��Χ�ڵ�������
ͳ��ÿһ�����ֳ��ֵĴ�����
����-1��ʾ����*/
int main(){

	const int number = 10 ;
	int arr[number];
	int x ;
	int count = 0;
	int j ; 
	//��ʼ������
	for(j = 0 ;j<number ; j++){
		arr[j] = 0;
	} 
	scanf("%d",&x);
	while(-1 != x){
		if(x>=0 && x<=9 ){
			arr[x] ++ ;
		}
		scanf("%d",&x);
	} 
	for(j = 0 ;j<number ; j++){
		printf("%d:%d\n",j,arr[j]);
	}
		
	return 0;
} 
