#incluir <stdio.h>Adicionar comentarMais ações

#definir PI3.14

int principal(){

    int opção;
    printf("Digite 1 para circulo, ou Digite 2 para retangulo: \n");
    scanf("%d",&opção);
    
    trocar(opção)
    {
    caso 1: {
        flutuador raio,área;
        printf("============= Cálculo do circulo ============== \n\n");
        printf("Digite o raio do círculo: \n");
        scanf("%f",&raio);
        área = PI * raio * raio;
        printf("A área do círculo é: %.2f\n",área);
        quebrar;
    }
    caso 2: {
        flutuador base,altura,área;
        printf("============= Cálculo do retângulo ============== \n\n");
        printf("Digite a base do retângulo: \n");
        scanf("%f",&base);
        printf("Digite a altura do retângulo: \n");
        scanf("%f",&altura);
        área = base * altura;
        printf("A área do retângulo e: %.2f\n",área);
        quebrar;
    }
    padrão:
        printf("Opção invalida. Por favor, digite 1 para circulo ou 2 para retangulo.\n");
        quebrar;
    }

    retornar 0;
}
 