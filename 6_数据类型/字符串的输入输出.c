#include<stdio.h> 

int main(){
	
	//printf和scanf里用%c来输入输出字符
	char c ;
	int i ;
	
	scanf("%c",&c);
	scanf("%d",&i);
	
	printf("%c %i %c \n",c,i,i);
	
	char a = 'a';
	a++;
	printf("%c\n",a);
	
	int x = 'Z' - 'a' ;
	printf("%d",x);
	
	//大小写转换
	/*'a'-'A'可以得到两段之间的距离，于是
		a+'a'-'A'可以把一个大写字母变成小写字母，
		a+'A'-'a'可以把一个小写字母变成大写字母*/ 
		
		
	
	return 0;
}
