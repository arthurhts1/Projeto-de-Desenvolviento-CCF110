//Programa para a venda de ingressos de um jogo de futebol em 4 setores;
// 2000 ingressos;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,id=1,op=1;
    int setor,contTorcedor=0, vendasetor1=0, vendasetor2=0, vendasetor3=0, vendasetor4=0,n=2000, totalvendido=0;;
    int setor1[20][40],setor2[10][20],setor3[20][40],setor4[10][20];
    int *idsTorcedor;


    idsTorcedor = malloc(contTorcedor * sizeof(int));

    while(id > 0){

        idsTorcedor[contTorcedor] = id;

        contTorcedor++;

        printf("Digite o ID (Digite 0 para sair): ");
        scanf("%d",&id);
    }

    //Zera os valores das cadeiras
    for (i=0;i<20;i++){
        for (j=0;j<40;j++){
            setor1[i][j] = 0;
            setor2[i][j] = 0;
        }
    }
    for (i=0;i<10;i++){
        for (j=0;j<20;j++){
            setor2[i][j] = 0;
            setor4[i][j] = 0;
        }
    }

    for (i=0;i<contTorcedor;i++){

        //Menu
        printf("******VENDA DE INGRESSOS******\n");
        printf("Escolha o setor:\n");
        printf("[1] Setor 1 (R$20,00) | [2] Setor 2 (R$10,00) | [3] Setor 3 (R$20,00) | [4] Setor 4 (R$10,00) ");
        printf("\nComando: ");
        scanf("%d", &setor);

        //Escolha do Setor
        switch(setor){
            case 1:
                printf("\n*****SETOR 1******\n\n");
                while (op != 0){

                    printf("Digite o id: ");
                    scanf("%d",&id);

                    printf("Escolha a linha e a coluna do ingresso: \n");
                    printf("Linha (0-20): ");
                    scanf("%d",&i);
                    printf("Coluna (0-40): ");
                    scanf("%d",&j);

                    setor1[i][j] = id;
                    vendasetor1++;

                    printf("[0] Para sair [1] Para comprar outro ingresso\n");
                    printf("Comando: ");
                    scanf("%d",&op);
                }
                break;
            case 2:
                printf("\n*****SETOR 2******\n\n");
                while (op != 0){

                    printf("Digite o id: ");
                    scanf("%d",&id);

                    printf("Escolha a linha e a coluna do ingresso: \n");
                    printf("Linha (0-20): ");
                    scanf("%d",&i);
                    printf("Coluna (0-40): ");
                    scanf("%d",&j);

                    setor2[i][j] = id;
                    vendasetor2++;

                    printf("[0] Para sair [1] Para comprar outro ingresso\n");
                    printf("Comando: ");
                    scanf("%d",&op);
                }
                break;
            case 3:
                printf("\n*****SETOR 3******\n\n");
                while (op != 0){

                    printf("Digite o id: ");
                    scanf("%d",&id);

                    printf("Escolha a linha e a coluna do ingresso: \n");
                    printf("Linha (0-20): ");
                    scanf("%d",&i);
                    printf("Coluna (0-40): ");
                    scanf("%d",&j);

                    setor3[i][j] = id;
                    vendasetor3++;

                    printf("[0] Para sair [1] Para comprar outro ingresso\n");
                    printf("Comando: ");
                    scanf("%d",&op);
                }
                break;
            case 4:
                printf("\n*****SETOR 4******\n\n");
                while (op != 0){

                    printf("Digite o id: ");
                    scanf("%d",&id);

                    printf("Escolha a linha e a coluna do ingresso: \n");
                    printf("Linha (0-20): ");
                    scanf("%d",&i);
                    printf("Coluna (0-40): ");
                    scanf("%d",&j);

                    setor4[i][j] = id;
                    vendasetor4++;

                    printf("[0] Para sair [1] Para comprar outro ingresso\n");
                    printf("Comando: ");
                    scanf("%d",&op);
                }
                break;
            default:
                printf("Setor invalido!\n");
        }
        break;

        totalvendido = vendasetor1 + vendasetor2 + vendasetor3 + vendasetor4;
        n -= totalvendido;

        printf("\nDigite qualquer numero para continuar ou 0 para encerrar: ");
        scanf("%d", &op);

        if (op==0){
            break;
        }
    }

    printf("Ingressos vendidos setor 1: %d\n", vendasetor1);
    printf("Ingressos vendidos setor 2: %d\n", vendasetor2);
    printf("Ingressos vendidos setor 3: %d\n", vendasetor3);
    printf("Ingressos vendidos setor 4: %d\n", vendasetor4);
    printf("Total de ingressos vendidos: %d\n", totalvendido);
    printf("Ingressos nao vendidos: %d", n);
    printf("\n\n");
    printf("Total de torcedores: %d",contTorcedor);
    printf("\n\n");



    return 0;
}
