/*	********************************************************************************
	*									 DESCRIÇÃO 									
	* Este programa dá a menor quantidade de moedas em Reais por uma determinada
	* quantidade de forma eficiente.
	* NOTA: O conjunto de moedas está definido como {1$, 50¢, 25¢, 10¢ & 5¢}.
	*
	* Por Marcelo Junior
	* Redes Sociais: @designtechti
	*
	* Para o Curso CC50 Aula 1.1 (Introdução à linguagem C)
	* Profº: Gabriel Lima Guimarães
	* Linkedin: @glguimaraes
	*******************************************************************************
*/

// ALGORITMO GANANCIOSO PARA DAR O MÍNIMO DE MOEDAS DE TROCO POSSÍVEL DA FORMA MAIS EFICIENTE

#include <cc50.h>
#include <stdio.h>

int TAMANHO_ARRAY = 4;

int
main(void){

	printf("Oi. Quanto de troco você deve?\n");

	float qtd_troco = GetFloat();

	do{
		
		if (qtd_troco < 0){
			printf("Digite corretamente!");
		}

	} while (qtd_troco <= 0);

		float conjunto_moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.5};
		int i = 0;
		int numero;
		printf("A quantidade mínima de troco precisa para o valor (%.2f) está abaixo: \n", qtd_troco);

	// onde a magia acontece
	while(i < TAMANHO_ARRAY ){

		if (conjunto_moedas[i] <= qtd_troco){
			numero = qtd_troco / conjunto_moedas[i];
			printf("Você precisa de %d moeda(s) de R$ %.2f\n", numero, conjunto_moedas[i]);
			qtd_troco = qtd_troco - numero * conjunto_moedas[i];
		}

		i++;
	}	
}