//Bernardo Orozco Garza 1719152
//3calificaciones
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	float c1,c2,c3,prom;
	printf("Bernardo Orozco Garza 1719152\n3 Calificaciones\n");
	printf("Dame la calificacion 1: ");
	scanf("%f",&c1);
	printf("Dame la calificacion 3: ");
	scanf("%f",&c2);
	printf("Dame la calificacion 3: ");
	scanf("%f",&c3);
	prom=(c1*.3)+(c2*.2)+(c3*.5);
	if(prom>=70){
		printf("aprobaste con %.2f",prom);
	}
	else{
		printf("reprobaste con %.2f",prom);
	}

	getch();
	}

