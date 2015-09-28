//Bernardo Orozco Garza 1719152
//2.9 pg 86
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	int opt1,opt2,sig;
	float n1;
	do{
	system("cls");
	printf("Conversionas de longitud, peso y volumen");
	printf("\nQue tipo de conversion quieres?\n1) Longitud.\n2) Volumen.\n3) Peso.\t");
	scanf("%d",&opt1);
	while (opt1<1||opt1>3){
		printf("\t\t\tERROR de captura");
		printf("\nQue tipo de conversion quieres?\n1) Longitud.\n2) Volumen.\n3) Peso.\t");
		scanf("%d",&opt1);
	}
	switch(opt1){
		case 1:do{
			system("cls");
			printf("\t\t\tMEDIDAS DE LONGITUD");
			printf("\nTipo de conversion\n1)Pulgadas\t - \tMilimetros\n2)Yardas\t - \tMetros\n3)Milla\t\t - \tKilometro\n4)Pulgada^2\t - \tCentimetro^2\n5)Pie^2\t\t - \tMetro^2\n6)Yarda^2\t - \tMetro^2\n7)Acre\t\t - \tHectareas\n8)Milla^2\t - \tKilometro^2\t");
			scanf("%d",&opt2);
			while(opt2<1||opt2>8){
				printf("\t\t\tERROR de captura");
				printf("\nTipo de conversion\n1)Pulgadas\t - \tMilimetros\n2)Yardas\t - \tMetros\n3)Milla\t\t - \tKilometro\n4)Pulgada^2\t - \tCentimetro^2\n5)Pie^2\t\t - \tMetro^2\n6)Yarda^2\t - \tMetro^2\n7)Acre\t\t - \tHectareas\n8)Milla^2\t - \tKilometro^2\t");
				scanf("%d",&opt2);	
			}
			n1=0;
			switch (opt2){
				case 1:printf("Dame las Pulgadas:\t");
					scanf("%f",&n1);
					n1*=25.4;
					printf("Los milimetros son %.2f",n1);
					break;
				case 2:printf("Dame las Yardas:\t");
					scanf("%f",&n1);
					n1*=0.9144;
					printf("Los metros son %.2f",n1);
					break;
				case 3:printf("Dame las Millas:\t");
					scanf("%f",&n1);
					n1*=1.6093;
					printf("Los kilometros son %.2f",n1);
					break;
				case 4:printf("Dame las Pulgadas^2:\t");
					scanf("%f",&n1);
					n1*=6.452;
					printf("Los centimetros^2 son %.2f",n1);
					break;
				case 5:printf("Dame los Pies^2:\t");
					scanf("%f",&n1);
					n1*=0.09290;
					printf("Los metros^2 son %.2f",n1);
					break;
				case 6:printf("Dame las Yardas^2:\t");
					scanf("%f",&n1);
					n1*=0.8361;
					printf("Los metros^2 son %.2f",n1);
					break;
				case 7:printf("Dame los Acres:\t");
					scanf("%f",&n1);
					n1*=0.4047;
					printf("Las hectareas son %.2f",n1);
					break;
				case 8:printf("Dame las Millas^2:\t");
					scanf("%f",&n1);
					n1*=2.59;
					printf("Los kilometros^2 son %.2f",n1);
					break;
				default: printf("\t\t\tERROR de captura");
					break;
			}
			n1=0;
			printf("\nQuieres seguir convirtiendo en longitud?\t1)SI\t2)NO\t");
			scanf("%d",&sig);
			while(sig<1||sig>2){
				printf("\t\t\tERROR de captura");
				printf("\nQuieres seguir convirtiendo en longitud?\t1)SI\t2)NO\t");
				scanf("%d",&sig);
			}
			}while(sig==1);
			break;
		case 2:do{
			system("cls");
			printf("\t\t\tMEDIDAS DE VOLUMEN");
			printf("\nTipo de conversion\n1)Pies^3\t - \tMetros^3\n2)Yardas^3\t - \tMetros^3\n3)Pintas\t - \tLitros\n4)Galones\t - \tLitros\t");
			scanf("%d",&opt2);
			while(opt2<1||opt2>4){
				printf("\t\t\tERROR de captura");
				printf("\nTipo de conversion\n1)Pies^3\t - \tMetros^3\n2)Yardas^3\t - \tMetros^3\n3)Pintas\t - \tLitros\n4)Galones\t - \tLitros\t");
				scanf("%d",&opt2);	
			}
			n1=0;
			switch(opt2){
				case 1:printf("Dame los Pies^3:\t");
					scanf("%f",&n1);
					n1*=.02832;
					printf("Los Metros^3 son %.2f",n1);
					break;
				case 2:printf("Dame las Yardas^3:\t");
					scanf("%f",&n1);
					n1*=.7646;
					printf("Los Metros^3 son %.2f",n1);
					break;
				case 3:printf("Dame las Pintas:\t");
					scanf("%f",&n1);
					n1*=.56826;
					printf("Los Litros son %.2f",n1);
					break;
				case 4:printf("Dame los Galones:\t");
					scanf("%f",&n1);
					n1*=4.54609;
					printf("Los Litros son %.2f",n1);
					break;
				default: printf("\t\t\tERROR de captura");
					break;
			}
			n1=0;
			printf("\nQuieres seguir convirtiendo en volumen?\t1)SI\t2)NO\t");
			scanf("%d",&sig);
			while(sig<1||sig>2){
				printf("\t\t\tERROR de captura");
				printf("\nQuieres seguir convirtiendo en volumen?\t1)SI\t2)NO\t");
				scanf("%d",&sig);
			}
			}while(sig==1);
			break;
		case 3:do{
			system("cls");
			printf("\t\t\tMEDIDAS DE PESO");
			printf("\nTipo de conversion\n1)Onzas\t\t - \tGramos\n2)Libras\t - \tKilogramos\n3)Ton.Inglesa\t - \tToneladas\t");
			scanf("%d",&opt2);
			while(opt2<1||opt2>3){
				printf("\t\t\tERROR de captura");
				printf("\nTipo de conversion\n1)Onzas\t\t - \tGramos\n2)Libras\t - \tKilogramos\n3)Ton.Inglesa\t - \tToneladas\t");
				scanf("%d",&opt2);	
			}
			n1=0;
			switch(opt2){
				case 1:printf("Dame las Onzas:\t");
					scanf("%f",&n1);
					n1*=28.35;
					printf("Los Gramos son %.2f",n1);
					break;
				case 2:printf("Dame las Libras:\t");
					scanf("%f",&n1);
					n1*=.45359;
					printf("Los Kilogramos son %.2f",n1);
					break;
				case 3:printf("Dame las Ton.Inglesas:\t");
					scanf("%f",&n1);
					n1*=1.016;
					printf("Las Toneladas son %.2f",n1);
					break;
				default: printf("\t\t\tERROR de captura");
					break;
			}
			n1=0;
			printf("\nQuieres seguir convirtiendo en pesos?\t1)SI\t2)NO\t");
			scanf("%d",&sig);
			while(sig<1||sig>2){
				printf("\t\t\tERROR de captura");
				printf("\nQuieres seguir convirtiendo en pesos?\t1)SI\t2)NO\t");
				scanf("%d",&sig);
			}
			}while(sig==1);
			break;
		default: printf("\t\t\tERROR de captura");
			break;
	}
	printf("\nQuieres cambiar de tipo de conversion?\t1)SI\t2)SALIR\t");
	scanf("%d",&sig);
	while(sig<1||sig>2){
		printf("\t\t\tERROR de captura");
		printf("\nQuieres cambiar de tipo de conversion?\t1)SI\t2)SALIR\t");
		scanf("%d",&sig);
	}
	}while(sig==1);
	getch();
}

