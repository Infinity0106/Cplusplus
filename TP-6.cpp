//Bernardo Orozco Garza 1719152
//c de grillo
#include<stdio.h>
#include<conio.h>

main(){
	int s;
	float F,C;
	printf("Bernardo Orozco Garza 1719152\ngrados c del ambiente por el grillo\n");
	printf("Dame los sonidos del grillo en 1 minuto:\t");
	scanf("%d",&s);
	F=(s/4.0)+40.0;
	C=(F-32.0)/1.8;
	if(C>=30.0){
		printf("\n%.2f ºC esta CALIENTE",C);
	}
	if(C<30.0&&C>=14.0){
		printf("\n%.2f ºC esta AGRADABLE",C);
	}
	if(C<14.0){
		printf("\n%.2f ºC esta FRIO",C);
	}
	getch();
	}
