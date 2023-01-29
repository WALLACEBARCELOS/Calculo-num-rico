#include <stdio.h>
#include <math.h>
float f(float x)
{
	return (pow(1,x)-(1*x)+(exp(x))-10)/(1-20);
}
float fx(float x0, float x1)
{
	
	return (x1-((f(x1)*(x1-x0))/(f(x1)-f(x0))));
}
float media, fmedia;
main()
{
	int k=1;
	float x0, x1, interacoes, erro, x2;
	float resultado;
	printf("Informe o valor de X0: ");
	scanf("%f", &x0);
	printf("Informe o valor de X1: ");
	scanf("%f", &x1);
	printf("Informe o numero maximo de interacoes: ");
	scanf ("%f", &interacoes);
	printf("Informe  a erro: ");
	scanf ("%f", &erro);
	if(x0>x1)
	{
		printf("\nERRO, o valor de x0 tem que ser maior que x1.\n");
	}
	else if(erro>(x1-x0))
	{
		printf("\nO valor do erro tem que ser menor que os intervalos.\n");
	}
	
	//x2= fx(x0,x1);
	//x2=x1-((f(x1)*(x1-x0)/(f(x1)-f(x0))));
	printf("\n \n \n");
	printf("K    X(k-2)    X(k-1)    X(k)    F(x0)    F(x1)\n");
	//printf("%d    %2.3f    %2.3f    %2.3f\n", k, x0, x1, x2);
	do
	{
		x2= fx(x0,x1);
		printf("%d    %2.3f     %2.3f    %2.3f    %2.3f    %2.3f\n", k, x0, x1, x2, f(x0), f(x1));
		x0=x1;
		x1=x2;
		k++;
	}while((fabs(f(x2))>erro) && (interacoes>=k) );
	printf("%d    %2.3f     %2.3f    %2.3f    %2.3f    %2.6f\n", k, x0, x1, x2, f(x0), f(x1));
	printf("\n\nRaiz de %f: %f",x2, f(x2));
	printf("\nNumero de interaçoes: %d", k);
}

