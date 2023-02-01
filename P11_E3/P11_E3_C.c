# include <stdio.h>

void Terminos(int ini, int fin);
int Term_n_simo(int);

main(){
	int n;
	printf(" \n\t *   RECURSIVIDAD EN C++   *");
	printf(" \n\t   ________________________");
	printf(" \n\t Ingrese la cantidad de terminos" );
	printf(" \n\t\t*-> ");
	scanf("%d",&n);
	printf("\n\t-Sea la serie de fibonacci :\n\n");
	Terminos(1,n);
}


void Terminos(int cont, int n){//cont -> 1,2,3,4,5,...,n
	if(cont<=n){
		printf("\t[%d]",Term_n_simo(cont));
		if(cont%3!=0){
			if(cont!=n)
				printf("\t->\t");		
			else
				printf(".");		
		}
		else
			printf("\n");	
		return Terminos(cont+1,n);
	}
}

int Term_n_simo(int n){
	if(n==1||n==2){
		return 1;	}
	return Term_n_simo(n-1)+Term_n_simo(n-2);
}
