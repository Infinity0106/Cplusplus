#include <stdio.h>

void imprimir();
void cuadrado(int n);
int suma(int a[],int suma);

main(){
	int num[50];
	int x;
	int suma;
	imprimir();
	printf("\nDame un numero:\t");
	scanf("%d",&x);
	cuadrado(x);
	llenar(num);

	getch();
}
void imprimir(){//complejidad baja
	printf("Mi nombre es Bernardo");
}
void cuadrado(int n){//complejidad media
	int q=0;
	while(q<=1000)//el duadrode ha de ser meno de 1000
	{
		q=n*n;
		printf("\nEl cuadrado de %d = %d",n,q);
		n++;
	}
	return;
}
void llenar(int a[]){//complejidad alta
	int i=0;
	for(i=0;i<50;i++){
		a[i]=rand();
		printf("\n%d",a[i]);
	}
	return;
}

