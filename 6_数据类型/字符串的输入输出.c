#include<stdio.h> 

int main(){
	
	//printf��scanf����%c����������ַ�
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
	
	//��Сдת��
	/*'a'-'A'���Եõ�����֮��ľ��룬����
		a+'a'-'A'���԰�һ����д��ĸ���Сд��ĸ��
		a+'A'-'a'���԰�һ��Сд��ĸ��ɴ�д��ĸ*/ 
		
		
	
	return 0;
}
