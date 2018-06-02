#include<stdio.h>

int main(){
	
	//输入一组数字,计算出平均值,并打印出大于平均值的数 
	int num ;
	int temp;
	printf("请输入数字总个数:\n");
	scanf("%d",&num); 
	int nums[num];
	printf("请输入数字\n");
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
		printf("平均数为:%.3f\n",sum ,count ,avg);
		printf("大于平均值的数为:");
		for(int k = 0 ; k < count ;k++){
			if(nums[k] > avg){
				printf("%d ",nums[k]);
			} 
		}
		
	}
	return 0;	
} 
