#incluir <stdio.h>

int principal() {
    flutuador valorCompra,valorTotal;
    int tipoProduto;

    printf("Digite o valor da compra: ");
    scanf("%f",&valorCompra);

    printf("Digite o tipo do produto internacional (0 para tipo com taxa de 10%%, outro número para 20%%): ");
    scanf("%d",&tipoProduto);

    se(tipoProduto == 0) {
        valorTotal = valorCompra +(valorCompra * 0,10);
    }outro{
        valorTotal = valorCompra +(valorCompra * 0,20);
    }

    printf("O valor total a ser pago e: %.2f\n",valorTotal);
    retornar 0;
}