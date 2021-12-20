#include <stdio.h>
#include <stdlib.h>


int main(){

    int ingresso[30];
    int op=1,opcao,total,quant,q;
    int i=0;
    int j=0;

    for(i=0;i<30;i++){
            ingresso[i]=0;
    }


    printf("********** VENDA DE INGRESSOS PARA O JOGO CRUZEIRO X ATLETICO **********\n");
    printf("1 - Ver Assentos Disponiveis\n");
    printf("2 - Comprar Ingressos\n");
    printf("3 - Sair\n");
    printf("\n");
    printf("Comando: ");
    scanf("%d", &opcao);
    printf("\n");

    while (opcao!=0){

        switch(opcao){
            case 1:
                for(i=0;i<30;i++){
                        if(ingresso[i]==1){
                        printf("\nAssentos Ocupados: [%d]", i);
                        }
                        else{
                        printf("\nNenhum assento ocupado!\n");
                        }
                    }
                break;
            case 2:

                for(i=0;i<=30;i++){
                        
                    while(op!=0){

                        printf("\nNumero da cadeira: ");
                        scanf("%d", &i);
                        
                        if(ingresso[i]==0){
                        printf("\nAssento reservado com sucesso!\n");
                        ingresso[i]=1;
                        }
                        
                        else{
                        printf("\nAssento ocupado!");
                        }
                        printf("\nDigite [1] para continuar comprando e [0] para parar\n");
                        scanf("%d", &op);
                    }   
                }
                break;
            case 3: 
                opcao = 0;
                break;

        }
    }
}