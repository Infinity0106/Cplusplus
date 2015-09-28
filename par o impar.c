//Bernardo Orozco Garza 1719152
//par o impar

#include<stdio.h>
#include<conio.h>

void main(){
	int n;
	printf("Dame un numero entero:");
	scanf("%d",&n);
	if(n%2==0){
		printf("\nEl numero %d es par",n);
	}
	else{
		printf("\nEl numero %d es impar",n);
	}
	
	getch();
	}
