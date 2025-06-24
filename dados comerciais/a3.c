#include<stdio.h> 
int main(){ 
    //declaracao de a array de prco 
    float preco_produtos[3] = {19.99, 45.50, 9.75}; //inicializaacao direta 

    printf("precos dos produtos:\n");

    //loop para iterar sobre o array e imprimi cada  preco 
    
    for (int i = 0; i < 3; i++) {
        printf("produto %d: R$ %.2f\n", i + 1, preco_produtos[i]);
    } 

    //exemplo:ajustar um preco ( aumentar  em 10%) 

    preco_produtos[0]  =  preco_produtos[0] * 1.10;
    printf("\nNovo preco do produtows 1 (com 10%% de aumento) R$%.2F\n", preco_produtos[0]); 
    return 0;
}