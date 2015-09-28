//Bernardo Orozco Garza 1719152
//Definir que triangulo es
#include<stdio.h>
#include<conio.h>
main(){
	int a,b,c;
	printf("Dame el valor de a, b y c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && c==a){
		printf("Es un triangulo equilatero");
	}
	else{
		if(a!=b && b!=c && c!=a){
			printf("Es un triangulo escaleno");
			}
		else{
			if(a==b && a!=c || b==c && c!=a || c==a && c!=b){
				printf("Es un triangulo isoceles");
			}
		}
	}
	getch();
}
