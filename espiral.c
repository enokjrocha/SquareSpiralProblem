//ENOK JANUARIO DA ROCHA
//BACHARELADO EM CIENCIA DA COMPUTACAO
//MATEMATICA DISCRETA
//GRAU DE COMPLEXIDADE DA SOLUCAO ABAIXO: O(N)
//PROBLEMA IMPOSTO: ESPIRAL QUADRADA

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {
	unsigned int x=0,y=0,CONTADOR_DE_PASSOS_1=1,CONTADOR_DE_PASSOS_2=2,PONTO_ATUAL,PONTO_OBJETIVO;
	printf("Bem-vindo a espiral quadrada\nDigite um ponto pertencente a ela para saber as coordenadas do mesmo: ");
	scanf("%d",&PONTO_OBJETIVO);
	while (PONTO_ATUAL<PONTO_OBJETIVO){
		if (PONTO_ATUAL<PONTO_OBJETIVO){
			y=y+(CONTADOR_DE_PASSOS_1);
			PONTO_ATUAL=PONTO_ATUAL+(CONTADOR_DE_PASSOS_1);
				if (PONTO_ATUAL>PONTO_OBJETIVO){
					y=y-(PONTO_ATUAL-PONTO_OBJETIVO);
				}
		}
			if (PONTO_ATUAL==PONTO_OBJETIVO){break;}
				if (PONTO_ATUAL<PONTO_OBJETIVO){
					x=x-(CONTADOR_DE_PASSOS_1);
					PONTO_ATUAL=PONTO_ATUAL+(CONTADOR_DE_PASSOS_1);
						if (PONTO_ATUAL>PONTO_OBJETIVO){
							x=x+(PONTO_ATUAL-PONTO_OBJETIVO);
						}
				}
					if (PONTO_ATUAL==PONTO_OBJETIVO){break;}
						if (PONTO_ATUAL<PONTO_OBJETIVO){
							y=y-(CONTADOR_DE_PASSOS_2);
							PONTO_ATUAL=PONTO_ATUAL+(CONTADOR_DE_PASSOS_2);
								if (PONTO_ATUAL>PONTO_OBJETIVO){
									y=y+(PONTO_ATUAL-PONTO_OBJETIVO);
								}
						}
							if (PONTO_ATUAL==PONTO_OBJETIVO){break;}
								if (PONTO_ATUAL<PONTO_OBJETIVO){
									x=x+(CONTADOR_DE_PASSOS_2);
									PONTO_ATUAL=PONTO_ATUAL+(CONTADOR_DE_PASSOS_2);
										if (PONTO_ATUAL>PONTO_OBJETIVO){
											x=x-(PONTO_ATUAL-PONTO_OBJETIVO);
										}
								}
									if (PONTO_ATUAL==PONTO_OBJETIVO){break;}
	CONTADOR_DE_PASSOS_1=CONTADOR_DE_PASSOS_1+2;
	CONTADOR_DE_PASSOS_2=CONTADOR_DE_PASSOS_2+2;
	}
	printf ("\nAs coordenadas do ponto %d sao: (%d,%d)\n",PONTO_OBJETIVO,x,y);
 	return 0;
}
