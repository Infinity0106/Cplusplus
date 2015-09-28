#include<stdio.h>
#include<conio.h>

main(){
	char nom[20],opt;
	do{
		printf("Teclea un nombre: ");
		scanf("%s",nom);
		printf("%s\n",nom);
		printf("Deseas teclear otro nombre; S) si N) no");
		getchar();
		opt=getchar();
		
	}while(opt=='s'||opt=='S');
	printf("Terminada");
	getch();
}
