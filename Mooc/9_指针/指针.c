#include<stdio.h>
int main(int argc, char const *argv[])
{
	/*
		指针就是保存地址的变量
		[例如]
			int i;
			int* p = &i;
	*/

	/*
		与普通变量的区别:
			• 普通变量的值是实际的值
			• 指针变量的值是具有实际值的变量的地址
	*/

	/*
		*运算符:
			1 *是一个单目运算符，用来访问指针的值所表示的地址上的变量
			2 可以做右值也可以做左值
				int k = *p;
  				*p = k+1;
	*/

	return 0;
}