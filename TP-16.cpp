//Bernardo Orozco Garza
#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int n,x[40],i=0,par=0,imp=0;
	printf("Bernardo Orozco Garza 1719152");
	printf("\ndame el numero de elementos\t");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Numero: ");
		scanf("%d",&x[i]);
	}
	printf("\nLos numero introducidos fueron:");
	for(i=0;i<n;i++){
		if(x[i]%2==0){
			printf("\nEl numero %d es PAR",x[i]);
			par+=1;
		}
		else{
			printf("\nEl numero %d es IMPAR",x[i]);
			imp+=1;
		}
	}
	printf("\nLos pares fueron %d",par);
	printf("\nLos impares fueron %d\n\n",imp);
	
	system("PAUSE");
	return 0;
}
