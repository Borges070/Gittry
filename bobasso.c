#include <string.h>
#include <stdio.h>
int main(void){

char inf[50];
    int cont, l;
    char carac;

    printf("Informe o caractere que será procurado: ");
    carac = getchar();
getchar();
    printf("Informe a string: ");
    fgets(inf, 50, stdin);


for(l=0; l<50; l++){
	if (carac == inf[l]){
		printf("o caractere foi encontrado na posição %d\n", l);
	}
	
}
    return 0;
}