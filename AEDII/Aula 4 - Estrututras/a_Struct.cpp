/* Exercicio a_Struct
Entrada de nome e nota de 5 alunos
Mostra nome, nota da p1, nota da p2 e média.
*/


#include <stdio.h>

int main(){
    struct CAD_ALUNO{
           char NOME[40];
           float NOTA[2];
    };

    struct CAD_ALUNO REGALUNO[5];

    int I;
    float NOTA_AUX;

    //Entrada de Dados
    printf("Digite abaixo as informações de nome e nota dos alunos\n");
    for (I=0;I<=4;I++){
        printf("\n%2do. Nome: ", I +1);
        fflush(stdin);fgets(REGALUNO[I].NOME, 40, stdin); //stdin: dispositivo de entrada padrão (geralmente o teclado)
        printf("Nota P1: ");
        fflush(stdin); scanf("%f",&NOTA_AUX);
        REGALUNO[I].NOTA[0] = NOTA_AUX;
        printf("Nota P2: ");
        fflush(stdin); scanf("%f",&NOTA_AUX);
        REGALUNO[I].NOTA[1] = NOTA_AUX;
    }

    //SAIDA
    printf("\n\nRelacao de Alunos\n\n");
    for (I=0;I<=4;I++)
        printf("Nome: %s; P1: %.2f; P2: %.2f\n", REGALUNO[I].NOME, REGALUNO[I].NOTA[0], REGALUNO[I].NOTA[1]);

    return 0;
}
