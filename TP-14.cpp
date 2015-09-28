//Bernardo Orozco Garza
#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int n,num,i=0,sum=0;
	printf("Bernardo Orozco Garza 1719152");
	printf("\ndame el numero de elementos");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nNumero %d: ",i+1);
		scanf("%d",&num);
		sum+=num;
	}
	printf("La suma de los numeros es %d\n",sum);
	system("PAUSE");
	return 0;
}
