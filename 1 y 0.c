#include<conio.h>
#include<stdio.h>

void save();
void first();
void second();
void print();

int list[10][10]={0};
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
	return;
}

void first(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				list[i][j]=1;
			}
		}
	}
	
	return;
}

void second(){
	j=n-1;
	for(i=0;i<n;i++){
		list[i][j]=1;
		--j;
	}
	
	return;
}

void print(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",list[i][j]);
		}
		printf("\n");
	}
	return;
}


