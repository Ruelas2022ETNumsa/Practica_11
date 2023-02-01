#include<stdio.h>
#include<math.h>

void n_terminos(float z_0, float grado);
int factorial(int n);
float Sumatoria_binominal(float x, float grado, int n_terminos);
float Productorio(float n, float grado);

main(){
	//Fucniona pero con valores enteros de la potencia y no para radicales
	float z_0 ,dominio,potencia;
	printf("   Ingrese el valor del punto de convergencia -> ");
	scanf("%f",&z_0);
	potencia=1.0/3;
	n_terminos(z_0,potencia);
}

void n_terminos(float z_0, float grado) {
	float eva ,cont = 1;
	int cond;
	// saca el valor del nro de termino
	do {
		eva = (pow(z_0,cont))/factorial(cont)*1000000;//para 6 decimales
		cond=eva;
		cont ++;
	} while (cond!=0);
	cond=cont;
	printf("\n\t   Para %d terminos : \n",cond);
	printf("\n\n   S = %f \n",Sumatoria_binominal(z_0,grado,cont));
}

float Sumatoria_binominal(float x, float grado, int n_terminos) {
	int i;
	float sumatoria =0;
	for (i=0 ; i<=n_terminos ; i++) {
		sumatoria = sumatoria+(pow(x,i))*Productorio(i,grado);
	}
	return sumatoria;
}

float Productorio(float n, float grado) {
	int k = 1;
	float valor_producto = 1;
	if( n==0 ){
		valor_producto = 1;
	}else{
		for(k=1;k<=n;k++){
			if( n>=k ){
				valor_producto = valor_producto*((grado-k+1)/(k));
			}
		}
	}
	return valor_producto;
}

int factorial(int finn){
	float fact = 1;
	int i;
	for (i=1;i<=finn;i++){
		fact = fact*i;
	}
	return fact;
}
