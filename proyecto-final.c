#include<stdio.h>
#include<conio.h>
#include<windows.h>
//calcula el promedio de alumnos 

typedef struct{
	long int e_matricula;
	char e_nom[20];
	float e_1;
	float e_2;
} calif;

typedef struct{
	long int s_matricula;
	char s_nom[20];
	float s_1;
	float s_2;
	float s_prom;
} prom;

FILE *entrada,*salida;
calif entra;
prom sale;

void gotoxy(short x, short y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),pos);
}

void borrar();
void altas(calif entra, prom sale);
void imprimir(prom sale);
char opt;
float s_prom=0;

main(){
	
	do{
		printf("\n\t\tM E N U\n 1 - borrar\n 2 - almacenar\n 3 - reporte\n 4 - salir\n");
		fflush(stdin);
		opt=getch();
		//scanf("%c",&opt);
		while(opt!='1'&&opt!='2'&&opt!='3'&&opt!='4'){
			printf("\nERROR de captura\n");
			printf("Cual opcion deseas?\t");
			fflush(stdin);
			opt=getch();
		}
		system("cls");
		
		switch(opt){
			case '1':printf("\t\tB O R R A D O E X I T O S O\n\n");
				borrar();
				break;
			case '2':printf("A L M C E N A R\n");
				altas(entra, sale);
				break;
			case '3':printf("I M P R I M I R\n");
				imprimir(sale);
				break;
		}
	}while(opt!='4');
	
	system("pause");
	return 0;
}

void borrar(){
	entrada=fopen("calificaciones.txt","a");
	salida=fopen("promedio.txt","a");
	if(entrada==NULL){
		printf("No se pudo abrir el archivo calificaciones.txt");
	}
	else{
		if(salida==NULL){
			printf("No se pudo abrir el archivo promedio.txt");
		}
		else{
		fclose(entrada);
		fclose(salida);
		remove("calificaciones.txt");
		remove("promedio.txt");
		}
	}
	return;
}

void altas(calif entra, prom sale){
	entrada=fopen("calificaciones.txt","a");
	salida=fopen("promedio.txt","a");
	if(entrada==NULL){
		printf("No se pudo abrir el archivo calificaciones.txt");
	}
	else{
		if(salida==NULL){
			printf("No se pudo abrir el archivo promedio.txt");
		}
		else{
			do{
			printf("\nMatricula: ");
			scanf("%ld",&entra.e_matricula);
			printf("Nombre: ");
			fflush(stdin);
			gets(entra.e_nom);
			printf("Medio curso: ");
			scanf("%f",&entra.e_1);
			printf("Ordinario: ");
			scanf("%f",&entra.e_2);
			fprintf(entrada,"%ld\t%s\t\t%.2f\t%.2f\n",entra.e_matricula,entra.e_nom,entra.e_1,entra.e_2);
			sale.s_matricula=entra.e_matricula;
			strcpy(sale.s_nom,entra.e_nom);
			sale.s_1=entra.e_1;
			sale.s_2=entra.e_2;
			sale.s_prom=(entra.e_1+entra.e_2)/2;
			fprintf(salida,"%ld\t%s\t\t%.2f\t%.2f\t%.2f\n",sale.s_matricula,sale.s_nom,sale.s_1,sale.s_2,sale.s_prom);
			printf("Quieres introducir a otra persona? 1) SI 0) NO");
			fflush(stdin);
			opt=getch();
				while(opt!='1'&&opt!='0'){
					printf("\nERROR de captura\n");
					printf("Quieres introducir a otra persona? 1) SI 0) NO");
					fflush(stdin);
					opt=getch();
				}
			}while(opt!='0');
		}
	}
	fclose(entrada);
	fclose(salida);
	return;
}

void imprimir(prom sale){
	salida=fopen("promedio.txt","r");
	if(salida==NULL){
		printf("El archivo promedio.txt no se pudo abrir");
	}
	else{
		printf("ID\tNombre\t\t\tMC\tO\tProm\n");
		while(!feof(salida))
			printf("%c",getc(salida));	
	}
	fclose(salida);
	
	return;
}
