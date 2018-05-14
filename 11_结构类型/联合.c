#include<stdio.h> 
int main(){
	union AnElt{
		char c;
		int i ;
		//long l;
	}elt1,elt2;
	
	elt1.i = 4;
	elt2.c = 'a';
	//elt2.l = 1000000000;
	printf("%d",sizeof(elt1));
	
	return 0 ;
}
