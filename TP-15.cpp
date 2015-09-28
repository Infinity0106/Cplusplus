//Bernardo Orozco Garza
#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int n,x[40],i=0,sum=0;
	printf("Bernardo Orozco Garza 1719152");
	printf("\ndame el numero de elementos\t");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Numero: ");
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	printf("\nLos numero introducidos fueron:");
	for(i=0;i<n;i++){
		printf("\n%d= %d",i+1,x[i]);
	}
	printf("\nLa suma de los numeros es %d",sum);
	system("PAUSE");
	return 0;
}
