//suma de la diagonal invertida
#include<stdio.h>
#include<conio.h>

main(){
    float are[20][20]={0},sum=0;
    int n,i=0,j,p,u;
    printf("Bernardo Orozco Garza 1719152");
    printf("\nDe que tamano el arreglo: ");
    scanf("%d",&n);
    while(n>20||n<1){
        printf("ERROR de captrua de 1-20");
        printf("\nDe que tamano el arreglo: ");
        scanf("%d",&n);
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            printf("Casilla %d,%d:  ",j+1,i+1);
            scanf("%f",&are[j][i]);
        }
    }
    for(j=0;j<n;j++){
        for(i=n;i>=0;--i){
            if(i!=j){
            sum=sum+are[j][i];
            }
        }
    }
    printf("La suma de la diagonal principal invertida es: %.2f",sum);

    getch();
}
