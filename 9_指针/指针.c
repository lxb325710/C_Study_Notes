#include<stdio.h>

void swap(int* a , int* b);
int main(int argc, char const *argv[])
{
	/*
		ָ����Ǳ����ַ�ı���
		[����]
			int i;
			int* p = &i;
	*/

	/*
		ָ���������ͨ����������:
			? ��ͨ������ֵ��ʵ�ʵ�ֵ
			? ָ�������ֵ�Ǿ���ʵ��ֵ�ı����ĵ�ַ
	*/

	/*
		*�����:
			1 *��һ����Ŀ���������������ָ���ֵ����ʾ�ĵ�ַ�ϵı���
			2 ��������ֵҲ��������ֵ
				int k = *p;
  				*p = k+1;
		&*������������໥������:
			 *&yptr --> *(&yptr) --> *(yptr�ĵ�ַ) --> �õ��Ǹ���ַ�ϵı��� --> yptr
			 &*yptr --> &(*yptr) --> &(y) --> �õ�y�ĵ�ַ��Ҳ����yptr --> yptr
	*/
	int a = 5;
	int b = 10;
	printf("����ǰ a=%d , b=%d \n",a,b);
	swap(&a,&b);
	printf("������ a=%d , b=%d \n",a,b);
	
	
	return 0;
}

void swap(int* a , int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
} 
