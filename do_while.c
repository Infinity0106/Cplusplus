//Bernardo Orozco Garza 1719152
//do-while
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

main(){
	char nom[50];
	int opt;
	printf("Bernardo Orozco Garza 1719152");
	do{
	printf("\nDame el nombre:\t");
	scanf("%s",&nom);
	printf("%s\n",&nom);
	printf("\nQuieres introducir otra ves? 1)SI 0)NO\t");
	scanf("%d",&opt);
	while(opt<0||opt>1){
		printf("ERROR de captura");
		printf("\nQuieres introducir otra ves? 1)SI 0)NO\t");
		scanf("%d",&opt);
		}
	}while(opt==1);
	getch();
}

