//Bernardo Orozco Garza 1719152
//2.10 pg 87 cairo
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
float sal; int cat,phe;
printf("Dame el salario del trabajador:\t$");
scanf("%f",&sal);
printf("Dame la categoria del empleado (1-3):\t");
scanf("%d",&cat);
while(cat<1 || cat>3){
	printf("\nError de capura\n");
	printf("Dame la categoria del empleado (1-3):\t");
	scanf("%d",&cat);
	}
printf("\nDame las horas extras:\t");
scanf("%d",&phe);
while(phe<0||phe>30){
	printf("\nError de captura\n");
	printf("Dame las horas extras:\t");
	scanf("%d",&phe);
	}
switch(cat){
	case 1:sal+=(phe*40);
		break;
	case 2:sal+=(phe*50);
		break;
	case 3:sal+=(phe*85);
		break;
	default:printf("Error de categoria");
		break;
}
printf("El Salario es de \t$%.2f",sal);

	getch();
	}

