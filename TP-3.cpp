//Bernardo Orozco Garza 1719152
//Area del triangulo
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	
	float b,h,a;

	printf("Bernardo Orozco Garza 1719152\n");
	printf("Area del triangulo\n");
	printf("Dame la base:\t");
	scanf("%f",&b);
	printf("\nDame la altura:\t");
	scanf("%f",&h);
	a=(b*h)/2;
	printf("\nEl area de triangulo es de\t%.2f",a);

	getch();
	}

