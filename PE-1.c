//Volumen de esfera
//Bernardo Orozco Garza 1719152
#include<stdio.h>
#include<windows.h>
#include<math.h>
#define pi 3.1416
main(){
	float r,VE;
	
	printf("Teclea el valor del radio: \t");
	scanf("%f",&r);
	VE=(4.0/3.0)*pi*r*r*r;
	printf("El volumen de la esfera es %f\n",VE);
	
	system("PAUSE");
	return 0;
}
