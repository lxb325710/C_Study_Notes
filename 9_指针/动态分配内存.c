#include<stdio.h>

#include<stdlib.h>
/*
    ��malloc����Ŀռ�Ĵ�С�����ֽ�Ϊ��λ��	
	���صĽ����void*����Ҫ����ת��Ϊ�Լ���Ҫ������
		(int*)malloc(n*sizeof(int))	
	�������ʧ���򷵻�0�����߽���NULL
*/

/*
	����������Ŀռ仹��"ϵͳ"
	free()  ֻ�ܻ��������Ŀռ���׵�ַ
	
	���Ǻ��������þ��Ƿ���ռ䣬����Ҫ�ں�����mallocȻ�󴫳�ȥ��
	��ͬһ���ط�malloc��free 
*/
int main (){
	
	void *p ;
	int count = 0;
	while((p=malloc(100*1024*1024))){
		count ++;
	}
	
	printf("ϵͳһ��������%d00mb�Ŀռ�\n",count);

	free(p);
	
	return 0;
} 
