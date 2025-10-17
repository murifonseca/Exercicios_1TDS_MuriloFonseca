#include <stdio.h>
int numero = 0;
int linhaTotal;
int main(){
    printf("quantas linhas gostaria?\n");
    scanf("%d", &linhaTotal);
    for(int linhas =0; linhas < linhaTotal; linhas++){
        for(int i = 0; i <= linhas; i++){
            numero++;
            printf(" %d", numero);
        }
        printf("\n");
    }
}