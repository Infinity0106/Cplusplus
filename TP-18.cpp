//Bernardo Orozco Garza	
#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	int i=0,n=0;
	float precio[50],sum;
	
	printf("Bernardo Orozco Garza 1719152");
	printf("\nCuantos productos son? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nDame el preicio del producto #%d $",i+1);
		scanf("%f",&precio[i]);
		sum+=precio[i];
	}
	printf("Los precios son:\n");
	for(i=0;i<n;i++){
		printf("\nPrecio #%d $%.2f",i+1,precio[i]);
	}
	
	printf("\nEl total es $%.2f",sum);
	
	getch();
}
