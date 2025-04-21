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

    if(casas > 0){
        if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (casas > 0)){
            printf("Esquerda\n");
        } else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") == 0) && (casas > 0)){
            printf("Direita\n");
        }
        else 
        if ((strcmp(direcao, "CIMA") == 0 || strcmp(direcao, "cima") == 0) && (casas > 0)){
            printf("Cima\n");
        }else 
        if ((strcmp(direcao, "BAIXO") == 0 || strcmp(direcao, "baixo") == 0) && (casas > 0)){
            printf("Baixo\n");
        }
        movimentarTorre(direcao,casas - 1);
    }

    //[DEBUG]
    //printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    //printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
}
void movimentarBispo(char *direcao,char diagonal[5], int casas){

    if(casas > 0){

    if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)) {
            printf("Diagonal esquerda-cima\n");
    } else 
    if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)) {
            printf("Diagonal esquerda-baixo\n");
    }else 
    if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") ==0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)) {
            printf("Diagonal direita-cima\n");
    }else 
    if ((strcmp(direcao, "DIREITA") == 0|| strcmp(direcao, "direita") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)) {
            printf("Diagonal direita-baixo\n");
    }

        movimentarBispo(direcao,diagonal,casas - 1);
    }
    //DEBUG
    //printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    //printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
    //printf("[DEBUG] - Diagonal solicitada [%s]\n", diagonal);
}

void movimentarRainha(char *direcao,char diagonal[5], int casas){

    if(casas > 0){
        //DIAGONAIS
        if( (strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)) {
            printf("Diagonal esquerda-cima\n");
        } else 
        if( (strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)) {
            printf("Diagonal esquerda-baixo\n");
        }else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") ==0) && (strcmp(diagonal, "CIMA") == 0 || strcmp(diagonal, "cima") == 0)){
            printf("Diagonal direita-cima\n");
        }else 
        if ((strcmp(direcao, "DIREITA") == 0|| strcmp(direcao, "direita") == 0) && (strcmp(diagonal, "BAIXO") == 0 || strcmp(diagonal, "baixo") == 0)){
            printf("Diagonal direita-baixo\n");
        } 

        //RETAS
        if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && strcmp(diagonal, "null") == 0) {
            printf("Esquerda\n");
        } else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") == 0) && strcmp(diagonal, "null") == 0){
            printf("Direita\n");
        }
        else 
        if ((strcmp(direcao, "CIMA") == 0 || strcmp(direcao, "cima") == 0) && strcmp(diagonal, "null") == 0){
            printf("Cima\n");
        }else 
        if ((strcmp(direcao, "BAIXO") == 0 || strcmp(direcao, "baixo") == 0) && strcmp(diagonal, "null") == 0){
            printf("Baixo\n");
        }
        movimentarRainha(direcao,diagonal, casas - 1);
    }

       
    
    //DEBUG
    //printf("[DEBUG] - Quantidade de casas solicitadas [%d]\n", casas);
    //printf("[DEBUG] - Direcao solicitada [%s]\n", direcao);
    //printf("[DEBUG] - Diagonal solicitada [%s]\n", diagonal);
}

void movimentarCavalo(char *direcao, char *perpendicular){

    for(int i = 0, j = 0; i < 1 || j < 2; i++ , j++){
        if((strcmp(direcao, "ESQUERDA") == 0 || strcmp(direcao, "esquerda") == 0) && (j < 2)) {
                
            printf("Esquerda\n");
                
        } else 
        if ((strcmp(direcao, "DIREITA") == 0 || strcmp(direcao, "direita") == 0) && (j < 2)){
                
            printf("Direita\n");
                
        }
        else 
        if ((strcmp(direcao, "CIMA") == 0 || strcmp(direcao, "cima") == 0) && (j < 2)){
               
            printf("Cima\n");
                
        }else 
        if ((strcmp(direcao, "BAIXO") == 0 || strcmp(direcao, "baixo") == 0) && (j < 2)){
                
            printf("Baixo\n");
                     
        }
        
        if((strcmp(perpendicular, "ESQUERDA") == 0 || strcmp(perpendicular, "esquerda") == 0) && ( i < 1)){
            printf("Esquerda\n");
        } else 
        if((strcmp(perpendicular, "DIREITA") == 0 || strcmp(perpendicular, "direita") == 0) && ( i < 1)){
            printf("Direita\n");
        }
        if((strcmp(perpendicular, "CIMA") == 0 || strcmp(perpendicular, "cima") == 0) && ( i < 1)){
            printf("Cima\n");
        } else 
        if((strcmp(perpendicular, "BAIXO") == 0 || strcmp(perpendicular, "baixo") == 0) && ( i < 1)){
            printf("Baixo\n");
        }
    }
    //DEBUG
    //printf("[DEBUG] - esperado [2 movimentos para: %s -  1 movimento para: %s]\n", direcao, perpendicular);
}
    

int main(){
    
    //mostrarTabuleiro();

    
    //Movimenta a Torre
    printf("\n\nMOVIMENTANDO A TORRE\n\n");

    movimentarTorre("direita", 1);
    movimentarTorre("esquerda", 2);
    movimentarTorre("cima", 4);
    movimentarTorre("baixo", 1);
    
    
    //Movimenta o bispo
    printf("\n\nMOVIMENTANDO O BISPO\n\n");

    movimentarBispo("esquerda", "cima",3);
    movimentarBispo("esquerda", "baixo",1);
    movimentarBispo("direita", "cima",4);
    movimentarBispo("direita", "baixo",2);
    
    //movimentar rainha
    printf("\n\nMOVIMENTANDO A RAINHA\n\n");

    movimentarRainha("esquerda", "cima", 1);
    movimentarRainha("esquerda", "baixo", 1);
    movimentarRainha("esquerda", "null", 1);
    movimentarRainha("direita", "cima", 2);
    movimentarRainha("direita", "baixo", 2);
    movimentarRainha("direita", "null", 1);
    movimentarRainha("cima", "null", 1);
    movimentarRainha("baixo", "null", 1);
    

    //movimento cavalo
    printf("\n\nMOVIMENTANDO O CAVALO\n\n");

    movimentarCavalo("esquerda", "cima");
    movimentarCavalo("esquerda", "baixo");
    movimentarCavalo("direita", "cima");
    movimentarCavalo("direita", "baixo");
    movimentarCavalo("cima", "direita");
    movimentarCavalo("cima", "esquerda");
    movimentarCavalo("baixo", "direita");
    movimentarCavalo("baixo", "esquerda");
    
}