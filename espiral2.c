//ENOK JANUARIO DA ROCHA
//BACHARELADO EM CIENCIA DA COMPUTACAO
//MATEMATICA DISCRETA
//GRAU DE COMPLEXIDADE DA SOLUCAO ABAIXO: O(RAIZ DE N)
//PROBLEMA IMPOSTO: ESPIRAL QUADRADA

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc,char *argv[]){
	unsigned int ponto,y=0,x=0,PONTO_PROXIMO;
	printf("Bem-vindo a espiral quadrada\nDigite um ponto pertencente a ela para saber as coordenadas do mesmo: ");
	scanf("%d",&ponto);
	PONTO_PROXIMO=round(sqrt(ponto))*round(sqrt(ponto));
		if (PONTO_PROXIMO%2>0){
			if (PONTO_PROXIMO>ponto){
				x=floor(sqrt(PONTO_PROXIMO)/2);
				y=ceil((sqrt(PONTO_PROXIMO))/2)-(PONTO_PROXIMO-ponto);
			}
				if (PONTO_PROXIMO<ponto){
					x=floor((sqrt(PONTO_PROXIMO))/2)-(ponto-PONTO_PROXIMO);
					y=ceil(sqrt(PONTO_PROXIMO)/2);
				}
		}
		if (PONTO_PROXIMO%2==0 && ponto!=0){
			if (PONTO_PROXIMO>ponto){
				x=-(sqrt(PONTO_PROXIMO))/2;
				y=-((sqrt(PONTO_PROXIMO))/2)-(ponto-PONTO_PROXIMO);
			}
			if (PONTO_PROXIMO<ponto){
				x=-((sqrt(PONTO_PROXIMO))/2+(PONTO_PROXIMO-ponto));
				y=-((sqrt(PONTO_PROXIMO))/2);
			}
		}
		if (ponto==PONTO_PROXIMO){
			if (ponto%2>0 ){
				x=floor((sqrt(ponto))/2);
				y=ceil((sqrt(ponto))/2);
			}
			if (ponto%2==0 || ponto==0){
				x=-((sqrt(ponto))/2);
				y=-((sqrt(ponto))/2);
   			}
		}
	printf("\nAs coordenadas do ponto %d sao: (%d,%d)\n",ponto,x,y);
	return 0;
}
