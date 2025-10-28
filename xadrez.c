#include <stdio.h>

// movimento da Torre
void moveTorre (int casas){
    if (casas > 0) {
        printf("Direita\n");
        moveTorre(casas -1);
    }
}

// movimento da Rainha
void moveRainha (int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moveRainha(casas -1);
    }
}

int main(){
    int opcao;
    int i = 1;


 //menu 
printf("****** simulacao dos movimentos das peças do xadrez ******\n");
printf("1. Movimento do Rainha\n");
printf("2. Movimento da Bispo\n");
printf("3. Movimento da Cavalo\n");
printf("4. Movimento do Torre\n");
printf("Escolha uma das opcoes acima para mover: \n");
scanf("%d", &opcao);



switch (opcao) {

    //Rainha se move 8 casas para a esquerda
case 1:
    printf("Movimentando a Rainha:\n");
    moveRainha(8);
    break;
//Bispo se move 5 casas na diagonal direita para cima. 
case 2:
    printf("Movimentando o Bispo:\n");
for (int i = 1; i <= 5; i++){
    for (int j = 1; j <= 1; j++){
        printf("Direita\n");
    }
    printf("Cima\n");
    }
    break;

//Cavalo se move  1 vez em L sendo duas casas para cima e uma para  direita. 
case 3:
    printf("Movimentando o Cavalo:\n");
    for (int i = 0, j = 4; i < j; i++, j--){
        printf("Cima\n"); /*imprime 2 vezes*/
    }
    printf("Direita\n"); /*imprime 1 vez*/
    break;

    //Torre se move 5 casas para a direita
case 4:
    printf("Movimentando a Torre:\n");
    moveTorre(5);
    break;

default:
    printf("Opcao invalida\n");
    break;
    }

    return 0;
}
