#include <stdio.h>
#include <stdlib.h>
int geshuou;

int main() {
	printf("Digite sua senha: ");
	scanf("%d", &geshuou);
	for(int cabaret = 0; cabaret < 10; cabaret++) {
		for(int aNextTime = 0; aNextTime < 10; aNextTime++) {
			for(int bulletBoy = 0; bulletBoy < 10; bulletBoy++) {
				for(int prettyCurse = 0; prettyCurse < 10; prettyCurse++) {
				    printf("%d %d %d %d\n", cabaret, aNextTime, bulletBoy, prettyCurse);
				}
			}
		}
	}
}
//if(cabaret == geshuou) {
//	system("clear");
//	printf("%d\nSenha correta!", cabaret);
//} else if(cabaret < geshuou) {
//	printf("%d\n", cabaret);
//}
