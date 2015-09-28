/*Elabora un programa que imprima el nombre del empleado y su sueldo (15)a pagar
# departamento  departameto   $horas
	1			sistemas		$105
	2			RH				$120.5
	3			compras			$98.5	
	4			ventas			$80.2		96H = 1 quince*/
#include<stdio.h>
#include<conio.h>
main(){
	char nom[50];
	int dep;
	float paga,ex;
	printf("Bernardo Orozco Garza 1719152 \nSueldo empleado por quincena con horas extra\n");
	printf("Dame el nombre del empleado\t");
	gets(nom);
	printf("En que departemento trabajas?\n	1)		Sistemas		 \n	2)		R. Humanos		 \n	3)		Compras			 \n	4)		Ventas			 ");
	scanf("%d",&dep);
	while (dep<1||dep>4){
		printf("ERROR de captura\n");
		printf("En que departemento trabajas?\n	1)		Sistemas		 \n	2)		R. Humanos		 \n	3)		Compras			 \n	4)		Ventas			 ");
		scanf("%d",&dep);
	}
	printf("\nDame las horas extras trabajadas por %s\t",nom);
	scanf("%f",&ex);
	switch(dep){
		case 1:
			paga=(96.0+ex)*105.0;
			break;
		case 2:
			paga=(96.0+ex)*120.5;
			break;
		case 3:
			paga=(96.0+ex)*98.5;
			break;
		case 4:
			paga=(96.0+ex)*80.2;
			break;
		default:
			printf("ERROR de captura");
			break;
	}
	printf("\n\nEl Sueldo quincenal de %s es de $%.2f",nom,paga);
	getch();
}
