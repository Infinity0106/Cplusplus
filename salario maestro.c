/* hacer un DF y su programa en c++ que lea el nombre de un maestro y su salario actual
	calcule el incremento dle maestro y muestre su nuevo salario segun las sig. consideraciones
	Salario <18000 12%;  >=18000 - <=3000 8%; >30000 - <=50000 7%; >50000 6%*/
//Bernardo Orozco Garza 1719152
//salario de un maestro
#include<stdio.h>
#include<conio.h>

main(){
	char nom[30];
	float sal;
	printf("Dame el nombre del maestro:\t");
	scanf("%s",&nom);
	printf("Dame su salario:\t");
	scanf("%f",&sal);
	if(sal<18000){
		sal*=1.12;
	}
	else{
	 if(sal>=18000&&sal<=30000){
		sal*=1.08;
	}
	else{
	 if(sal>30000&&sal<=50000){
		sal*=1.07;
	}
	else{
	 if(sal>50000){
		sal*=1.06;
	}
	}
	}
	}
	printf("El salario del profesor %s es de:\t$%.2f",nom,sal);
	getch();
	}
