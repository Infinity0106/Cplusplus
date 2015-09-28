#include<stdio.h>
#include<conio.h>

void cap();
void imp();

char list[10][10][20];
int n,i,j;
main(){
	cap();
	imp();
	
	getch();
}

void cap(){
	printf("De que tamano el arreglo? ");
	scanf("%d",&n);
	while(n<1||n>10){
		printf("ERROR de captura 1-10 ");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("nombre: ");
			scanf("%s",&list[i][j]);
		}
	}
	
	return;
}

void imp(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%s\n",list[i][j]);
		}
	}
	return;
}
