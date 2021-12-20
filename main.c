//Programa para a venda de ingressos de um jogo de futebol, para duas torcidas, com diferentes setores
//Com um limite de pessoas por lote de vendas e setor;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time, visitante, local, quant1, quant2, quant3,quant4, setor, vendasetor1=0, vendasetor2=0, vendasetor3=0, vendasetor4=0;
        
        printf("Escolha o seu time:\n[1] Time local \n [2] Time visitante: ");
        scanf("%d", &time);

        switch(time){
            case 1:
                printf("[1] Setor 1 inferior (R$100,00)\n[2] Setor 2 superior (R$50,00)\n");
                scanf("%d", &setor);
                switch(setor){
                    case 1:
                        printf("Quantos ingressos deseja comprar: ");
                        scanf("%d", &quant1);
                        vendasetor1 += quant1;
                        break;
                    case 2:
                        printf("Quantos ingressos deseja comprar: ");
                        scanf("%d", &quant2);
                        vendasetor2 += quant2;
                        break;
                    default:
                        printf("Setor invalido!\n");
                }
            break;
            case 2:
                printf("Escolha o setor que deseja comprar: 3 ou 4: ");
                scanf("%d", &setor);
                switch(setor){
                    case 3:
                        printf("Digite a quantidade de ingressos: ");
                        scanf("%d", &quant3);
                        vendasetor3 += quant3;
                        break;
                    case 4:
                        printf("Digite a quantidade de ingressos: ");
                        scanf("%d", &quant4);
                        vendasetor4 += quant4;
                        break;
                    default:
                        printf("Setor invalido!\n");
                }
            break;
        }

        printf("Ingressos vendidos setor 1: %d\n", vendasetor1);
        printf("Ingressos vendidos setor 2: %d\n", vendasetor2);
        printf("Ingressos vendidos setor 3: %d\n", vendasetor3);
        printf("Ingressos vendidos setor 4: %d\n", vendasetor4);

    return 0;
}
