#include<conio.h>
#include<stdio.h>

main(){
	char mat[10];
	int sem;
	float prom;
	printf("matricicula: ");
	scanf("%s",&mat);
	printf("semestre: ");
	scanf("%d",&sem);
	printf("prom");
	scanf("%f",&prom);
	if(sem>6&&prom>=8.8){
		printf("ing");
	}
	else{
		if(sem>=6&&prom>8.5){
			printf("med");
		}
		else{
			if(sem>5&&prom>=8.3){
				printf("lic");
			}
			else{
				if(sem>=3&&prom>=7.8){
					printf("tec");
				}
			}
		}
	}
	getch();
}
