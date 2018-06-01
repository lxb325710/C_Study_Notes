#include<stdio.h>
int main(){
	int amount1 ; 
	
	/*组合变量定义的时候，也可以在这个定义中单独给单个变量赋初值，如*/
	int price = 50 ,amount = 100;
	
	/*固定不变的数，是常数。直接写在程序里，我们称作直接量使用const修饰*/
	/*这个const的属性表示这个变量的值.一旦初始化，就不能再修改了*/ 
	const int amount2 = 110;
	printf("","");
	
	int change ;

	printf("请输入票面:\n");
	
	/*输入是以行为单位进行的，行的结束标志就是你按下了回车键。
	在你按下回车之前，你的程序不会读到任何东西*/ 
	
	scanf("%d",&change);
	
	printf("找您:%d元\n",change-50);
	printf("数量为(已初始化变量):%d \n",amount);
	
	printf("数量为(未初始化变量):%d \n",amount1);
	
	
} 
