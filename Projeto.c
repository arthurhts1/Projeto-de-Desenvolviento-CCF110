//Programa para a venda de ingressos de um jogo de futebol, para duas torcidas, 2 setores para cada time;
// 600 ingressos, 100 ingressos para cada setor inferior e 200 para cada setor superior

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,menu,time, op, setor, vendasetor1=0, vendasetor2=0, vendasetor3=0, vendasetor4=0;
    int n=600, totalvendido=0, quant1[100]={0}, quant2[200]={0}, quant3[100]={0},quant4[200]={0},CAD[600][600];
    int contTorcedor=0, idsTorcedor[n];


    int id;

    //cadastro de cliente para compra
    printf("Digite o ID: \n");
    scanf("%d",&id);


    while(id > 0 ){
        idsTorcedor[contTorcedor] = id;

        contTorcedor++;

        printf("Digite o ID ou 0 para comprar ingresso: \n");
        scanf("%d",&id);
        //printf("Para sair digite 0 ");
        //scanf("%d",&id);
    }

    //Zera os valores das cadeiras
    for(i=0;i<=30;i++){
        for(j=0;j<=60;j++){
            CAD[i][j]=0;
        }
    }


        for (int i=0;i<contTorcedor;i++){

            //Menu
            printf("******VENDA DE INGRESSOS******\n");
            printf("[1] Ver assentos disponiveis");
            printf("[2] Escolher time");
            printf("\nComando: ");
            scanf("%d", &menu);

            switch(menu){
                case 1:
                    for(i=0;i<=30;i++){
                        for(j=0;j<=60;j++){
                            if(CAD[i][j]==1){
                            printf("\nAssentos Ocupados: [%d][%d]", i, j);
                            }
                            else{
                                printf("\nNenhum assento ocupado!\n");
                            }
                        }
                    }


                case 2:
                    //submenu
                    printf("******VENDA DE INGRESSOS******\n");
                    printf("Escolha o seu time:\n[1] Time local \n[2] Time visitante");
                    printf("\nComando: ");
                    scanf("%d", &time);

                    //Escolha do time
                    switch(time){
                        case 1:
                            printf("\n[1] Setor inferior (R$100,00)\n[2] Setor superior (R$50,00)\n");
                            printf("Comando: ");
                            scanf("%d", &setor);

                            //escolha dos setores
                            switch(setor){
                                case 1:
                                    printf("\nQuantos ingressos deseja comprar: ");
                                    scanf("%d", &quant1[i]);
                                    break;
                                case 2:
                                    printf("\nQuantos ingressos deseja comprar: ");
                                    scanf("%d", &quant2[i]);
                                    break;
                                default:
                                    printf("Setor invalido!\n");
                            }
                            break;
                        case 2:
                            printf("\n[3] Setor inferior (R$100,00)\n[4] Setor superior (R$50,00)\n ");
                            printf("\nComando: ");
                            scanf("%d", &setor);
                            //escolha dos setores
                            switch(setor){
                                case 3:
                                    printf("\nDigite a quantidade de ingressos: ");
                                    scanf("%d", &quant3[i]);
                                    break;
                                case 4:
                                    printf("\nDigite a quantidade de ingressos: ");
                                    scanf("%d", &quant4[i]);
                                    break;
                                default:
                                    printf("Setor invalido!\n");
                            }
                            break;
                        default:
                            printf("Opcao invalida!\n");
                    }
                    break;
            }
        //controle de ingressos vendidos em cada setor  ***
        for (int i=0;i<contTorcedor;i++){
            vendasetor1 += quant1[i];
            vendasetor2 += quant2[i];
            vendasetor3 += quant3[i];
            vendasetor4 += quant4[i];
            totalvendido = vendasetor1 + vendasetor2 + vendasetor3 + vendasetor4;
        }

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
