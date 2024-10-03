int main()
{
    //Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
    cout << fixed; // punto fijo
    cout << setprecision(2);

    //Declarar e Imprimir String 
    string texto0 = "Hola Mundo!";
    cout << texto0 << endl;

    //Unir dos textos en uno 
    string primerTexto = "Hola";
    string segundoTexto = "Mundo!";
    string textoUnido = primerTexto + segundoTexto;
    cout << textoUnido << endl;

    //Intro un valor en la variable de texto string usando teclado
    string nombre;
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << "!" << endl;
}
