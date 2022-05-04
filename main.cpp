#include <iostream>

using namespace std;

/*1. Sumar todos los enteros pares desde 2 hasta 100.
*/
/*
int main()
{
    int suma = 0;
    for(int i = 0;i <= 100;i += 2){
        suma = suma + i;
    }
    cout<<"La suma es "<<suma;
    return 0;
}
*/
/*2. Calcule los primeros 50 números primos y muestre el resultado en pantalla. */
/*
int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros primos a imprimir :"; cin>>n;
    switch(n){
        case 1: cout<<"1"; break;
        case 2: cout<<"1 2"; break;
        case 3: cout<<"1 2 3"; break;
        case 4:
            for(int i = 0;i<=n;i++){
                for(int a = 2;i>=0;i++){
                    if(1000/i>=2){
                        cout<<i;
                    }
                }
            }
    }

    return 0;
}
*/
/*3. Escribir un programa que visualice en pantalla los números múltiplos de 5 comprendidos entre 1 y 100. */
/*
int main(){
    int r;

    for(int i = 5; i<=100; i++){
        if(i%5<=0){

            cout<<i<<" ";
            }
        }

    return 0;
}

*/
/*4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre todos los números primos que se encuentren entre el rango de valores, de no encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.

*/
/*
int main(){
    int x,y;
    cout<<"Ingrese un numero :"; cin>>x;
    cout<<"Ingrese un numero mayor al anterior :"; cin>>y;

    for(int i = y; i>=x & i<=y; i--){
        if(y/i == 1 & y/i<=1){
            cout<<i;
        }
    }
}

*/


/*5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la media de los números leídos. */
/*
int main(){
    float n,numero,num_mayor = 0,num_menor=9999999,suma = 0;
    float media;

    cout<<"Cuantos numeros desea ingresar :"; cin>>n;

    for(int i =1;i<=n;i++){
    cout<<"Ingrese el numero "<<i<<" : "; cin>>numero;

    suma += numero;
    media = suma/n;

    if(num_mayor<numero){
        num_mayor=numero;
    }
    if(num_menor>numero){
        num_menor=numero;
    }
    }
    cout<<"El numero mayor es :"<<num_mayor<<endl;
    cout<<"El numero menor es :"<<num_menor<<endl;
    cout<<"La media aritmetica es:"<<media;
    return 0;

}

*/


/*Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando los dos anteriores a él.*/
/*
int main(){
	int n,a=0,b=1,c=1;

	do{
		cout<<"Digite la cantidad de digitos de la serie: ";
		cin>>n;
	}while(n<=0);

	cout<<"1 ";
	for(int i=1;i<n;i++){
		c = a + b;
		cout<<c<<" ";
		a = b;
		b = c;
	}

	cout<<"\n";
	return 0;
}

*/


/*7. Calcula el promedio de 3 notas para n estudiantes. */
/*
int main(){
    float n,nota1,nota2,nota3;
    float media;
    cout<<"Indique el numero de estudiantes : "; cin>>n;

    for(int i = 1; i<=n;i++){
        cout<<"\nIndique la nota 1 del estudiante "<<i<<" : "; cin>>nota1;
        cout<<"Indique la nota 2 del estudiante "<<i<<" : "; cin>>nota2;
        cout<<"Indique la nota 3 del estudiante "<<i<<" : "; cin>>nota3;

        media =(nota1+nota2+nota3)/3;

        cout<<"\nEl Promedio del estudiante "<<i<<" es : "<<media<<endl;
    }

}

*/

/*8. Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado. */
/*
int main(){
    int n,a;
    cout<<"Ingrese un numero :"; cin>>n;
    cout<<"Hasta que numero desea hacer la tabla? :"; cin>>a;

    for(int i = 0; i <= a; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}

*/


/*9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un triángulo rectángulo como el de más abajo, de altura el número introducido. * ** *** **** ***** */
/*
int main(){

    int n;
    string letra;

    cout<<"Ingrese un numero : "; cin>>n;


    for(int i=1 ; i<=n;i++){
        letra ='*******';



        cout<<letra[i]<<endl;
    }
}


*/


/*10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla una a una las letras de la palabra introducida empezando por la última.*/
/*
int main(){
    string palabra;

    cout<<" ingrese un palabra"; cin>>palabra;

    for(int i =0; i<=9;i++){
        cout<<"'"<<palabra[i]<<"'";
    }

    return 0;
}

*/


