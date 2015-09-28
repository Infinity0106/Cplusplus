#include<stdio.h>
#include<conio.h>

void guarda();
void mayor();
void imprime();

int n,i;
float cal[50]={0},may=0;
main (){
	printf("Bernardo Orozco Garza 1719152\nCuantas calificaciones? ");
	guarda();
	mayor();
	imprime();

	getch();
}

void guarda(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d = ",i+1);
		scanf("%f",&cal[i]);
	}
	return;
}
void mayor(){
	may = cal[0];
	for(i=1;i<n;i++){
		if(cal[i]<=may){
			may=cal[i];
		}
	}
	return;
}
void imprime(){
	/*for(i=0;i<n;i++){
		printf("\nCalificacion #%d: %.2f",i+1,cal[i]);
	}*/
	printf("\nEl menor en el arreglo es %.2f",may);
	return;
}
