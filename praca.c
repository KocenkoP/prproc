#include <stdio.h>

int main ()  
{
	char znak;
	printf("program wczytuje i wyświetla znak\npodaj znak: ");
	//scanf("%c", &znak);
	//znak=getchar();
	znak=getch();
	
	printf("podales znak %c", znak);
	
}