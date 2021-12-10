#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool buscar (string pas, string code) {
    for (int i=0; i<pas.size()-2; i++) {
        if (pas.at(i)==code.at(0)) {
            if (pas.at(i+1)==code.at(1)) {
                if (pas.at(i+2)==code.at(2)) {
                    bool valido = true;
                    if (code == "byr") {
                        string num;
                        int pos = i+4;
                        while (isdigit(pas.at(pos))) {
                            num+=pas.at(pos);
                            pos++;
                        }
                        if (stoi(num)<1920 || stoi(num)>2002) {
                            valido = false;
                        }
                    } else if (code == "iyr") {
                        string num;
                        int pos = i+4;
                        while (isdigit(pas.at(pos))) {
                            num+=pas.at(pos);
                            pos++;
                        }
                        if (stoi(num)<2010 || stoi(num)>2020) {
                            valido = false;
                        }
                    } else if (code == "eyr") {
                        string num;
                        int pos = i+4;
                        while (isdigit(pas.at(pos))) {
                            num+=pas.at(pos);
                            pos++;
                        }
                        if (stoi(num)<2020 || stoi(num)>2030) {
                            valido = false;
                        }
                    } else if (code == "hgt") {
                        string num;
                        int pos = i+4;
                        while (isdigit(pas.at(pos))) {
                            num+=pas.at(pos);
                            pos++;
                        }
                        
                        if (pas.at(pos)=='c') {
                            if (stoi(num)<150 || stoi(num)>193)
                                valido = false;
                        } else if (pas.at(pos)=='i') {
                            if (stoi(num)<59 || stoi(num)>76)
                                valido = false;
                        } else {
                            valido = false;
                        }
                    } else if (code == "hcl") {
                        int suma = 0;
                        int pos = i+5;
                        while (isdigit(pas.at(pos)) || (pas.at(pos)>='a' && pas.at(pos)<='f')) {
                            suma++;
                            pos++;
                        }
                        if (pas.at(i+4)!='#' || suma!=6) {
                            valido = false;
                        }
                    } else if (code == "ecl") {
                        string color;
                        int pos = i+4;
                        while (isalpha(pas.at(pos))) {
                            color+=pas.at(pos);
                            pos++;
                        }
                        if (color!="amb" && color!="blu" && color!="brn" && color!="gry" && color!="grn" && color!="hzl" && color!="oth")
                            valido = false;
                    } else if (code == "pid") {
                        int suma = 0;
                        int pos = i+4;
                        while (isdigit(pas.at(pos))) {
                            suma++;
                            pos++;
                        }
                        if (suma=!9)
                            valido = false;
                    }
                    return valido;
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
