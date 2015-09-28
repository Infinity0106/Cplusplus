#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gua();
void prom();
void imp();
int cal[50],N,i;
float suma,prom;

int main(){
	gua();
	prom();
	imp();
	printf("\n");
	getch();
}

void gua(){
	printf("cantidad de cal: ");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		printf("Cal %d: ",i+1);
		scanf("%d",&cal[i]);
	}
	return;
}
void prom(){
	suma=0;
	for(i=0;i<N;i++){
		suma+=cal[i];
	}
	prom=suma/N;
	return;
}
void imp(){
	system("cls");
	for(i=0;i<N;i++){
		printf("%d\n",cal[i]);
	}
	printf("prom = %.2f",prom);
	return;
}
