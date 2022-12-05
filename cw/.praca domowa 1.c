#include <stdio.h>
#include <math.h>
#include <iostream>

int main ()  
{
	float a,w;
	char i,o;
	printf("KALKULATOR TEMPERATUR\n");
	printf("podaj wartosc temperatury: ");
	scanf("%f", &a);
	printf("podaj jednostke wpisanej temperatury: ");
	scanf(" %c", &i);
	printf("podaj jednostke temperatury ktora chcesz uzyskac: ");
	scanf(" %c", &o);
	switch(i)
	{
	case 'c':
	switch(o)
	{
		case 'f':
			w=(a*(9.0/5.0))+32;
			printf("wynik to %f F\n", w);
			break;
		case 'k':
			w=a+273;
			printf("wynik to %f K\n", w);
			break;
		default:
			printf("podales zle jednostki\n");
	}
			break;
	case 'f':
	switch(o)
	{
		case 'c':
			w=5*(a-32)/9;
			printf("wynik to %f C\n", w);
			break;
		case 'k':
			w=(a + 459.67)*(5.0/9.0);
			printf("wynik to %f K\n", w);
			break;
		default:
			printf("podales zle jednostki\n");
	}
			break;
	case 'k':
	switch(o)
	{
		case 'f':
			w=(9.0/5.0)*a-459.67;
			printf("wynik to %f F\n", w);
			break;
		case 'c':
			w=a-273;
			printf("wynik to %f C\n", w);
			break;
		default:
			printf("podales zle jednostki\n");
	}
		default:
			printf("podales zle jednostki\n");
			
			break;
	}
    system("pause");
}
