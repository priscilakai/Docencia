#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqCaractere.txt", "w");//cria o arquivo para gravação
	if(arq == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	
	do{
		printf("Caractere: ");
		fflush(stdin);
		ch=getchar();//leitura de caractere
	    fputc(ch, arq);//grava caractere no arquivo
	}while(ch != '\n');//digita ENTER ao invés de informar um caractere
	
	fclose(arq);//fecha o arquivo	
	return 0;
}
