#include<stdio.h>

int comprobando_datos(float dato);
float sumatoria(float grados);
float potencia(float arg, float finn);
float factorial(float finn);
void enunciado();

float grado, s;

main(){
	float gra;
	enunciado();
	scanf("%f",&grado);
	gra=grado;
	if(comprobando_datos(grado)==1){
		s = sumatoria(grado);
		printf("\n\tSen(%1.2f) = %f\n",gra,s);
	}
	printf("\n\tTerminando programa ...");
}

void enunciado(){
	printf(" Sea la serie :\n");
	printf("     sin(x) = sum(i: 0->inf){ (-1)^i*x^(2i+1) / (2i+1)! }\n");
	printf(" Ingrese el valor de x (en grados sexagesimales)\n\n");
	printf("          x = ");
}

int comprobando_datos(float conv){
	if(conv>=0 && conv<=360){
		grado=conv*17453.29252*0.000001;//convirtiendo en radianes
		return 1;
	}else{
		printf("\n\tValor invalido");
		return 0;
	}
}

float sumatoria(float grados){
	int i,cont=0;
	float signo=-1, sum = 0, eva;
	//contando con 6 decimales para n-terminos
	do{
		eva=potencia(grados,2*cont+1)/factorial(2*cont+1)*1000000;
		i=eva;
		cont++;
	}while(i>0);
	printf("\n");
	for (i=0;i<cont;i++){
		signo = -1.0*signo;
		sum = sum+(signo*potencia(grados,2*i+1))/factorial(2*i+1);
		printf("\tT_%d = %4.6f\n",i,(signo*potencia(grados,2*i+1))/factorial(2*i+1));
	}
	return sum;
}

float potencia(float arg, float finn){
	int i;
	float pot = 1;
	for (i=1;i<=finn;i++){
		pot = pot*arg;
	}
	return pot;
}

float factorial(float finn){
	float fact = 1;
	int i;
	for (i=1;i<=finn;i++){
		fact = fact*i;
	}
	return fact;
}
