#include "Fonction_scalaire.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double sinusoideAmortie(double x)
{
	return exp(-(pow(x,2)/MU))*sin(F*x);
}
double enveloppeSup(double x)
{
	return exp(-(pow(x,2)/MU));
}
table_t getTable(fctPtr_t pt,double a,double b ,int n){
	table_t Tab;
	Tab.list=(point_t *)malloc(n*sizeof(point_t));
	Tab.n=n;
	double l;
	l=(b-a)/(n-1);
	int i;
	for(i=0;i<Tab.n;i++)
	{
		Tab.list[i].x=a;
		Tab.list[i].y=(*pt)(a);
		a+=l;
	}
	double max=Tab.list[0].y,min=Tab.list[0].y;
	double xmax,xmin;
	for(i=0;i<Tab.n;i++)
	{
		if(max>Tab.list[i].y)
		{
			max=Tab.list[i].y;
			xmax=Tab.list[i].x;
		}
		if(min<Tab.list[i].y)
		{
			min=Tab.list[i].y;
			xmin=Tab.list[i].x;
		}
	}
	Tab.ptMax.x=xmax;
	Tab.ptMax.y=max;
    Tab.ptMin.x=xmin;
	Tab.ptMin.y=min;
	return Tab;
}
void afficherTable(const table_t *pt)
{
	int i;
	printf("x                 f(x)\n");
	printf("----------------v---------------\n");
	for(i=0;i<pt->n;i++)
	{
	printf("%lf                 %lf\n",pt->list[i].x,pt->list[i].y);
	}
	printf("----------------f---------------\n");
}
void TracerTable(const table_t *tabptrTab[],int n)
{
	
	
 }           
