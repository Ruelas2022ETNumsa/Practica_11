#include<stdio.h>
#include<math.h>
#include<conio.h>

void mostrar_funcion_binominal(float z_0, float grado);
float funcion_sumatoria_binominal(float x, float grado, int n_terminos);
float funcion_factorial(float n);
float funcion_productorio(float n, float grado);

main(){
	//Fucniona pero con valores enteros de la potencia y no para radicales
	float z_0 ,dominio,potencia;
//	printf("   Ingrese el valor del punto de convergencia -> ");
//	scanf("%f",&dominio);
//	z_0 = dominio;
	z_0=1/2;
	printf("\n argumento = %0.2f",dominio);
	printf("\n potencia = %0.2f",potencia);
//	mostrar_funcion_binominal(z_0,potencia);
}

void mostrar_funcion_binominal(float z_0, float grado) {
	float error = 10,n = 0;// n+1 es la catidad de terminos
	int i;
	// saca el valor del nro de termino
	do {
		error = (pow(z_0,n));
		n ++;
	} while (error!=0);
//	printf("   Donde :      t_n es el termino n-esimo \n\n");
//	for (i=0 ; i<=n-1 ; i++) {
//		printf("   t_%d = %1.10f \n",i,pow(z_0,i));
//	}
	printf("\n   S = %f \n",funcion_sumatoria_binominal(z_0,grado,n));
}

float funcion_sumatoria_binominal(float x, float grado, int n_terminos) {
	int n;
	float sumatoria =0;
	for (n=0 ; n<=grado+1 ; n++) {
		sumatoria = sumatoria+(pow(x,n))*funcion_productorio(n,grado);
	}
	return sumatoria;
}

float funcion_productorio(float n, float grado) {
	int k = 1;
	float valor_producto =1;
	if (n==0) {
		valor_producto = 1;
	} else {
		for (k=1;k<=n;k++) {
			if (n>=k) {
				valor_producto = valor_producto*((grado-k+1)/(k));
			}
		}
	}
	return valor_producto;
}
