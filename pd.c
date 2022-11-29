#include <stdio.h>
#include <math.h>
int main ()      
{
    float a, b, c, d, x1, x2, x3;
    printf("program liczy pierwiastki funkcji kwadratowej\n");
    
    printf("podaj zmienna a: \n");
    scanf("%f", &a);
    printf("podaj zmienna b: \n");
    scanf("%f", &b);
    printf("podaj zmienna c: \n");
    scanf("%f", &c);
    
    d=(b*b)-(4*a*c);
    printf("___________________________________\n");
    
    if (d>0)
    {
        x1=(-b+ sqrt(d)) / (2*a);
        x2=(-b- sqrt(d)) / (2*a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    else if (d==0)
    {
        x3=-(b/2*a);
        printf("x = %.2f\n", x3);
    }
    else
    {
        printf("delta jest ujemna\n");
    }
}
