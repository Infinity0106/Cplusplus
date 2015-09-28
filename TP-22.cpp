//for9velocidad
#include<stdio.h>
#include<conio.h>

main(){
	int i, n;
	float v, VP=0;
	printf("Bernardo Orozco Garza 1719152\n");
	printf("Cuantos corredores?");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Dame la velociad del corredor #%d:  ",i+1);
		scanf("%f",&v);
		VP+=v;
	}
	printf("La velocidad promedio fue: %.2f",(VP/n));
		
	getch();
}

