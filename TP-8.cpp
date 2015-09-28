//Bernardo Orozco Garza 1719152
//Ejemplo for, porimedio alumnos
#include<stdio.h>
#include<conio.h>

int main(){
	int i,n;
	float suma=0.0, promedio, dato;
	printf("Bernardo Orozco Garza 1719152\nEste programa obtiene promeido de alumnos\n");
	printf("¿Cuantas calificaciones se van a introducir?\t");
	scanf("%d",&n);
	if(n>0){
		printf("capture las calificaciones, por favor \n");
	for(i=1;i<=n;i++){
		scanf("%f",&dato);
		suma+=dato;
	}
	promedio=suma/n;
	printf("El promedio es: %5.2f\n",promedio);
	}
	else{
		printf("No puedo sacar el promedio de 0 alumnos. \n");
	}
	getch();
}
