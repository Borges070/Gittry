#include <stdio.h>

int main(void) {

int l, i; //contadores
    printf("Informe os numeros: ");
int matriz[3][4];


    for(l=0; l<3; l++){
        for(i=0; i<4; i++){
            printf("Cordenada, L%d, C%d", l, i);
            scanf("%d", &matriz[l][i]);
        }
    }
    //printando a  matriz
    for(l=0; l<3; l++){
        for(i=0; i<4; i++){
            printf("%d", matriz[l][i]);
        }
        printf("\n");
    }
    return 0;
}

