#include <iostream>
#include <string>

using namespace std;

int contar (string cad) {
    bool vector[26] = {false};
    for (int i=0; i<cad.size(); i++)
        vector[cad.at(i)-'a'] = true;
    int suma = 0;
    for (int i=0; i<26; i++) {
        if (vector[i])
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
        do {
            getline(cin,cad);
            grupo += cad;
            linea++;
        } while (cad!="" && linea<2093);
        
        suma += contar(grupo);
    }
    
    cout << suma;

    return 0;
}
