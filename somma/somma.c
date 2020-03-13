/*
 * somma.c
 *
 *  Created on: 13 mar 2020
 *      Author: mattia Bressan
 */
/*
	 * ESERCIZIO DA FARE:
	 *
	 * chiedere all'utente tre input:
	 * l'operazione da fare e due numeri (i due operandi)
	 * eseguire l'operazione richiesta e scrivere il risultato
	 * le operazioni ammesse sono: + - * /
	 *
	 * esempio:
	 *
	 * input:
	 * + 10 20
	 *
	 * risultato:
	 * 30
	 *
	 * * 2 2
	 * risultato:
	 * 4
	 *
	 * per chi vuole condividere la soluzione con me (e la classe):
	 *
	 * 1 - mi potete mandate la soluzione via telegram (o email), entro la prossima lezione
	 * oppure:
	 *
	 * 2- create un account su github
	 * create una repository su github contenente il progetto Eclipse
	 * e poi mi mandate l'indirizzo della repo (via telegram o email)
	 */
#include <stdio.h>

int main(int argc, char **argv) {
	int result=0;
	int a,b;
	char op;
	printf("ciao \nscrivimi numero +/*- numero \n");
	result=scanf("%d %c %d",&a,&op,&b);
	//se non corretti
	if(result<3)
		return -1;

	if(op=='+'){
		int somma=a+b;
		printf("la somma è %d",somma);
	}else if(op=='*'){
		int prodotto=a*b;
		printf("la prodotto è %d",prodotto);
	}else if(op=='-'){
		int differenza=a-b;
		printf("la differenza è %d",differenza);
	}else if(op=='/'){
		int rapporto=a/b;
		int resto=a%b;
		printf("il rapporto è %d il resto è %d",rapporto,resto);
	}else//se non operazioni permesse
		return -1;

	return 0;
	}

