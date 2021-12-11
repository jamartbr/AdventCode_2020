#include <iostream>
#include <string>

using namespace std;

int contar (string cad, int n) {
    int vector[26] = {0};
    for (int i=0; i<cad.size(); i++)
        vector[cad.at(i)-'a']++;
    int suma = 0;
    for (int i=0; i<26; i++) {
        if (vector[i]==n)
            suma++;
    }
    return suma;
}

int main()
{
    string cad;
    
    int suma = 0;
    
    int linea=0;
    while (linea<2093) {
        string grupo;
        int contador = -1;
        do {
            getline(cin,cad);
            grupo += cad;
            linea++;
            contador++;
        } while (cad!="" && linea<2093);
        if (linea==2093)
            contador++;
        
        suma += contar(grupo, contador);
    }
    
    cout << suma;

    return 0;
}
