#include <stdio.h>

void movimentarTorre(char direcao[10], int casas){

    printf("\n\nMOVIMENTANDO A TORRE\n");

    if( direcao == "ESQUERDA" || direcao == "esquerda") {
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para esquerda\n", i);
        }
    } else if ( direcao == "DIREITA" || direcao == "direita"){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para direita\n", i);
        }
    }
    else if ( direcao == "CIMA" || direcao == "cima"){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para cima\n", i);
        }
    }else if ( direcao == "BAIXO" || direcao == "baixo"){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para baixo\n", i);
        }
    }

    //[DEBUG]
    printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
}
void movimentarBispo(char direcao[10],char diagonal[5], int casas){
    int i = 0;

    printf("\n\nMOVIMENTANDO O BISPO\n");

    while(i < casas){
        if( direcao == "ESQUERDA" || direcao == "esquerda" && diagonal == "CIMA" || diagonal == "cima") {
                printf("%d - Movimento para a diagonal esquerda-cima\n", i);
        } else 
            if( direcao == "ESQUERDA" || direcao == "esquerda" && diagonal == "BAIXO" || diagonal == "baixo") {
                printf("%d - Movimento para a diagonal esquerda-baixo\n", i);
        }else 
            if ( direcao == "DIREITA" || direcao == "direita" && diagonal == "CIMA" || diagonal == "cima"){
                printf("%d - Movimento para a diagonal direita-cima\n", i);
        }else 
            if ( direcao == "CIMA" || direcao == "cima" && diagonal == "BAIXO" || diagonal == "baixo"){
                printf("%d - Movimento para a diagonal direita-baixo\n", i);
        }
        
        i++;
    }
    printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
    printf("[DEBUG] - Diagonal solicitada [%s]\n", diagonal);
}
    

int main(){

    //torre - bispo - rainha

    //Movimenta a Torre
    movimentarTorre("direita", 2);
    movimentarTorre("esquerda", 2);
    movimentarTorre("direita", 4);
    movimentarTorre("esquerda", 1);

    //Movimenta o bispo
    movimentarBispo("esquerda", "cima",3);
    movimentarBispo("esquerda", "baixo",1);
    movimentarBispo("direita", "cima",4);
    movimentarBispo("direita", "baixo",2);
}