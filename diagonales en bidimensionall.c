#include<conio.h>
#include<stdio.h>

void save();
void first();
void second();
void print();

float list[10][10],add1=0,add2=0;
int n, i, j;

main(){

	save();
	first();
	second();
	print();
	
	getch();
}

void save(){
	printf("De que tamano el arreglo: ");
	scanf("%d",&n);
	while(n<0||n>10){
		printf("ERROR de captura");
		printf("De que tamano el arreglo: ");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Dame el numero de la casilla %d,%d ",i+1,j+1);
			scanf("%f",&list[i][j]);
		}
	}
	return;
}

void first(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				add1+=list[i][j];
			}
		}
	}
	
	return;
}

void second(){
	j=n-1;
	for(i=0;i<n;i++){
		add2+=list[i][j];
		--j;
	}
	
	return;
}

void print(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%.1f\t",list[i][j]);
		}
		printf("\n");
	}
	printf("La suma principal %.1f\nLa suma secundaria %.1f",add1,add2);
	return;
}
