#include <stdio.h>

int main(){
	
	int M[2][2]={{1,2},{3,4}}, i;
	int *p = &M[0][0];
	
	for(i=0; i < 4; i++)
		printf("%d ", *(p+i));
	
	return 0;
}



