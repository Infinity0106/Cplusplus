//captura, promedio e impresion
#include<stdio.h>
#include<conio.h>
#define n 5

void cap(int *i,float cal[]);
float promedio(int *i,float cal[]);
void imprimir(int *i,float cal[]);

int main(){
 float cal[5],prom;
 int i;
 cap(&i,cal);
 prom=promedio(&i,cal);
 imprimir(&i,cal);
 printf("El primedio es %.2f",prom);
 getch();
 return 0;
}

void cap(int *i,float cal[]){
 for(i=0;i<n;i++){
     printf("Dame la calificacion #%d: ",i+1);
     scanf("%f",&cal[i]);
 }
 return;
}

float promedio(int *i,float cal[]){
 float sum=0;
 for(i=0;i<n;i++){
    sum+=cal[i];
 }
 sum/=5;
 return sum;
}

void imprimir(int *i,float cal[]){
 for(i=0;i<n;i++){

 printf("#%d = %.2f\n",i+1,cal[i]);
 }
 return;
}
