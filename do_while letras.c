//Bernardo Orozco Garza 1719152
//do-while letras
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

main(){
	char nom[50];
	char o,c;
	printf("Bernardo Orozco Garza 1719152");
	do{
	printf("\nDame el nombre:\t");
	scanf("%s",&nom);
	printf("%s\n",&nom);
	printf("\nQuieres introducir otra ves? S)SI N)NO\t");
	o=getche();
	o=toupper(o);
	while(o!='S'&&o!='N'){
		printf("\nERROR de captura");
		printf("\nQuieres introducir otra ves? S)SI N)NO\t");
		o=getche();
		o=toupper(o);
		}
	}while(o!='N');
//	do {
//printf("\nQuieres introducir otra ves? S)SI N)NO\t"); 
//c=getche();     /*devuelve el carácter leido desde la consola, y lo visualiza.*/ 
//c=toupper(c); /* devuelve el carácter c en mayúscula, y si no lo hay, devuelve el mismo*/ 
//printf("\nSu mayúscula correspondiente es: %c",c);
//} while (c!='N'); 
	getch();
}

