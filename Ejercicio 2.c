//Ejercicio 2: promedio

#include<stdio.h>

float prom(int i, int cant);

int main(){
	int i, cant;
	float promedio;

	printf("\n Cuantos numeros quiere ingresar?: ");
	scanf("%d",&cant);	

	promedio = prom(i, cant);

	printf("\n El promedio de los numeros es: %.1f\n", promedio);
	
	return 0;	
}

float prom(int i, int cant){
	int ax[20];
	float promedio=0 , suma = 0;

	for (i=0; i < cant; i++)
	{
	printf("\n Ingrese un numero: ", i+1);
	scanf("%d",&ax[i]);

	suma += ax[i];
	}
	
	promedio = suma / cant;

	return promedio;
}