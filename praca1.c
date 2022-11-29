#include <stdio.h>

int main ()  
{
	float a, b, w;
	char i;
	printf("KALKULATOR\n");
	printf("podaj pierwsza liczbe: ");
	scanf("%f", &a);
	printf("podaj druga liczbe: ");
	scanf("%f", &b);
	printf("aby dodac nacisnij +\naby odjac nacisnij -\naby mnozyc nacisnij *\naby dzielic nacisnij /\n");
	printf("podaj wybor: ");
	//scanf(" %c", &i);
	i=getch();
	switch(i)
	{
		case '+':
			w=a+b;
			printf("wybrales dodawanie\n%.2f+%.2f=%.2f", a, b, w);
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
			printf("podales cos innego niz 1,2,3,4.\nWychodze z programu");
	}
}