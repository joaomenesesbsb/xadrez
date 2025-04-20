#include <stdio.h>
#include <string.h>

//teste de montar um tabuleiro
void mostrarTabuleiro() {
    int linhas = 8;
    int colunas = 8;

    //casas eixo x
    printf("   A B C D E F G H\n");
    for (int i = 0; i < linhas; i++) {
        //casas eixo y
        printf("%d  ", 8 - i);  
        for (int j = 0; j < colunas; j++) {
            // Alternar entre os blocos claro e escuro
            if ((i + j) % 2 == 0) {
                printf("░░");
            } else {
                printf("██");
            }
        }
        printf(" %d\n", 8 - i); 
    }
    printf("   A B C D E F G H\n");
}

void movimentarTorre(char *direcao, int casas){

    printf("\n\nMOVIMENTANDO A TORRE\n");

    if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0)) {
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para esquerda\n", i);
        }
    } else 
    if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") == 0)){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para direita\n", i);
        }
    }
    else 
    if ((strcmp(direcao, "CIMA") == 0 || strcmp(direcao, "cima") == 0)){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para cima\n", i);
        }
    }else 
    if ((strcmp(direcao, "BAIXO") == 0 || strcmp(direcao, "baixo") == 0)){
        for(int i = 0; i < casas; i++){
            printf("%d - Movimento para baixo\n", i);
        }
    }

    //[DEBUG]
    printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
}
void movimentarBispo(char *direcao,char diagonal[5], int casas){
    int i = 0;

    printf("\n\nMOVIMENTANDO O BISPO\n");

    while(i < casas){
        if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)) {
                printf("%d - Movimento para a diagonal esquerda-cima\n", i);
        } else 
        if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)) {
                printf("%d - Movimento para a diagonal esquerda-baixo\n", i);
        }else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") ==0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)) {
                printf("%d - Movimento para a diagonal direita-cima\n", i);
        }else 
        if ((strcmp(direcao, "DIREITA") == 0|| strcmp(direcao, "direita") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)) {
                printf("%d - Movimento para a diagonal direita-baixo\n", i);
        }
        
        i++;
    }
    //DEBUG
    printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
    printf("[DEBUG] - Diagonal solicitada [%s]\n", diagonal);
}

void movimentarRainha(char *direcao,char diagonal[5], int casas){
    int i = 0;

    printf("\n\nMOVIMENTANDO O RAINHA\n");

    do{

        //DIAGONAIS
        if( (strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)) {
            printf("%d - Movimento para a diagonal esquerda-cima\n", i);
        } else 
        if( (strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)) {
            printf("%d - Movimento para a diagonal esquerda-baixo\n", i);
        }else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") ==0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)){
            printf("%d - Movimento para a diagonal direita-cima\n", i);
        }else 
        if ((strcmp(direcao, "DIREITA") == 0|| strcmp(direcao, "direita") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)){
            printf("%d - Movimento para a diagonal direita-baixo\n", i);
        } 

        //RETAS
        if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && strcmp(diagonal, "null") == 0) {
            printf("%d - Movimento para esquerda\n", i);
        } else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") == 0) && strcmp(diagonal, "null") == 0){
            printf("%d - Movimento para direita\n", i);
        }
        else 
        if ((strcmp(direcao, "CIMA") == 0 || strcmp(direcao, "cima") == 0) && strcmp(diagonal, "null") == 0){
            printf("%d - Movimento para cima\n", i);
        }else 
        if ((strcmp(direcao, "BAIXO") == 0 || strcmp(direcao, "baixo") == 0) && strcmp(diagonal, "null") == 0){
            printf("%d - Movimento para baixo\n", i);
        }
    i++;
    } while(i < casas);
       
    
    //DEBUG
    printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
    printf("[DEBUG] - Diagonal solicitada [%s]\n", diagonal);
}

void movimentarCavalo(char *direcao, char *perpendicular){

    int test = 1;
    int j = 0;
    
    printf("\n\nMOVIMENTANDO O CAVALO\n");

    for(int i = 0; i < test; i++){
        while (j < 2)
        {
            if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0)) {
                
                    printf("%d - Movimento para esquerda\n", i);
                
            } else 
            if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") == 0)){
                
                    printf("%d - Movimento para direita\n", i);
                
            }
            else 
            if ((strcmp(direcao, "CIMA") == 0 || strcmp(direcao, "cima") == 0)){
               
                    printf("%d - Movimento para cima\n", i);
                
            }else 
            if ((strcmp(direcao, "BAIXO") == 0 || strcmp(direcao, "baixo") == 0)){
                
                    printf("%d - Movimento para baixo\n", i);
                     
                   
            }
            j++; 
        }
        if((strcmp(perpendicular, "ESQUERDA") == 0 || strcmp(perpendicular, "esquerda") == 0)){
            printf("1 - Movimento para esquerda em perpendicular\n");
        } else 
        if((strcmp(perpendicular, "DIREITA") == 0 || strcmp(perpendicular, "direita") == 0)){
            printf("1 - Movimento para direita em perpendicular\n");
        }
        if((strcmp(perpendicular, "CIMA") == 0 || strcmp(perpendicular, "cima") == 0)){
            printf("1 - Movimento para cima\n");
        } else 
        if((strcmp(perpendicular, "BAIXO") == 0 || strcmp(perpendicular, "baixo") == 0)){
            printf("1 - Movimento para baixo\n");
        }
    }
    printf("[DEBUG] - esperado [2 movimentos para: %s -  1 movimento para: %s]\n", direcao, perpendicular);
}
    

int main(){
    
    /*
    //Movimenta a Torre
    movimentarTorre("direita", 2);
    movimentarTorre("esquerda", 2);
    movimentarTorre("cima", 4);
    movimentarTorre("baixo", 1);
    

    //Movimenta o bispo
    movimentarBispo("esquerda", "cima",3);
    movimentarBispo("esquerda", "baixo",1);
    movimentarBispo("direita", "cima",4);
    movimentarBispo("direita", "baixo",2);
    
    
    movimentarRainha("esquerda", "cima", 1);
    movimentarRainha("esquerda", "baixo", 1);
    movimentarRainha("esquerda", "null", 1);
    movimentarRainha("direita", "cima", 2);
    movimentarRainha("direita", "baixo", 2);
    movimentarRainha("direita", "null", 1);
    movimentarRainha("cima", "null", 1);
    movimentarRainha("baixo", "null", 1);


    //mostrarTabuleiro();
    */
    //movimento cavalo
    movimentarCavalo("esquerda", "cima");
    movimentarCavalo("esquerda", "baixo");
    movimentarCavalo("direita", "cima");
    movimentarCavalo("direita", "baixo");
    movimentarCavalo("cima", "direita");
    movimentarCavalo("cima", "esquerda");
    movimentarCavalo("baixo", "direita");
    movimentarCavalo("baixo", "esquerda");

}