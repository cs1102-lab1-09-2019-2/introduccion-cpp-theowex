#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    int a = 5;
    //Declarar una cadena
    string b;
    //Inicializar la cadena b
    b = "Esto es una cadena";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<b[0]<<"\n";
    cout<<b[4]<<"\n";
    cout<<b[50]<<"\n"; //que es lo que pasa aqui?

}