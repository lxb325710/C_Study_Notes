#include<stdio.h>

int main (){
	
	int arr[]={2,3,55,66,88,11,55,45,48,47,125,65};
	int goal;
	int loc = -1;
	
	printf("������һ����:\n");
	scanf("%d",&goal);
	
	loc = findNum(goal,arr,sizeof(arr)/sizeof(arr[0]));
	
	if(-1 == loc){
		printf("�Բ���,û���ҵ�!\n");
	}else{
		printf("��Ҫ�ҵ������������еĵ�%dλ\n",loc);
	}
	
	return 0;
} 

int findNum(int goal,int arr[],int size){
	
	for(int i = 0 ; i < size ; i++){
		if(goal == arr[i]){
			return i;
		}
	} 
	return -1;
}
