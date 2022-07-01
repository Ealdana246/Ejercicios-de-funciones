 //Ejercicio 1: Suma de 2 numeros

 #include <stdio.h>
 
float sumaNum(float n1, float n2);

int main (){

    float n1, n2, total;

    printf("\n\t\t CALCULE LA SUMA DE 2 NUMEROS");

    printf("\n\n Ingrese el primer valor: ");
    scanf("%f", &n1);

    printf("\n Ingrese el segundo valor: ");
    scanf("%f", &n2); 

    total = sumaNum(n1, n2);
    printf("\n La suma de los valores %.1f y %.1f es: %.1f\n\n", n1, n2, total);

    return 0;
}

float sumaNum(float n1, float n2){ 
    float total;
   
    total = n1 + n2; 
   
    return total; 
}
