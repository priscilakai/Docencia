//Descreva o que ocorre em cada linha do programa indicada por //
#include <stdio.h>
int main(void) {
   int y, *p, x;
   y = 0;
   p = &y;
   x = *p;
   printf ("x = %d\n", x); //
   x = 4;
   (*p)++;
   printf ("p = %d\n", *p); //
   x--;
   printf ("x = %d\n", x);  //
   (*p) += x;
   printf ("y = %d\n", y);  //
   return(0);
}
