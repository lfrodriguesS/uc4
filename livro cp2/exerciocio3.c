#include<stdio.h>  
#include <math.h>
int main() { 

  int a, b, c, delta; 
  float x1, x2;
  
   printf("insira um valor para a:\n"); 
   scanf("%d", &a); 
   printf("insira um valor para b:\n");
   scanf("%d", &b); 
   printf("insira um valor para c:\n");
   scanf("%d", &c);
   
    delta=b*b-4*a*c;
   if (delta < 0 ) { 
       printf("nao possuem raizes real");
   }

   if (delta ==  0){ 

    printf("possuem uma raiz real"); 
       x1=(-b+sqrt(delta))/(2*a); 
    printf("a raiz e: %f",x1); 
    
    }
    if (delta > 0){ 
      
    printf("possuem duas raizes reais ");
        x1=(-b+sqrt(delta))/(2*a); 
    printf("a raiz e %f",x1);
        
        x2=(-b-sqrt(delta))/(2*a); 
    printf(" a raiz e %f", x2);

    }
     

}