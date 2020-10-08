// Código que advinhe quantos Skittles há no pote de balas

// Por Marcelo Junior 

// Redes Sociais: @designtechti

// Para o Curso CC50 - Aula 1.1 (Introdução à linguagem C)

// Professor: Gabriel Lima Guimarães

// Linkedin: @glguimaraes

#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
	// seed do PRNG

	srand(time(NULL));

	// escolhe nº pseudo-aleatório entre [0, 1023]

	int skittles = rand() % 1024; 

	// pergunta pro usuário quantas balas ele acha que tem dentro do pote

	printf("Olá! Eu sou uma máquina de balas falante! Adivinhe quantos Skittles há dentro de mim. \n Dica: Estou pensando em um número entre 0 e 1023. Qual é ele?\n");
	int chute_skittles = GetInt();

	if(chute_skittles < skittles && chute_skittles >= 0){
		printf("Haha! Tenho muito mais Skittles que isso! Tente novamente!\n%i\n", skittles);
	}else if (chute_skittles == skittles ){
		printf("Você acertou! Na mosca!%i\n", skittles);
	}else if (chute_skittles > skittles && chute_skittles <= 1024){
		printf("Ok. Eles não são tanto assim. Tente novamente!\n%i\n", skittles);
	}else {
		printf("Não tente ser tão difícil... Advinhe novamente!\n%i\n", skittles);
	}
}
