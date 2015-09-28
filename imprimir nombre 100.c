//Bernardo Orozco Garza 1719152
//imprimir nombre 100 veces
#include<stdio.h>
#include<conio.h>
main(){
	int i=1;
	printf("\ncon FOR\n");
	/*FOR va por verdadero en condicion*/
	for(i=0;i<=100;i++){
		printf("Bernardo Orozco Garza 1719152 %d\n",i);
		}
	i=1;
	/*WHILE va por verdaderp*/
	while(i<=100){
		printf("Bernardo Orozco Garza 1719152 %d\n",i);
		i++;
	}
	i=1;
	do{
		printf("Bernardo Orozco Garza 1719152 %d\n",i);
		i++;
	}while(i<=100);
	/*LOOP va por falso*/
	getch();
}
