#include<stdio.h>

#include<stdlib.h>
/*
    向malloc申请的空间的大小是以字节为单位的	
	返回的结果是void*，需要类型转换为自己需要的类型
		(int*)malloc(n*sizeof(int))	
	如果申请失败则返回0，或者叫做NULL
*/

/*
	把申请得来的空间还给"系统"
	free()  只能还申请来的空间的首地址
	
	除非函数的作用就是分配空间，否则不要在函数中malloc然后传出去用
	在同一个地方malloc和free 
*/
int main (){
	
	void *p ;
	int count = 0;
	while((p=malloc(100*1024*1024))){
		count ++;
	}
	
	printf("系统一共申请了%d00mb的空间\n",count);

	free(p);
	
	return 0;
} 
