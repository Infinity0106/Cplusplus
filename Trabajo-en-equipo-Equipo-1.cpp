#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
int  menu1=2, menu2=1;
char prog;
float square(float); // promesa de funcion
float Triangulo( void );
float Rectangulo ( void );
float Circulo ( void );
float Cilindro ( void );
float Cubo ( void );

main()
{
	while(menu1==2)
	{
	system("cls");
	printf("\n\n                             Menu principal\n\n");
	printf("\n\n	Selecciona un programa: \n\n");
	printf("	a.	Signo Zodiacal\n");
	printf("	b.	Areas y Volumenes\n ");
	printf("	c.	Conversiones\n ");
	printf("	d.	Fin del programa\n ");
	scanf("%c",&prog);
	
	switch(prog)
		{
			
		case 'a':
		while(menu2==1)
		{
		system("cls");			
			
		int d, m, op=1;	
		system("cls");
		printf("Programa para determinar el signo Zodiacal\n");
		printf("Cual es tu dia (dd): ");	scanf("%d",&d);
		printf("Cual es tu mes (mm): ");	scanf("%d",&m);
		printf("\n\n");
	
		if(m==3)	
		{
		if(d>=21)	
		{	printf("Tu signo es Aries");}
		else
		{	printf("Tu signo es Piscis");}
		}
		
		if(m==4)
		{
		if(d>=21)	
		{	printf("Tu signo es Tauro");}
		else
		{	printf("Tu signo es Aries");}
		}
		
		if(m==5)
		{
		if(d>=21)
		{	printf("Tu signo es Geminis");}
		else
		{	printf("Tu signo es Tauro");}
		}
	
		if(m==6)
		{
		if(d>=21)
		{	printf("Tu signo es Cancer");}
		else
		{	printf("Tu signo es Geminis");}
		}
		
		if(m==7)
		{
		if(d>=21)
		{	printf("Tu signo es Leo");}
		else
		{	printf("Tu signo es Cancer");}
		}
		
		if(m==8)
		{
		if(d>=21)
		{	printf("Tu signo es Virgo");}
		else
		{	printf("Tu signo es Leo");}
		}
		
		if(m==9)
		{
		if(d>=21)
		{	printf("Tu signo es Libra");}
		else
		{	printf("Tu signo es Virgo");}
		}
		
		if(m==10)
		{
		if(d>=21)
		{	printf("Tu signo es Escorpio");}
		else
		{	printf("Tu signo es Libra");}
		}
		
		if(m==11)
		{
		if(d>=21)
		{	printf("Tu signo es Sagitario");}
		else
		{	printf("Tu signo es Escorpio");	}
		}	
		
		if(m==12)
		{
		if(d>=21)
		{	printf("Tu signo es Capricornio");}
		else
		{	printf("Tu signo es Sagitario");}
		}
		
		if(m==1)
		{
		if(d>=21)
		{	printf("Tu signo es Acuario");}
		else
		{	printf("Tu signo es Capricornio");}
		}
		
		
		 
		printf("\n\n\n\n0 salir\n");
		printf("1 repetir\n");
		printf("2 menu\n");		
		scanf("%d",&menu1);
		if(menu1==2)
		break;
		if(menu1==0)
		break;		
	
		}	
		if(menu1==2)
		break;
		if(menu1==0)
		break;
		
		
	case 'b':
		while(menu2==1)
		{
		system("cls");
		//Escribir el programa (sin retorno) a partir de aquí
		{
		int opcion;
    	float Lado;
    	printf("                              Bienvenido");
    	printf("\n Que desea hacer: ");
    	printf("\n\n\t\t1.- Calcular el area de un cuadrado\n");
    	printf("\t\t2.- Calcular el area de un Rectangulo\n");
    	printf("\t\t3.- Calcular el area de un Triangulo\n");
    	printf("\t\t4.- Calcular el area de un Circulo\n");
    	printf("\t\t5.- Calcular el volumen de un Cilindro\n");
    	printf("\t\t6.- Calcular el volumen de un Cubo\n\n");
    	scanf("%d", &opcion);
    	if(opcion == 1) {
       	printf("Teclea el valor de Lado -> ");
       	scanf("%f", &Lado);
       	printf("El area de un cuadrado de lado %.2f es %.2f\n", Lado, square(Lado));
    	}
    	if(opcion == 2) {
       	printf("El area del Rectangulo es %.2f\n", Rectangulo());
    	}
    	if(opcion == 3) {
       	printf("El Artea del Triangulo es %.2f\n", Triangulo());
    	}
    	if(opcion == 4) {
       	printf("Ok, tecleaste la opcion cuatro\n", Circulo());
    	}
    	if (opcion == 5){
      	 printf(" El volumen del cilindro es %.2f\n", Cilindro());
    	}
    	if (opcion == 6){
       	printf(" el Volumen del Cubo es %f\n", Cubo());
    	}        
    	if(opcion > 6) {
       	printf("La opcion tecleada no es valida\n");
    	}
		printf("\n\n\n\n0 salir\n");
		printf("1 repetir\n");
		printf("2 menu\n");		
		scanf("%d",&menu1);	
			}
		if(menu1==2)
		break; 
		if(menu1==0)
		break;
	}
		if(menu1==2)
		break;
		if(menu1==0)
		break;
	
	
	

		// Aqui empieza el C
	case 'c':
		while(menu2==1)
		{
		system("cls");
		//Escribir el programa (sin retorno) a partir de aquí		
			int opt1,opt2,sig;
			float n1;
			do{
				system("cls");
			printf("Conversiones de longitud, peso y volumen");
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
					printf("Los MKilogramos son %.2f",n1);
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
		printf("\n\n\n\n0 salir\n");
		printf("1 repetir\n");
		printf("2 menu\n");		
		scanf("%d",&menu1);
			
		if(menu1==2)
		break; 
		if(menu1==0)
		break;
		}
		if(menu1==2)
		break;
		if(menu1==0)
		break;
		
	case 'd':
		system("cls");
		printf("\n\n\n\t\t\tGracias por usar este programa. :)");
		menu1=0;
		break;
		} //Aqui sale del Switch Menu
	}//Sale del While						
}//Sale del Main, Termina.

float square(float L) {
      return(L * L);
}
float Triangulo( void ) {
      float base, altura;
      printf("\t\t Teclea el valor de la Base -> ");
      scanf("%f", &base);
      printf("\t\t Teclea el valor de la Altura -> ");
      scanf("%f", &altura);
      return( (base*altura) / 2 );
}
float Rectangulo( void ){
      float A,B;
      printf("\t\t Dar valor a la base -> ");
      scanf("%f", &A);
      printf("\t\t Dar valor a la altura ->");
      scanf("%f", &B);
      return (A*B);
}
float Circulo ( void ){
      float r;
      printf("\t\t Dar valor al radio -> ");
      scanf("%f", &r);
      return ( 3.1416 *r*r);
}
float Cilindro ( void ){ 
      float rdio, h;
       printf(" \t\t Teclee el valor del radio -> ");
       scanf("%f", &rdio);
       printf(" \t\t Ingresa el valor de altura ->");
       scanf("%f", &h);
      return ( 3.1416 *rdio*rdio*h);
}
      float Cubo ( void ){
      float arista;
       printf("\t\t Ingresa el valor de la arista -> ");
       scanf("%f", &arista);
      return ( arista*arista*arista);
}   


//printf("1 para repetir 0 para continuar");	scanf("%d",&menu1);	system("cls");                             
