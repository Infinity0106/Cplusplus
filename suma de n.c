//bernardo orozco garza 1719152
//suma de los 100 numeros naturales
#include<stdio.h>
#include<conio.h>
main(){
	int suma=0,i,n,num;
	printf("Cuantos numeros debo de sumar:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Dame el numero %d\t",i);
		scanf("%d",&num);
		suma+=num;
		}
	printf("la suma de %d numeros es de %d",n,suma);
	getch();
}
