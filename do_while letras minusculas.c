//Manuel Lourdes
//Do while
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main ()
{
    char s[] = "s";
    char resp[80];
    char nom[20];
    do {
        printf ("teclea tu nombre:");
        scanf ("%s", nom);
        printf("Desea teclear otro nombre? (s/n)");
        scanf ("%s",resp);
    } while (!strcmp (s,resp));
getch();
}
