//Bernardo Orozco Garza 1719152
//numero entero par o impar
#include<stdio.h>
#include<conio.h>

main(){
	int num, op;
	printf("Bernardo Orozco Garza 1719152\n");
	printf("Numero par o impar?\n");
	printf("Dame un numero entero:\t");
	scanf("%d",&num);
	op=num%2;
	if(op==0){
		printf("\nEl numero %d es par",num);
	}
	else{
		printf("\nEl numero %d es impar",num);
	}
	
	getch();
}
