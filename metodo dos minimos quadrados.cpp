#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;




int main()
{

  
	int grau, qtd;
	float x1[1000], fx1[1000];
	float somatorio[1000];
	float b[1000];
	float matriz [1000][1000];
	
	
	
	/*printf("Informe o grau: ");
	scanf("%d", &grau);
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &qtd);
	
	//recebendo os valores de X1  e fx1 e armazenando cada um em um vetor
	for (int i=1; i<=qtd; i++)
	{
		printf("Informe os elementos da posicao X %d: ", i);
		cin >> x1[i] ;
		printf("Informe os elementos da Fx %d : ", i);
		cin >> fx1[i] ;
	}		
	*/
	 //calculando o somatorio de todos os valores em x1
	 
	 x1[0]=-2.0;
	 x1[1]=-1.5;
	 x1[2]=-0.0;
	 x1[3]=1.0;
	 x1[4]=2.2;
	 x1[5]=3.1;
	 
	 
	 fx1[0]=-30.5;
	 fx1[1]=-20.2;
	 fx1[2]=-3.3;
	 fx1[3]=8.9;
	 fx1[4]=16.8;
	 fx1[5]=21.4;

	 
	 qtd = 6;
	 grau = 2;
	 
	  
	 
	for (int i = 0; i <= (2 * grau); i ++)
	{
		for (int j = 0; j < qtd; j ++)
		{
			somatorio[i]+=(pow(x1[j], i));
		}
		printf("%f\t",somatorio[i]);
		printf("\n");

	}
	printf("\n\n\n");
	
	//Calculando o Fx1 * x1 para obter o resultado.
	for(int i=0; i <=grau; i++)
	{
		for(int j=0; j <qtd; j++)
		{
			b[i]+= ((fx1[j])*(pow(x1[j],i)));
			
		}
		printf("%f\t",b[i]);
		printf("\n");
	}
	printf("\n\n\n");
	for(int i=0; i < grau+1; i++)
	{
		for(int j=0; j < grau+1; j++)
		{
			matriz[i][j] = somatorio[i];
			//printf ("%f", matriz[i][j]);
		}
		
		
	}
		
	return 0;	
}
