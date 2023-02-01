# Practica_11

<h2 align="center"> FUNCIONES </h2> <br>

---

<h3 align="center"> Tabla del contenido </h3> <br> 

<h3> Ejercicio 1 </h3> <br>

>- [Enunciado](#enunciado_1)
>	- [Diagrama de flujo](#diagrama_de_flujo_1)
>	- [Codificacion en C](#codificacion_en_C_1)
>		- [Ejecucion](#ejecucion_1)


<h3> Ejercicio 2 </h3> <br>

>- [Enunciado](#enunciado_2)
>	- [Diagrama de flujo](#diagrama_de_flujo_2)
>	- [Codificacion en C](#codificacion_en_C_2)
>		- [Ejecucion](#ejecucion_2)

<h3> Ejercicio 3 </h3> <br>

>- [Enunciado](#enunciado_3)
>	- [Diagrama de flujo](#diagrama_de_flujo_3)
>	- [Codificacion en C](#codificacion_en_C_3)
>		- [Ejecucion](#ejecucion_3)

---
<h2 align="center"> EJERCICIO 1 </h2> <br>


### Enunciado_1

1. Realizar un programa para calcular el número combinatorio
$$\dbinom{n}{k} = \dfrac{n!}{k!(n-k)!}$$


Para los números n y r leídos desde teclado, debe tomar en cuenta que deben
ser números enteros positivos, además que n > r .
Debe mostrar el diagrama de flujo en PSeInt, el código realizado en Dev-C++
y una captura de la ejecución del programa.

---

<h3 align="center"> Resolviendo </h3> <br>


#### Diagrama_de_flujo_1

>${\color{TealBlue}\mbox{Flujograma  (Programa principal)}}$
>- Inicia con un determinado enunciado, el cual aclarara las condiciones de uso del programa, tambien se le pide al usuario que ingrese 2 valores para que el programa funcione.
>- Antes de guardar los datos ingresados, estos seran evaluados por el subprograma (N_enteros), el cual solo aceptara nros enteros.
>- La condicional if{}else{}, si fuera el caso de operar la tarea de "else" entonces el programa mostrata un texto aclarando que se ingresaron datos erroneos y terminara el programa.
>- La condicional if{}else{}, cuando el usuario ingresa valores validos el programa realizara las tareas necesarias para resolver el problema planteado.

<p align="center">
  <img  src="https://i.postimg.cc/0QT7qwk4/P7-E1-Dprincipal.png">
</p>




> ${\color{TealBlue}\mbox{Flujograma  (Enunciado)}}$
> - Muestra lo que el programa esta tratando de hacer.
> - ${\color{Orange}\mbox{Aclara que datos seran aceptados por el programa.}}$
> - Pide al usuario los valores que se necesitan.

<p align="center">
  <img  src="https://i.postimg.cc/cJ5QXzV0/P7-E1-Denunciado.png">
</p>


> ${\color{TealBlue}\mbox{Flujograma  (Numeros entero)}}$
> - Analiza en numero ingresado por el usuario, si este nro es entero el subprograma devolvera este valor para luego ser guardado en una determinada variable y sino fuera el caso se guarda el valor de 0; esto se logra gracias a la implementacion de operaciones que evaluan el resto del numero.
> - Al ingresar el numero, este es de tipo flotante y debera ser convertido a un de tipo entero.
> - Al nuevo nro de tipo entero ya se le puede calcular su resto entre 1000.
> - Finalmente el resto es evaluado, si cumple la condicion se devolvera el numero para ser guardado y sino fuera el caso se retornara un valor de 0.

<p align="center">
  <img  src="https://i.postimg.cc/vBg5jzs9/P7-E1-Dentero.png">
</p>


> ${\color{TealBlue}\mbox{Flujograma  (Factorial)}}$
> - Realiza las operaciones necesarias para resolver un factorial.
> - Mediante una condicional if{}else{} se realiza la tarea de entregar el factorial  de 0 o el factorial de un nro entero positivo.
> - Esto se logra con un ciclo for(){} que tiene a la variable "i" como contador, y a la variable "f" como acumulador.

<p align="center">
  <img  src="https://i.postimg.cc/g00Vyptg/P7-E1-Dfun ciclo for(){}actorial.png">
</p>


#### Codificacion_en_C_1


>${\color{TealBlue}\mbox{Funcion principal}}$
>
>```C
>main(){
>	// Declaracion de variables.
>	float num_x = 0;
>	int Total, Tomados, dif, Comb;
>	// Enuciado
>	Enunciado();
>	// Peticion y registro de datos.
>	printf("\n\n\t    n = ");scanf("%f",&num_x);
>	Total = N_entero(num_x);
>	num_x = 0;
>	printf("\n\t    k = ");scanf("%f",&num_x);
>	Tomados = N_entero(num_x);
>	// Condicional para continuar
>	if(Total>0 && Tomados>=0 && Total>Tomados){
>		// Calculos necesarios
>		dif = Total - Tomados;
>		Comb = Fact(Total)/( Fact(Tomados)*Fact(dif) );
>		// Muestra de resultados.
>		printf("\n\t El combinatorio de %d tomados de %d es :\n", Total, Tomados);
>		printf("\n\t             C_%d,%d = %d\n", Total, Tomados, Comb);
>	}else{
>		printf("\n\t El valor invalido.");
>		printf("\n\t Lea correctamente el enunciado.");
>	}
>	printf("\n\n\t Terminando programa...\n");
>	getch();
>}
>```

>${\color{TealBlue}\mbox{Funcion Numero entero}}$
>
>```C
>int N_entero(float num_x){
>	int num = 0, var_aux = 0;
>	float resto = 0;
>	var_aux = num_x*1000;
>	resto = var_aux%1000;
>	if ( resto == 0 )
>		num = num_x;
>	else
>		num = -1;
>	return num;
>}
>```

>${\color{TealBlue}\mbox{Funcion Factorial}}$
>```C
>// Realiza el calculo del operador factorial
>int Fact(int arg){
>	int f = 1, i;
>	if (arg!=0){
>		for(i=1;i<=arg;i++){
>			f=f*i;
>		}
>	}
>	return f;
>}
>```

- Enlace al programa ( ${\color{orange}\mbox{crtl+clic = abrir otra ventana}}$ ), sobre la imagen :

<p align="center">
  <a href="https://github.com/Ruelas2022ETNumsa/Practica_7/blob/main/P7_E1/P7_E1_C.c" target="_blank"><img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" width="300"/></a>
</p>

#### Ejecucion_1

Enlace al programa ( ${\color{orange}\mbox{crtl+clic = abrir otra ventana}}$ ), sobre la imagen :

<p align="center">
  <a href="https://www.youtube.com/watch?v=NUVR5CmU9FU" target="_blank"><img src="https://i.postimg.cc/gc8hRJcz/progmb.gif" width="300"/></a>
</p>

---
#### Enunciado_2

2. Realizar un programa imprimir los números impares menores o iguales a n
leído desde teclado, además obtener su suma, debe realizarse mediate la
estructura for. Debe mostrar el diagrama de flujo en PSeInt, el código realizado
en Dev-C++ y una captura de la ejecución del programa.

---

<h3 align="center"> Resolviendo </h3> <br>

#### Diagrama_de_flujo_2

> ${\color{TealBlue}\mbox{Flujograma  (Programa principal)}}$
> 
> - En la 1ra parte se aclara lo que el programa desea realizar, ademas de pedir los datos necesarios.
> - Para el analisis del dato ingresado se tiene al subprograma "N_Entero", que validara solo los valores enteros y distintos de 0.
> - Luego se ingresa a la condicional, if(){}else{} para continuar con el programa en caso de haber ingresado datos correctos, para el caso de datos erroneos se mostrara un mensaje de error y terminara el programa.
> - Cuando el usuario ingresa un dato correcto, este ingresara dentro otra condicional if(){}else{} para determinar si el nro es positivo o negativo; Cualquiera sea el caso, se iniciaran las variables que determinaran el inicio, fin y una condicion final para la escritura(muestra en la pantalla).
> - Finalmente se inicia el ciclo for(){}, que con las variables del paso anterior formara la serie pedira, como tambien la tarea para calcular la suma requerida.
> - Por ultimo se muestra la suma calculada y se termina el programa.

<p align="center">
  <img   src="P7_E2/P7_E2_Dprincipal.png">
</p>

> ${\color{TealBlue}\mbox{Flujograma  (Subprograma N entero)}}$
> 
> - Ingresa el valor guardado en una variable de tipo flotante, para luego dentro la variable "var_aux" de tipo entero se guardada prviamente siendo esta multiplicado por el valor de 1000.
> - Dentro la variable "Resto", se guarda el resto de "var_aux" entre 1000.
> - La condicional if(){}{}, determina si el valor es un entero o tiene decimales; Sea el caso del entero ete devolvera el valor a la funcion principal, sea el otro caso se retornara un valor de "0".
> 
><p align="center">
>  <img  src="https://i.postimg.cc/VkvvhGqN/P7-E2-Dentero.png">
></p>

#### Codificacion_en_C_2

>${\color{TealBlue}\mbox{Funcion principal}}$
>```C
>main(){
>	// Declaracion de variables
>	int Num, Suma, i, ini, fin, cond;
>	float num_x;
>	// Funcion enunciado
>	Enunciado();
>	// Peticion y alamcenamiento de datos
>	printf("\n\n\t Ingrese el valor (entero) de N: ");
>	scanf("%f", &num_x);
>	// Para sabre si el valor en un entero
>	Num = N_Entero(num_x);
>	// Condicional de nro Z
>	if (Num !=0) {
>		Suma = 0;// inicalizando el acumulador
>		// Condicion para saber su el nro es + o -
>		if (Num > 0){
>			ini  = 0;
>			fin  = Num;
>			cond = Num;
>		}else{
>			ini  = Num;
>			fin  = 0;
>			cond = -1;
>		}
>		// Muestra de resultados
>		printf("\n\t Los numeros seran :");
>		printf("\n\n\t L : { ");
>		for(i=ini ; i<=fin ; i++){
>			// Condicional para nro pares
>			if(i%2!=0){
>				Suma +=i;// Calculos necesarios
>				printf("%d", i);
>				if(i<cond)
>					printf(", ");	
>			}	
>		}
>		printf(" }");
>		printf("\n\t S = %d", Suma);
>	}else{
>		printf("\n\n\t Valor invalido.");
>	}
>	printf("\n\n\t Terminando programa ...");
>	getch();
>}
>```


Enlace al programa ( ${\color{orange}\mbox{crtl+clic = abrir otra ventana}}$ ), sobre la imagen :

<p align="center">
  <a href="https://github.com/Ruelas2022ETNumsa/Practica_7/blob/main/P7_E2/P7_E2_C.c" target="_blank"><img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" width="300"/></a>
</p>

#### Ejecucion_2

Enlace al programa ( ${\color{orange}\mbox{crtl+clic = abrir otra ventana}}$ ), sobre la imagen :

<p align="center">
   <a href="https://www.youtube.com/watch?v=mEf3Uf5XDF8" target="_blank"><img src="https://i.postimg.cc/gc8hRJcz/progmb.gif" width="300"/></a>
</p>

---
#### Enunciado_3

3. La constante de Euler-Mascheroni, está dada por:

$$\gamma = - \int_{0}^{\infty} e^{-x} \text{ ln}(x)\text{ dx }= 0.5772156649 \cdots$$

Que de manera alternativa se puede calcular según:
$$\gamma = \lim_{n\to\infty} \bigg[ \sum_{i=1}^{n} \dfrac{1}{i} - \text{ ln }(n) \bigg]$$

Realizar un programa para obtener esta constante con 6 decimales de precisión,
se puede usar la librería math.h. Debe mostrar el diagrama de flujo en PSeInt,
el código realizado en Dev-C++ y una captura de la ejecución del programa.

---

<h3 align="center"> Resolviendo </h3> <br>

#### Diagrama_de_flujo_3



> ${\color{TealBlue}\mbox{Flujograma  (Programa principal)}}$
> - En la 1ra parte se aclara lo que el programa desea realizar.
> - Se inicializan las variables de "Suma" y "Gamma_calc" en cero , por otro lado la variable "n" toma el valor de 10 y la variavle "Gamma_const" toma el valor de 0.5772156649.
> - Se ingresa a un ciclo for(){}, ***el cual fue alterado para sumar en 1 a la variable de la condicional de finalizacion esta funcion for terminara si y solo si el valor del error calculado es igual a 0 logrando asi que se obtenga una precision de 6 decimales.***
> - Dentro del ciclo se realizan las tareas necesaria para calcular el valor de Gamma.
> - Finalmente el programa muestra la cantidad de veces que se ejecuto el ciclo for, para luego mostrar el resultado calculado junto con el valor de la constante.
<p align="center">
  <img src="https://i.postimg.cc/9fcGwsz1/P7-E3-D.png">
</p>

#### Codificacion_en_C_3

>${\color{TealBlue}\mbox{Funcion principal}}$
>
>```C
>// Programa principal
>main(){
>	// Definiendo variables
>	int i, n = 2, error;
>	float arg, Suma = 0, Gamma_x = 0;
>	// Enunciado
>	printf("\n\t *** Constante de Euler-Mascheroni ***");
>	printf("\n\t     -----------------------------");
>	printf("\n\n\t Sea la constante Gamma = %0.10f.\n\t calcular dicha constante mediante:", Gamma_c);
>	printf("\n\n\t  * S = sum_(i=1 > i=n){ 1/i }\n\n\t   Gamma = lim_(n->inf) { S -ln(n) }");
>	printf("\n\n\tMostrar el valor de n y el resultado\n\tcon 6 decimales de precision.");
>	// Iniciando el ciclo for
>	for(i=1 ; i<=n ; i++){
>		// Calculos necesarios
>		Suma += 1.0/i;
>		Gamma_x =Suma - log(i);
>		error = (Gamma_c-Gamma_x)*3000000;//3000000 2745238  10000000
>		// Condicional para añadir otra repeticion a ciclo
>		if ( error == 0 )
>			break;
>		else
>			n++;
>	}
>	// Culculo final
>	Gamma_x = Suma - log(i);
>	// muestra de resultados
>	printf("\n\n\t Los resultados son :");
>	printf("\n\n\t\t n = %d ",i);
>	printf("\n\t\t Gamma calc  = %0.10f",Gamma_x);
>	printf("\n\t\t Gamma const = %0.10f",Gamma_c);
>	printf("\n\n\t Terminando el programa...");
>	getch();
>}
>```


Enlace al programa ( ${\color{orange}\mbox{crtl+clic = abrir otra ventana}}$ ), sobre la imagen :


<p align="center">
  <a href="https://github.com/Ruelas2022ETNumsa/Practica_7/blob/main/P7_E3/P7_E3_C.c" target="_blank"><img src="https://media.giphy.com/media/26tn33aiTi1jkl6H6/giphy.gif" width="300"/></a>
</p>




#### Ejecucion_3

Enlace al programa ( ${\color{orange}\mbox{crtl+clic = abrir otra ventana}}$ ), sobre la imagen :

<p align="center">
  <a href="https://www.youtube.com/watch?v=8dTeFo0M7Sc" target="_blank"><img src="https://i.postimg.cc/gc8hRJcz/progmb.gif" width="300"/></a>
</p>
