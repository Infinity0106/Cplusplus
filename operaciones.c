#include<stdio.h>
#include<windows.h>

main(){
	float n1,n2,s,r,m,d;
	
	printf("Dame el valor del numero 1 y el numero 2:\n");
	scanf("%f %f",&n1,&n2);
	s=n1+n2;
	r=n1-n2;
	m=n1*n2;
	d=n1/n2;
	printf("\nLa suma es de:\t\t\t%.2f",s);
	printf("\nLa resta es de:\t\t\t%.2f",r);
	printf("\nLa multiplicacion es de:\t%.2f",m);
	printf("\nLa divicion es de:\t\t%.2f",d);
	printf("\n");
	
	system("pause");
	return 0;
	}
