/*

char characters %c
floats 6-7 digits %f
doubles 12-13 digits %lf 
int integers %d


*/


#include <stdio.h>

int main(){

int i, crap, df;



printf("Lets add 2 intergets\n");

printf("What is the value of i?\n");
scanf("%d", &i);

printf("What is the value of crap?\n");
scanf("%d", &crap);

df = i + crap;

    printf("The value of %d + %d is %d\n", i, crap, df);

    return 0;
}