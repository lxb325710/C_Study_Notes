#include<stdio.h>

int main(){
	
	//����һ������,�����ƽ��ֵ,����ӡ������ƽ��ֵ���� 
	int num ;
	int temp;
	printf("�����������ܸ���:\n");
	scanf("%d",&num); 
	int nums[num];
	printf("����������\n");
	for(int i = 0; -1 != temp && i < num ; i++){
		scanf("%d",&temp);
		nums[i]=temp;
	}
	int count = sizeof(nums)/sizeof(nums[0]);
	
	if( count > 0){
		int sum = 0 ;
		for(int j = 0 ; j < count ;j++){
			sum += nums[j];
		}
		double avg = (double)sum / count;
		printf("ƽ����Ϊ:%.3f\n",sum ,count ,avg);
		printf("����ƽ��ֵ����Ϊ:");
		for(int k = 0 ; k < count ;k++){
			if(nums[k] > avg){
				printf("%d ",nums[k]);
			} 
		}
		
	}
	return 0;	
} 
