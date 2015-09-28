//Bernardo Orozco Garza 1719152
//consumo de gasolina
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#define precio 14.5

main(){
	
	float pago, consumo;
	printf("Bernardo Orozco Garza 1719152\n");
	printf("Consumo de gasolina\n");
	printf("Dame tu consumo en L:\t");
	scanf("%f",&consumo);
	//printf("\nDame el precio de la gasolina $ por L:\t$");
	//scanf("%f",&precio);
	pago=precio*consumo;
	printf("\nTOTAL:\t$%.2f",pago);

	getch();
	}

