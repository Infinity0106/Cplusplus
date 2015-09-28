//Bernardo Orozco Garza 1719152
//triangulo lados
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	float a,b,c;
	printf("Bernardo Orozco Garza 1719152\n lados de un triangulo\n");
	printf("Dame el lado a, b, c:\n");
	scanf("%f %f %f", &a,&b,&c);
	if(a==b && b==c){
		printf("\nEl triangulo es equilatero con lados %.2f, %.2f, %.2f.",a,b,c);
	}
	else{
		if(a!=b && b!=c && a!=c){
			printf("\nEl triangulo es escaleno con lados %.2f, %.2f, %.2f.",a,b,c);
		}
		else{
			if(a==b && b!=c || b==c && c!=a || c==a && a!=b){
				printf("\nEl triangulo es isoceles con lados %.2f, %.2f, %.2f.",a,b,c);
			}
		}
	}

	getch();
}

