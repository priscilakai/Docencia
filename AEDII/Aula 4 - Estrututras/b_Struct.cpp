/* Exercicio b_Struct
Entrada de nome e nota de 10 alunos
Mostra a media, a maior nota, e a menor nota.

OBS: primeiro dar entrada de todos os dados, para depois processar

*/


#include <stdio.h>

int main()
{
    struct CAD_ALUNO
    {
           char NOME[40];
           float NOTA[5];
    };
     
    struct CAD_ALUNO REGALUNO[5];

    int I, J;
    float SOMA, MEDIA_DA_CLASSE, MENORNOTA, MAIORNOTA, NOTA_AUX;
    
    //Entrada de Dados
    printf("Digite abaixo as informacoes de nome e nota dos alunos\n");
    for (I=0;I<=4;I++)
    { 
        printf("\n%2do. Nome: ", I +1);
        fflush(stdin);fgets(REGALUNO[I].NOME, 40, stdin);

        SOMA = 0;
        for  (J=0;J<=3;J++)
        {
            printf("\nNota %d.o bi: ", J+1);
            fflush(stdin); scanf("%f",&NOTA_AUX);
            REGALUNO[I].NOTA[J] = NOTA_AUX;
            SOMA = SOMA + NOTA_AUX;
        }
        REGALUNO[I].NOTA[4] = SOMA/4;
        
        }
    
    //PROCESSAMENTO
    SOMA=0;
    MENORNOTA=REGALUNO[0].NOTA[0];
    MAIORNOTA=0;

    for (I=0;I<=4;I++)
    { 
        SOMA += REGALUNO[I].NOTA[4];
        for (J=0; J<=3; J++)
        {
            if (REGALUNO[I].NOTA[J] < MENORNOTA)
               MENORNOTA=REGALUNO[I].NOTA[J];
            if (REGALUNO[I].NOTA[J] > MAIORNOTA)
               MAIORNOTA=REGALUNO[I].NOTA[J];
        }        
    }
    MEDIA_DA_CLASSE=SOMA/5;
    
    //SAIDA
    printf("\nMedia: %.2f", MEDIA_DA_CLASSE);
    printf("\nMaior Nota: %.2f", MAIORNOTA);
    printf("\nMenor Nota: %.2f\n", MENORNOTA);
              
    return 0; 
}
