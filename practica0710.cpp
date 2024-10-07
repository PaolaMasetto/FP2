// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    //Ejercicio 4
    //Introducir una linea completa de texto (string)
    //cin.ignore(); //Ignora la instrucción cin
    string nombreCompleto;
    cout << "Introduce tu nombre completo: ";
    getline(cin, nombreCompleto); //Obtiene una línea completa de texto
    cout << "Tu nombre completo: " << nombreCompleto << endl;

    //Ejercicio 5
    //De que tamaño es un string
    cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

    //Ejercicio 6
    //Como acceder un caracter especifico de un texto (String)
    // [] = Operador indice
    cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;
    
    //Ejercicio 7
    //Cambiar un caracter específico de un texto (string)
    string cambio = "Hola";
    cambio[0] = 'h';
    cout << "Cambiar H por h: " << cambio << endl;

    //Ejercicio 8
    //Convertir un string a MAYUSCULAS
    string  textoMinusculas = "texto a convertir ";
    transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), ::toupper);
    cout << "Texto en MAYUSCULAS: " << textoMinusculas << endl;

    //Ejercicio 9
    //Convertir un string a minusculas
    string textoMayusculas = "TEXTO A CONVERTIR";
    transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), ::tolower);
    cout << "Texto en minusculas: " << textoMayusculas << endl;

    //Ejercicio 10
    //Insertar un texto dentro de otro texto
    string textoPrincipal = "Jose, ";
    textoPrincipal.insert(6, "Luis");
    cout << "Insertar texto dentro de otro: " << textoPrincipal << endl;

    //Ejercicio 11
    //Revertir un texto
    string textoRevertir = "Hola Mundo!";
    reverse(textoRevertir.begin(), textoRevertir.end());
    cout << "Texto revertido: " << textoRevertir << endl;

    //Ejercicio 12
    //Convertir un número a un string
    int n1 = 123;
    string numeroAtexto = to_string(n1);
    cout << "Numero como string: " << numeroAtexto << endl;

    //Ejercicio 13
    //Convertir un string a número
    string textoAnumero = "123";
    int n2 = stoi(textoAnumero);
    cout << "String como número: " << n2 << endl;


}
