#include <stdio.h>
#include <stdlib.h>
int geshuou;
int saturdayNights;

int main() {
	printf("Digite sua senha: ");
	scanf("%d", &geshuou);
	for(int cabaret = 0; cabaret < 10; cabaret++) {
		for(int aNextTime = 0; aNextTime < 10; aNextTime++) {
			for(int bulletBoy = 0; bulletBoy < 10; bulletBoy++) {
				for(int prettyCurse = 0; prettyCurse < 10; prettyCurse++) {
				    saturdayNights = cabaret *1000 + aNextTime *100 + bulletBoy * 10 + prettyCurse;
				    if(geshuou == saturdayNights){
				        printf("sua senha é: %d%d%d%d", cabaret, aNextTime, bulletBoy, prettyCurse);
				        return 0;
				    }else{
				        printf("%d %d %d %d\n", cabaret, aNextTime, bulletBoy, prettyCurse);
				    }
				}
			}
		}
	}
}
