#include <stdio.h>

int main()
{
	//ÿ���ٻ�rand()�͵õ�һ����������� 
	//x % n �Ľ����[0, n-1]��һ������ 
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮�������");
	do {
		printf("������1��100֮������");
		scanf("%d", &a);
		if ( a > number ) {
			printf("��µ������ˡ�");
		} else if ( a < number ) {
			printf("��µ���С�ˡ�");
		}
		count ++;
	} while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);

	return 0;
}
