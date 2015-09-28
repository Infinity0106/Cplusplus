#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
double promAlumno(int *a[],int n);
int num;
int main()
{
double prom;
char aviso[30];//complejidad baja
aviso[0] = 'C';
aviso[1] = 'o';
aviso[2] = 'm';
aviso[3] = 'o';
aviso[4] = ' ';
aviso[5] = 'e';
aviso[6] = 's';
aviso[7] = 't';
aviso[8] = 'a';
aviso[9] = 's';
aviso[10] ='?';
printf("%s", aviso);
printf("\nnumero de alumnos?\t");
scanf("%d",&num);
int P[num];
printf("\n%lf",promAlumno(&P,num));//complejidad media

getch();
}

double promAlumno(int *a[],int n){
	double prom=0.0;
	int i=0;
	int sum=0;
	for(i=0;i<n;i++){
		a[i]=rand();
		printf("\nCal %d=%d",i,a[i]);
		sum=sum+a[i];
	}
		printf("\n%d",sum);
	prom=sum/n;

	return prom;
}

