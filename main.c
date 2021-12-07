//Programa para a venda de ingressos de um jogo de futebol, para duas torcidas, com diferentes setores
//Com um limite de pessoas por lote de vendas e setor;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant1, quant2, quant3, setor, setor1=0, setor2=0, setor3=0;
    printf("Escolha o setor que deseja comprar: 1,2,ou 3: ");
    scanf("%d", &setor);
    switch(setor){
        case 1:
            printf("Digite a quantidade de ingressos: ");
            scanf("%d", &quant1);
            setor1 += quant1;
            break;
        case 2:
            printf("Digite a quantidade de ingressos: ");
            scanf("%d", &quant2);
            setor2 += quant2;
            break;
        case 3:
            printf("Digite a quantidade de ingressos: ");
            scanf("%d", &quant3);
            setor3 += quant3;
            break;
        default:
            printf("Setor invalido!\n");
        }

        printf("Ingressos vendidos setor 1: %d\n", setor1);
        printf("Ingressos vendidos setor 2: %d\n", setor2);
        printf("Ingressos vendidos setor 3: %d\n", setor3);

    return 0;
}
