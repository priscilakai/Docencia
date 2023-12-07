#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int i, *p;
	
	p = (int*)malloc(sizeof(int)*10);
	if(p!=NULL)//memória alocada com sucesso
		for(i=0; i < 10; i++)
			p[i] = i+1;
	else
		exit(1);
	
	for(i=0; i < 10; i++)
		printf("%d ", p[i]);

	free(p);//libera memória

	return 0;
}
