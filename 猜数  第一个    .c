#include<stdio.h>
int main()
{
	int x,i;
	int a=665;
	scanf("%d",&x);
	for(i=1;x!=a;i++){
		if(x>a){
			printf("�´���\n");
		}else {
			printf("��С��\n");
	}
	scanf("%d",&x); 
	}
	printf("right\n");
	printf("����Ϊ%d",i);
	return 0;
} 
