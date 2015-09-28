/*programa que al recibir como dato un numero entero N, calcule el factoria de dicho numero.
	Recuerda que el factorias(0) es 1, el factoriasl (1) es 1, y el factorial (n) se calcula con N*Facotria(n-1).
	Dato: NUM(Varial de tipo entero que representa el numero que ingresa).
	Dato: FAC es una variable de tipo entero que se utiliza para aumentar el factorial.
		i es una variable de tipo enteero que se utiliza para el control del ciclo.*/
//Bernardo Orozco Garza 1719152
//factorial de un numero
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int i, num;
	double Fac;
	printf("Bernardo Orozco Garza 1719152\nFactorial de un numero\n");
	printf("Ingresa el numero:\t");
	scanf("%d",&num);
	if(num>=0){
		Fac=1;
		for(i=1;i<=num;i++){
			Fac*=i;
			printf("\n El facorial de %d es: %.2lf",i,Fac);
		}
	}
	else{
		printf("Error en eld ator ingresado");
	}
	getch();
}
