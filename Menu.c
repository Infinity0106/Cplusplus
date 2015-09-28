//Bernardo Orozco Garza 1719152
//que combo cuantos combos quiere de esa cantidad, sub total, total=sub+16%, con cuanto pagara y regresa
#include<stdio.h>
#include<conio.h>
main(){
	int op,precio=0,sub=0,cant=0,opt; char nom[20]; float camb, tot, paga;
	printf("\t\t restaurant osos");
	printf("\n\n");
	printf("Nombre de cliente:\t");
	scanf("%s", nom);
	do{
	printf("\t\tMENU");
	printf("\n1.Hamburguesa\n2.Pizza\n3.Tacos\n4.Sopes\n5.Flautas");
	printf("\nElija una opcion:\t");
	scanf("%d",&op);
	switch(op){
		case 1:printf("El combo de hamburguesa incluye:");
			printf("\nPapas\nGelatina\nRefresco");
			printf("\nPrecio: $40.00");
			precio=40;
			break;
		case 2:printf("El combo de pizza incluye:");
			printf("\nSpaguetti\nPay de manzana\nRefresco");
			printf("\nPrecio: $55.00");
			precio=55;
			break;
		case 3:printf("El combo de tacos incluye:");
			printf("\nFrijoles charros\nFlan\nRefresco");
			printf("\nPrecio: $70.00");
			precio=70;
			break;
		case 4:printf("El combo de sopes incluye:");
			printf("\nEnsalada de lechuga\nPay de queso\nRefresco");
			printf("\nPrecio: $75.00");
			precio=75;
			break;
		case 5:printf("El combo de flautas incluye:");
			printf("\nEnsalada de lechuga\nFresa con crema\nRefresco");
			printf("\nPrecio: $85.00");
			precio=85;
			break;
		default:printf("\nLa opcion no existe");
			break;
	}
	printf("\nCuantos combos %d va a querer?\t",op);
	scanf("%d",&cant);
	printf("\nQuieres introducir otro combo? 0)Si 1)No\t");
	scanf("%d",&opt);
	while(opt<0||opt>1){
		printf("ERROR de captura\nQuieres introducir otro combo? 0)Si 1)No\t");
		scanf("%d",&opt);
	}
	precio*=cant;
	sub+=precio;
	}while(opt==0);
	tot=sub*1.16;
	printf("\nSub-total=\t$%d\nTotal=\t\t$%.2f\nCon cuanto pagara?  $",sub,tot);
	scanf("%f",&paga);
	while(paga<tot){
		printf("ERROR no menor de %.2f\nCon cuanto pagara?  $",tot);
		scanf("%f",&paga);
	}
	camb=paga-tot;
	
	printf("\nSu cambio es de $%.2f",camb);
	printf("\nGracias por su compra.  :)");
	getch();
}
