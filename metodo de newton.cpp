#include <stdio.h>
#include <math.h>
float f(float x)//função
{
	return (x*x-9);
}
float d(float x)//derifivada
{
	float dx=0.001;
	return ((f((x)+(dx))-f(x))/dx);
}
float fx(float x0)//metodo de newton
{
	return x0-((f(x0)/d(x0)));
}
main()
{
	int k=1;
	float x0, interacoes, erro, xn;
	float resultado;
	printf("Informe o valor de X: ");
	scanf("%f", &x0);
	printf("Informe o numero maximo de interacoes: ");
	scanf ("%f", &interacoes);
	printf("Informe  a erro: ");
	scanf ("%f", &erro);
	
	printf("\n \n \n");
	printf("K      X       F(x)     F'(x)     Xn\n");
		
	while((fabs(f(x0))>erro) && (interacoes>=k) )
	{
		xn= fx(x0);
		printf ("%d    %2.3f    %2.3f    %2.3f    %2.3f\n",k,x0,f(x0),d(x0), fx(x0));
		x0=xn;
		k++;
	}
	


}

