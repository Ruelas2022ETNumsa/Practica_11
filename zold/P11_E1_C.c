#include<stdio.h>
#include<math.h>
#include<conio.h>

void mostrar_funcion_binominal(float z_0, float grado);
float funcion_sumatoria_binominal(float x, float grado, int n_terminos);
float funcion_factorial(float n);
float funcion_productorio(float n, float grado);


main(){
	float z_0,dominio,potencia;
	
	printf("   Ingrese el valor del punto de convergencia -> ");
	scanf("%f",&potencia);//Se debe agragar un mensaje del dominio aceptado	-1 < dominio < 1
	z_0 = dominio;//	printf("   Ingrese el valor de la potencia -> ");//	scanf("%f",&potencia);
	potencia = 1/3;//	printf("\n  * SERIE BINOMINAL *");//	printf("\n\n             S = [ TT (a-k+1)/k ]*[ x^n ] ");
	printf("\n\n             potencia = %f",potencia);
	printf("\n              argumento = %f",dominio);//	printf("\n     Donde TT es el productorio (desde k=1 hasta n_terminos)\n");
	mostrar_funcion_binominal(z_0,potencia);
}

void mostrar_funcion_binominal(float z_0, float grado) {
	float error = 10,n = 0;// n+1 es la catidad de terminos
	int i;
	// saca el valor del nro de termino
	do {
		error = (pow(z_0,n));
		n = n+1;
	} while (error!=0);	
	printf("   Donde :      t_n es el termino n-esimo \n\n");
	for (i=0 ; i<=n-1 ; i++) {
		printf("   t_%d = %f \n",i,pow(z_0,i));
	}
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

















