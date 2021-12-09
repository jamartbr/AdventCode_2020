#include <iostream>
#include <string>

using namespace std;

bool buscar (string pas, string code) {
    for (int i=0; i<pas.size()-2; i++) {
        if (pas.at(i)==code.at(0)) {
            if (pas.at(i+1)==code.at(1)) {
                if (pas.at(i+2)==code.at(2)) {
                    return true;
                }
            } 
        }
    }
    return false;
}

bool comprobar (string pas) {
    return (buscar(pas,"byr") && buscar(pas,"iyr") && buscar(pas,"eyr") && buscar(pas,"hgt") && buscar(pas,"hcl") && buscar(pas,"ecl") && buscar(pas,"pid"));
}

int main()
{
    int validos = 0;
    
    string cad;
    
    int linea=0;
    while (linea<957) {
        string pasaporte;
        do {
            getline(cin,cad);
            pasaporte += cad + " ";
            linea++;
        } while (cad!="" && linea<957);
        
        if (comprobar(pasaporte)) {
            validos++;
        }
    }
    
    cout << validos;

    return 0;
}
