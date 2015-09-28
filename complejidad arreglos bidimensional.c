#include <stdio.h>   

int main (void){
    
    
    int F; //Filas//
    int C; //Columnas//

    do 
    {
     
     printf("Escriba las filas de la matriz ");
     scanf ("%d", &F);
     printf("Escriba las columnas de la matriz ");
     scanf ("%d", &C);
    
     }
    while ( F != C );
    printf("La matriz es de %d x %d por lo cual tendra %d elementos \n\n" , F , C , (F*C));
    
  int matriz [F][C];   //F - Filas      C -  Columnas // //j - Filas   i = Columnas //

  
  int i;  //Columna//
  int j;  // Fila//
  
  for ( i = 1 ; i = C ; i++ )  
  {

      for (j=1 ; j = F ; j++ )
    {
          
          printf("Escriba el valor de elemento %d en la columna %d " , j,i);
          scanf ("%d" , &matriz[i][j] );
          
          
    }
    
}   
    
int suma=0;

for (i = 1 ; i = C ; i++ )
{
    for (j = 1 ; j = F ; j++ )
    {
        suma = suma + matriz[i][j];
        }
}


    
  printf ("La suma es %d \n\n" , suma );  
    

    return 0;
}
