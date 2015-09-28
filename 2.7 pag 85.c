//Bermardo Orozco Garza 1719152
// 2.7 pg 85
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int y,x;
	printf("Dame el valor de X (entero):");
	scanf("%d",&x);
	if(x%4==0){
		y=x*x*x;
	}
	else{
		if(x%4==1){
			y=((x*x)-14)/(x*x*x);	
		}
		else{
			if(x%4==2){
				y=(x*x*x)+5;
			}
			else{
				if(x%4==3){
					y=pow(x,.5);
				}
				else{
					printf("\nERROR de Captura.");
				}
			}
		}
	}
	printf("El valor de y es de %d",y);
	getch();
}
