/*

char characters %c
floats 6-7 digits %f
doubles 12-13 digits %lf 
int integers %d


*/


#include <stdio.h>

int main(){

int i, crap, df;
double money, salesTax, due



printf("Lets add 2 intergets\n");

printf("What is the value of i?\n");
scanf("%d", &i);

printf("What is the value of crap?\n");
scanf("%d", &crap);

df = i + crap;

    printf("The value of %d + %d is %d\n", i, crap, df);


printf("What is the value of money?\n");
scanf("%lf", &money);

printf("What is the value of salesTax?\n");
scanf("%lf", &salesTax);

due = money * salesTax;

printf("The product of %lf and %lf", money, salesTax, due);


    return 0;