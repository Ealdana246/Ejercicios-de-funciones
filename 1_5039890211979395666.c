//ejercicio 4
#include<stdio.h>
#include<math.h>

float ecuacion(float a, float b, float c);

int main(int argc, char** args){
	float a, b, c;
      
    printf("\n Soluciones a ecuaciones de segundo grado");
    printf("\n _________________________________________\n\n\n");
    printf("\n Ingrese el valor de a: ");
    scanf("%f", &a);
    
    while(a==0){
    	
    printf("\n El valor de a no puede ser 0 ingrese el valor de nuevo: ");
    scanf("%f", &a);
    
    }
    
    printf(" Ingrese el valor de b: ");
    scanf("%f", &b);
    printf(" Ingrese el valor de c: ");
    scanf("%f", &c);
    ecuacion(a, b, c);

    return 0;
    
} 

float ecuacion(float a, float b, float c){
    float disc, x1, x2, xi, xr;

    disc=pow(b, 2.0)-4*a*c;
    
    if(disc>0.0){
    	
        printf("\n Las dos raices son reales\n");
        x1=((-b+sqrt(disc))/(2.0*a));
        x2=((-b-sqrt(disc))/(2.0*a));
        printf("\n x1= %.2f    x2= %.2f", x1, x2);
        
    } 
    
    else{
    	
        if(disc==0.0){
        	
            x1=(-b)/(2.0*a);
            printf("\n La ecuacion solo tiene una raiz %.2f", x1); 
            
        }
        
        else{
        	
            xr=(-b/(2.0*a));
            xi=(sqrt(-disc)/(2.0*a));
            printf("\n Las dos raices son inaginarias\n");
            printf("\n La raiz imaginaria 1 es %.2f y La raiz imaginaria 2 es %.2f", xr, xi);
            
        }
    }

}
