#include<stdio.h>
#include<conio.h>

void almacenar();
void imp();
void ord();
void busq();

int lista[100],n,i;
main(){
	almacenar();
		printf("Desordenada\n");
	imp();
	ord();
	printf("Ordenada\n");
	imp();
	busq();
	getch();
}

void almacenar(){
	printf("Cuantos numeros? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Dame el #%d: ",i+1);
		scanf("%d",&lista[i]);
	}
	
	return;
}
void imp(){

	for(i=0;i<n;i++){
		printf("%d\n",lista[i]);
	}
	
	return;
}

void ord(){
	int interruptor=1;
	int pasada,j,aux;
	for(pasada=0;pasada<n;pasada++){
		for(j=0;j<n-pasada-1;j++){
			if(lista[j]>lista[j+1]){
				aux=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=aux;
			}
		}
		n-1;
	}

	return;
}

void busq(){
	int clave,pos=-1,izq=0,der=n-1,centro ;
	printf("Dame el numero a buscar: ");
	scanf("%d",&clave);
	while(izq<=der && pos==-1){
		centro=(izq+der)/2;
		if(clave==lista[centro]){
			pos=centro;
		}
		if(clave<lista[centro]){
			der=centro-1;
		}
		if(clave>lista[centro]){
			izq=centro+1;
		}
	}
	if(pos!=-1){
		printf("El numero %d esta en la casilla #%d",clave,pos+1);
	}
	else{
		printf("El numero %d no esta en la lista",clave);
	}
	return;
}

