//EXemplo:
// Qual a ordem de chamada da função rec e os respectivos valores passados por ela? Quais serão os valores impressos no vídeo?
#include <stdio.h>
void rec(int);

int main(void) {
   rec(40);
   return 0;
}

void rec(int a){
  int valor;
  valor = a/2;
  if (valor > 0)
  	rec(valor);
  printf(" %d ", valor);
}
/* Resolução:

    Empilha			    Desempilha
    chamada				(retorno no printf)
6		rec(1)			0 (não foi empilhado mas foi escrito no printf)						
5		rec(2)			1
4		rec(5)			2
3		rec(10)			5
2		rec(20)			10
1       rec(40)			20

*/


//2. Complete o empilhamento e desempilhamento das chamadas nos comentários a seguir
#include <stdio.h>
int rec1(int a);

int main (void){
   printf(" %d ",rec1(4));
   return 0;
}

int rec1(int a){
    if (a == 0)
       return 1;
    else
       return (a*rec1(a-1));
}

/* Resolução
    Empilha			    Desempilha
5	  1*rec1(0)				1*1
4	  2*rec1(1)				2*1
3	  3*rec1(2)				3*2
2     4*rec1(3)				4*6
1       rec1(4)				24

*/

//3. Dada a seguinte função:
//Informar qual o valor retornado por F1 para as seguintes chamadas e mostre a ordem de empilhamento e desempilhamento das chamadas para cada item:
//a) F1(4) = 12		b) F1(10) = 21	c) F1(12) =  45

#include <stdio.h>
int F1 (int);
int main()
{
	printf("%d", F1(12));
	return 0;
}

int F1 (int x){
    if (x < 5)
       return (3*x);
    else
       return (2*F1(x-5)+7);
}
/*Resolução
a) F1(4) = 12				b)F1(10)=21					C)F1(12)=45
chamada		retorno			chamada 	retorno			chamada		retorno
F1(4)		3*4  			F1(0)		2*0+7			F1(2)		2*6+7
							F1(5)		2*7+7			F1(7)		2*19+7
							F1(10)		21				F1(12)		45
*/



//4. Dada a seguinte função:
//Informar qual o valor retornado por F2 para as seguintes chamadas:
//a) F2(2, 7) = -3		b) F2(5, 3) = 0	c) F2(15, 3) = 6

#include<stdio.h>
int F2 (int, int);

int F2 (int x, int y){
    if (x < y)
       return (-3);
    else
       return (F2(x - y, y + 3) + y);
}

int main()
{
	printf("%d", F2(15,3));
	return 0;
}
/*Resolução
a) F2(2,7) = -3				b) F2(5,3) = 0				C) F2(15,3) = 6
chamada		retorno			chamada,y		retorno		chamada, y		retorno
F2(2,7)     -3              F2(2,6) 3		-3+3		F2(6,9)  6      -3+6
							F2(5,3)  	     0			F2(12,6) 3       3+3
														F2(15,3)         6
*/
