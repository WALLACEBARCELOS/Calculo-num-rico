#include <stdio.h>
#include <math.h>
float f(float x)
{
	return (exp(x)-pow(x,6)-x*x-1);
}
float media=0, fmedia=0;
main()
{
	int i=1;
	float a=0, b=0, interacoes=0, precisao=0;
	float resultado=0;
	printf("Informe o valor de A: ");
	scanf("%f", &a);
	printf("Informe o valor de B: ");
	scanf("%f", &b);
	printf("Informe o numero de interacoes: ");
	scanf ("%f", &interacoes);
	printf("Informe  a precisao: ");
	scanf ("%f", &precisao);
	
	resultado= (f(a)*f(b));

	
	while (resultado>=1)
	{
		printf("Os valores não atendem aos resquisitos.\n");
		printf("Informe o valor de A: ");
		scanf("%f", &a);
		printf("Informe o valor de B: ");
		scanf("%f", &b);
		resultado= (f(a)*f(b));
	}
	
	media=(a+b)/2;
	printf("K       A         X       B      F(a)    F(x)    F(b)\n");
	printf ("%3d    %.3f    %.3f    %.3f	%3.3f	%3.3f	%3.2f\n",i, a, media, b, f(a), f(media), f(b));
	while ((fabs(f(media))>precisao)&&interacoes>i)
	{
		i++;
		media=(a+b)/2;
		if(media==0)
		{
			printf ("Média localizada! %f\n",media);
		}
		if(f(a)*f(media)<0)
		{
			b=media;
		}
		else
		{
			a=media;
		}
		media=(a+b)/2;
	fmedia=f(media);
	printf ("%3d    %.3f    %.3f    %.3f	%2.3f	%2.3f	%2.2f\n",i, a, media, b, f(a), f(media), f(b));
	
	}
	printf("\n\nRaiz da media %.6f: %.6f",media, f(media));    
	printf("\nNumero de interaçoes: %d", i);                                                                                                                                   
	
	
}
