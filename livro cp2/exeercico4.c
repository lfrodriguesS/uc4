#include<stdio.h>  
int main(){ 

int a = 1; 
int b = 3; 
int aux; 
printf("valor de a  %d", a);
printf("valor b %d", b);
aux = a; 
a = b;
b = aux; 
printf("valor de a  %d", a);
printf("valor b %d", b);
}