//Bernardo Orozco Garza 1719152
//2.5 pg.85 cairo
#include<stdio.h>
#include<conio.h>
main(){
	float sub,total;
	printf("Dame el sub-total de la compra: \t");
	scanf("%f",&sub);
	if(800<=sub && sub<=1500){
		total=sub*(.90);
	}
	else{
		if(1500<sub && sub<=5000){
			total=sub*(.85);
		}
		else{
			if(5000<sub){
				total=sub*(.80);
			}
		}
	}
	printf("TOTAL		$%.2f",total);
	getch();
}
