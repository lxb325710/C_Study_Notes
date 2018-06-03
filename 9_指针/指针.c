#include<stdio.h>

void swap(int* a , int* b);
int main(int argc, char const *argv[])
{
	/*
		指针就是保存地址的变量
		[例如]
			int i;
			int* p = &i;
	*/

	/*
		指针变量与普通变量的区别:
			? 普通变量的值是实际的值
			? 指针变量的值是具有实际值的变量的地址
	*/

	/*
		*运算符:
			1 *是一个单目运算符，用来访问指针的值所表示的地址上的变量
			2 可以做右值也可以做左值
				int k = *p;
  				*p = k+1;
		&*两个运算符是相互反作用:
			 *&yptr --> *(&yptr) --> *(yptr的地址) --> 得到那个地址上的变量 --> yptr
			 &*yptr --> &(*yptr) --> &(y) --> 得到y的地址，也就是yptr --> yptr
	*/
	int a = 5;
	int b = 10;
	printf("交换前 a=%d , b=%d \n",a,b);
	swap(&a,&b);
	printf("交换后 a=%d , b=%d \n",a,b);
	
	
	return 0;
}

void swap(int* a , int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
} 
