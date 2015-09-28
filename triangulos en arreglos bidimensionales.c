#include<stdio.h>
#include<conio.h>
#include<windows.h>

void cap(),impri(),suma();

int n,j,i,list[10][10],SS,SI;

main(){
	printf("Suma triangulos en arreglo\n\n");
	cap();
	suma();
	impri();
	system("pause");
	return 0;
}

void cap(){
	printf("Dame el tamano del arreglo ");
	scanf("%d",&n);
	while(n<1||n>10){
		printf("ERROR de captura");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d,%d = ",i+1,j+1);
			scanf("%d",&list[i][j]);
		}
	}
	
	return;
}
void impri(){
	printf("La suma superior es de: %d\n",SS);
	printf("La suma inferior es de: %d\n",SI);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",list[i][j]);
		}
		printf("\n");
	}
	return;
}
void suma(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j){
				SS+=list[i][j];
			}
			if(i>j){
				SI+=list[i][j];
			}
			
		}
	}
	return;
}
