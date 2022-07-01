//Ejercicio 3: Cadena de Caracteres

#include <stdio.h>

#define MAX 50

void concatena(char cadena[MAX], char cad1[MAX],char cad2[MAX]);
void invierte(char cadfuente[MAX],char caddest[MAX]);

int main(){
 
 char cadena[MAX], cad1[MAX], cad2[MAX], cadinvertida[MAX];

    printf("\n Introduzca una cadena de caracteres: ");
    gets(cad1);

    printf("\n Introduzca una segunda cadena de caracteres: ");
    gets(cad2);



    concatenarr(cad1, cad2, cadena);

    invertir(cadena, cadinvertida);

    printf("\n La cadena concatenada es: %s", cadena);

    printf("\n La cadena invertida es: %s\n", cadinvertida);
 
 return 0;
}

void concatenar(char cad1[MAX],char cad2[MAX], char cadena[MAX])
{
 strcpy(cadena, cad1);
 strcat(cadena, cad2);
};

void invertir(char cadfuente[MAX],char caddest[MAX])
{
 int longitud,i,j;
 longitud=strlen(cadfuente);
 j=longitud-1;
 for (i=0;i<longitud;i++)
 {
  caddest[i]=cadfuente[j];
  j--;
 }
 caddest[longitud]='\0';
 return;
}