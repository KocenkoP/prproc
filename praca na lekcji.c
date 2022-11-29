#include <stdio.h>

int main ()  
{
	float a,w;
	char i,o;
	printf("KALKULATOR TEMPERATUR\n");
	printf("podaj wartość temperatury: ");
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
			w=(a*(5.0/9.0))+32;
			printf("wynik to %f F", w);
			break;
		case 'k':
			w=a+273;
			printf("wynik to %f K", w);
			break;
		default:
			printf("podałeś złe jednostki");
	}
			break;
	case 'f':
	switch(o)
	{
		case 'c':
			w=a*(5.0/9.0)+32;
			printf("wynik to %f C", w);
			break;
		case 'k':
			w=a+273;
			printf("wynik to %f K", w);
			break;
		default:
			printf("podałeś złe jednostki");
	}
			break;
	case 'k':
	switch(o)
	{
		case 'f':
			w=a*(5.0/9.0)+32;
			printf("wynik to %f F", w);
			break;
		case 'c':
			w=a-273;
			printf("wynik to %f C", w);
			break;
		default:
			printf("podałeś złe jednostki");
	}
			break;
	}
}