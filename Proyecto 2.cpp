#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

void sum();
void res();
void div();
void mul();
void ordenacion();
void busqueda();
void triangulo();

float list[10][10],listuni[100];
int n,i,j;

main(){
	char sal='0',opt,optarre;
	printf("Bernardo Orozco Garza 1719152\n");
	printf("Lo llenaras tu o random? 1) TU 0) RANDOM  ");
	fflush(stdin);
	scanf("%c",&optarre);
	while(optarre!='1'&&optarre!='0'){
	    printf("ERROR de captura  ");
	    fflush(stdin);
        scanf("%c",&optarre);
	}
	printf("Dame el tamano del arreglo (1-10)\t");
	scanf("%d",&n);
	while(n<1||n>10){
		printf("ERROR de captura  ");
		scanf("%d",&n);
	}
	switch(optarre){
	    case '1':
            printf("Introduce los valores del arreglo\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    printf("%d,%d = ",i+1,j+1);
                    scanf("%f",&list[i][j]);
                }
            }
            break;
        case '0':
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    list[i][j]=rand() % 10 + 1;
                }
            }
            break;
	}
	do{
		printf("Que quieres hacer? \n 1) SUMA\n 2) RESTA\n 3) DIVICION\n 4) MULTIPLICACION\n 5) ORDENAR ARREGLO\n 6) BUSQUEDA\n 7) SUMA TRIANGULO SUPERIOR E INFERIOR\n 8) SALIR\n");
		fflush(stdin);
		opt=getch();
		while(opt!='1'&&opt!='2'&&opt!='3'&&opt!='4'&&opt!='5'&&opt!='6'&&opt!='7'&&opt!='8'){
			printf("ERROR de captura 1-8 ");
			fflush(stdin);
			opt=getch();
		}

		switch(opt){
			case '1':
				sum();
				break;
			case '2':
				res();
				break;
			case '3':
				div();
				break;
			case '4':
				mul();
				break;
            case '5':
				ordenacion();
				break;
            case '6':
                busqueda();
				break;
            case '7':
                triangulo();
				break;
		}
		if(opt!='8'){
		printf("\n\ndeseas salir? 1) SI 0) NO ");
		fflush(stdin);
		scanf("%c",&sal);
		}
		while(sal!='1'&&sal!='0'){
			printf("ERROR de captura 1 o 0 ");
			fflush(stdin);
			sal=getch();
		}
		system("cls");
	}while(sal=='0'&&opt!='8');

	getch();
}

void sum(){
    float suma=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			suma+=list[i][j];
		}
	}
	printf("La suma es %.2f",suma);
	return;
}

void res(){
    float resta=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			resta-=list[i][j];
		}
	}
	printf("La resta es %.2f",resta);
	return;
}

void div(){
    float divi=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			divi/=list[i][j];
		}
	}
	printf("La divicion es %f",divi);
	return;
}

void mul(){
    float multi=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			multi*=list[i][j];
		}
	}
	printf("La multiplicacion es %.2f",multi);
	return;
}

void ordenacion(){
    int x=0;
    int interruptor=1;
	int pasada,aux,c,a;

    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    listuni[x]=list[i][j];
		    ++x;
		}
    }
    c=n*n;
	for(pasada=0;pasada<c;pasada++){
		for(a=0;a<c-pasada-1;a++){
			if(listuni[a]>listuni[a+1]){
				aux=listuni[a];
				listuni[a]=listuni[a+1];
				listuni[a+1]=aux;
			}
		}
		c-1;
	}
    x=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    printf("%.1f\t",listuni[x]);
            ++x;
		}
		printf("\n");
	}


    return;
}

void busqueda(){
    float bus;
    int si=0;
    printf("Dame un numero a buscar? ");
    scanf("%f",&bus);
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    if(bus==list[i][j]){
		        printf("El numero %.2f esta en la posicon %d,%d",bus,i+1,j+1);
		        si=1;
		    }
		}
    }
    if(si==0){
        printf("El numero %.2f no esta en el arreglo",bus);
    }
    return;
}

void triangulo(){
    float SS=0,SI=0;
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
	printf("La suma superior es de: %.2f\n",SS);
	printf("La suma inferior es de: %.2f\n",SI);
    return;
}
