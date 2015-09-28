//Bernardo Orozco Garza 1719152
//mayor de un numero
#include<stdio.h>
#include<conio.h>

main(){
	int i;
	float n[3];
	for(i=1;i<=4;i++){
		printf("Dame el numero %d\t",i);
		scanf("%f",&n[i]);
	}
	if(n[1]>=n[2]&&n[1]>=n[3]){
		printf("El numero %.2f es el mayor",n[1]);
	}
	if(n[2]>=n[1]&&n[2]>=n[3]){
		printf("El numero %.2f es el mayor",n[1]);
	}
	if(n[3]>=n[1]&&n[3]>=n[2]){
		printf("El numero %.2f es el mayor",n[1]);
	}

	getch();
	}

