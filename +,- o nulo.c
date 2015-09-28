//Bernardo Orozco Garza 1719152
//+ , - o nulo
#include<stdio.h>
#include<conio.h>

main(){
	float n;
	
	printf("Dame un numero:\t");
	scanf("%f",&n);
	if(n>0){
		printf("El numero %.1f es positivo",n);
	}
	else if(n==0){
		printf("El numero %.1f es nulo",n);
	}
	else if(n<0){
		printf("El numero %.1f es negativo",n);
		
	}
	getch();
}
