#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//#define n 10

void print_tab(float t[], int n)
{
	int i;
	printf("T[");
	for(i=0;i<n-1;i++)
	{
		printf("%f,",t[i]);
		
	}
	printf("%f]\n",t[n-1]);
		
}
void print_m(float m[][10])
{
	int i,j;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%5.2f ", m[i][j]);
		}
		
		printf("\n");
	}
}

void suma_t(const float t1[],const float t2[], float s[], int n) 
{
	int i;
	for(i=0;i<n;i++)
	{
		s[i]=t1[i]+t2[i];
	}
}

void ilocz_skal(const float t1[],const float t2[], int n, float is, float wynik) 
{
	int i;
	is=0.0;
	for(i=0;i<n;i++)
	{
	is=is+(t1[i]*t2[i]);
	}
	printf("%f", wynik);
}

float sum_el_m(const float m[][10])
{
	int j,i;
	float suma=0;
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	{
		suma=suma+m[i][j];
	}
	return suma;
}

int main ()  
{
	//int tab1[10]={1,23,3,4532,6,42,3,54,65,0};
	float tab1[10];
	float tab2[10];
	float sum[10];
	//tab1[0]=10;
	float M1[10][10];
	int i,j,n;
	float is,wynik;
	printf("podaj ile wymiarow ma miec wektor:");
	scanf("%d", &n);
	srand(time(NULL));
	
	for(i=0;i<n;i++)
	{
	tab1[i]=10+rand()%11;
	tab2[i]=(10.0*rand())/(RAND_MAX+1);
	//printf("T[%d] = ",i);
	//scanf("%f", &tab2[i]);
	}
	
	
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
		{
			M1[i][j]=i+j;	
		}
	
	
	printf("tablica 1 :\n");
	print_tab(tab1, n);
	printf("tablica 2 :\n");
	print_tab(tab2, n);
	printf("suma tablic 1 i 2 :\n");
	print_tab(sum, n);
	
	suma_t(tab1,tab2,sum, n);
	
	print_m(M1);
	
	printf("suma elementów wyświetlonej macierzy wynosi: %f\n", sum_el_m(M1));
	
	printf("____________________________________________________________\n\nILOCZYN SKALARNY\n\n");
	
	is=0.0;
	
	printf("iloczyn skalarny wektorow:\n");
	ilocz_skal(tab1,tab2,n,is,wynik);
	
	
	
}