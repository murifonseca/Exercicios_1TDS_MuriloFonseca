#include<stdio.h>

int coelhos = 1;
int coelhoaAnterior = 1;
int linhasTotais;

int main() {
	printf("quantas gerações você deseja?\n");
	scanf("%d", &linhasTotais);
	for(int geracao = 1; geracao <= linhasTotais; geracao++) {
		printf("geração: %d --- quantia de coelhos: %d\n\n", geracao, coelhos);
		coelhoaAnterior = coelhoaAnterior * 2;
		coelhos = coelhoaAnterior * 2 - 1;
	}
}