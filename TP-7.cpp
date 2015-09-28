//Bernardo Orozco Garza 1719152
//mayor de 3 numeros
#include<stdio.h>
#include<conio.h>

main(){
	int i,ni=0;
	float n[2],mayor;
	printf("Bernardo Orozco Garza 1719152\nEl mayor de 3 numeros\n");
	for(i=1;i<=3;i++){
		printf("Dame la calificacion #%d\t",i);
		scanf("%f",&n[ni]);
		ni++;
	}
	if(n[0]>n[1]&&n[0]>n[2]){
		printf("El numero %.2f es el mayor",n[0]);
	}
	if(n[1]>n[3]&&n[1]>n[0]){
		printf("El numero %.2f es el mayor",n[1]);
	}
	if(n[2]>n[1]&&n[2]>n[0]){
		printf("El numero %.2f es el mayor",n[2]);
	}
	getch();
}

