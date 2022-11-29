#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c)
{
	float d;
    d=(b*b)-(4*a*c);
	return d;	
}
float funkcja(float b, float d, float a)
{
	float x;
	if (d==0)
	{
    x=-(b/2*a);
	}
	else
	{
    x=(-b+ sqrt(d)) / (2*a);
	}
	return x;
}
float wczytaj()
{
	float a;
	scanf("%f", &a);
	return a;
}

int main ()      
{
    float a, b, c, d, x1, x2, x3;
    printf("program liczy pierwiastki funkcji kwadratowej\n");
    
    printf("podaj zmienna a: \n");
    a=wczytaj();
    printf("podaj zmienna b: \n");
    b=wczytaj();
    printf("podaj zmienna c: \n");
    c=wczytaj();
    
	d=delta(a,b,c);
    printf("___________________________________\n");
    
    if (d>0)
    {
        x1=funkcja(b,d,a);
        //x1=(-b+ sqrt(d)) / (2*a)
        x2=(-b- sqrt(d)) / (2*a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    else if (d==0)
    {
        x3=funkcja(b,d,a);
        printf("x = %.2f\n", x3);
    }
    else
    {
        printf("delta jest ujemna\n");
    }
}