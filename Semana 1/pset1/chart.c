/*	********************************************************************************
	*									 DESCRIÇÃO 									
	* Este programa gera gráficos em barra semelhante ao Google Charts, 
	* que serve para descobrir quem procura quem dentro da universidade
	*
	* Por Marcelo Junior
	* Redes Sociais: @designtechti
	*
	* Para o Curso CC50 Aula 1.1 (Introdução à linguagem C)
	* Profº: Gabriel Lima Guimarães
	* Linkedin: @glguimaraes
	*******************************************************************************
*/

#include <stdio.h>
#include <cc50.h>

int main(void)
{

    float MprocurandoF = 0;
    float FprocurandoM = 0;
    float FprocurandoF = 0;
    float MprocurandoM = 0;
    bool entradascorretas = false;

    printf("Insira quatro valores inteiros nao negativos correspondentes a amostra feita.:\n\n");

    do
    {
        MprocurandoF = GetInt();
        if(MprocurandoF < 0)
        {
            printf("Insira um numero inteiro nao negativo.:\n");
            MprocurandoF = GetInt();
        }

        FprocurandoM = GetInt();
        if(FprocurandoM < 0)
        {
            printf("Insira um numero inteiro nao negativo.:\n");
            FprocurandoM = GetInt();
        }

        FprocurandoF = GetInt();
        if(FprocurandoF < 0)
        {
            printf("Insira um numero inteiro nao negativo.:\n");
            FprocurandoF = GetInt();
        }

        MprocurandoM = GetInt();
        if(MprocurandoM < 0)
        {
            printf("Insira um numero inteiro nao negativo.:\n");
            MprocurandoM = GetInt();
        }

        if (MprocurandoF >=0 && FprocurandoM >=0 && FprocurandoF >=0 && MprocurandoM >=0)
        {
            entradascorretas = true;
        }
    
    } while (entradascorretas == false);

    int total = MprocurandoF + FprocurandoM + FprocurandoF + MprocurandoM;

    MprocurandoF = (MprocurandoF/total)*80;
    FprocurandoM = (FprocurandoM/total)*80;
    FprocurandoF = (FprocurandoF/total)*80;
    MprocurandoM = (MprocurandoM/total)*80;

    int conversorMprocurandoF = (int) (MprocurandoF);
    int conversorFprocurandoM = (int) (FprocurandoM);
    int conversorFprocurandoF = (int) (FprocurandoF);
    int conversorMprocurandoM = (int) (MprocurandoM);

    printf("Quem procura quem?\n\n");

    printf("M procurando F:\n");
    for(int i = 0; i < conversorMprocurandoF ; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("F procurando M:\n");
    for(int i = 0; i < conversorFprocurandoM ; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("F procurando F:\n");
    for(int i = 0; i < conversorFprocurandoF ; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("M procurando M:\n");
    for(int i = 0; i < conversorMprocurandoM ; i++)
    {
        printf("#");
    }
    printf("\n");


    return 0;
}