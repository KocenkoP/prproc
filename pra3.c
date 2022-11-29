#include <stdio.h>

void menu()
{
	printf("KALKULATOR\n");
}
/*
typy funkcji
int
float
duble
void
*/

float dodaj(float a, float b)
{
	float wynik;
	wynik=a+b;
	return wynik;	
}

void wyswielt_w(float w)
{
	printf("\nwynik to: %f", w);	
}
 
float wczytaj()
{
	float a;
	printf("\npodaj wartosc ktura chcesz wczytac:");
	scanf("%f", &a);
	return a;
}

int main ()  
{
	float a, b, w;
	char i;
	printf("podaj pierwsza liczbe: ");
	a=wczytaj();
	printf("podaj druga liczbe: ");
	b=wczytaj();
	printf("aby dodac nacisnij +\naby odjac nacisnij -\naby mnozyc nacisnij *\naby dzielic nacisnij /\n");
	printf("podaj wybor: ");
	//scanf(" %c", &i);
	i=getch();
	switch(i)
	{
		case '+':
			w=dodaj(a,b);
			printf("wybrales dodawanie\n%.2f+%.2f=%.2f", a, b, w);
			wyswielt_w(w);
			break;
		case '-':
			w=a-b;
			printf("wybrales odejmowanie\n%.2f-%.2f=%.2f", a, b, w);
			break;
		case '*':
			w=a*b;
			printf("wybrales mnozenie\n%.2f*%.2f=%.2f", a, b, w);
			break;
		case '/':
			w=a/b;
			printf("wybrales dzielenie\n%.2f/%.2f=%.2f", a, b, w);
			break;
		default:
			printf("podales cos innego niz +,-,*,/.\nWychodze z programu");
	}
} 