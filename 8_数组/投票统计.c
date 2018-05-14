#include<stdio.h>
/*输入数量不确定的[0,9]范围内的整数，
统计每一种数字出现的次数，
输入-1表示结束*/
int main(){

	const int number = 10 ;
	int arr[number];
	int x ;
	int count = 0;
	int j ; 
	//初始化数组
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
