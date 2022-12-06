#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//#define n 10

int main ()  
{
	//int tab1[10]={1,23,3,4532,6,42,3,54,65,0};
	int tab1[10];
	float tab2[10];
	//tab1[0]=10;
	float M1[10][10];
	int i,n;
	printf("podaj ile wymiarow ma miec wektor:");
	scanf("%d", &n);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
	tab1[i]=10+rand()%11;
	tab2[i]=(10.0*rand())/(RAND_MAX+1);
	printf("T[%d] = ",i);
	scanf("%f", &tab2[i]);
	
	}
	for(i=0;i<n;i++)
	{
	printf("Element %d tablicy wynosi: %d\n",i+1, tab1[i]);
	
	}
	printf("T[");
	for(i=0;i<n;i++)
	{
		printf("%f,",tab2[i]);
		
	}
	printf("]\n");
	
}