#include <stdio.h>
int linhasTotais;

int main() {
	printf("quantidade de linhas: ");
	scanf("%d", &linhasTotais);
	for(int linhas = 1; linhas <= linhasTotais; linhas ++) {
	    for(int espaco = linhas; espaco <= linhasTotais - 1; espaco++){
	        printf(" ");
	    }
	    for(int asterico = 1; asterico <= linhas + linhas - 1; asterico ++){
	        printf("*");
	    }
	    printf("\n");
	}
}