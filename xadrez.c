#include <stdio.h>

void movimentarTorre(char direcao[10], int casas){

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
            printf("%d - Movimento para CIMA\n", i);
        }
    }else if ( direcao == "BAIXO" || direcao == "baixo"){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para baixo\n", i);
        }
    }
    

    
}
    

int main(){

    //torre - bispo - rainha
    movimentarTorre("direita", 8);
}