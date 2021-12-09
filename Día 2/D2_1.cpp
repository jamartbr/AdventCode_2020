#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int min, max;
    char letra;
    
    int correctas = 0;
    
    string cad;
    for (int i=0; i<1000; i++) {
        getline(cin, cad);
        
        int pos = 0;
        string num;
        while (isdigit(cad.at(pos))) {
            num += cad.at(pos);
            pos++;
        }
        pos++;
        min = stoi(num);
        
        num = "";
        while (isdigit(cad.at(pos))) {
            num += cad.at(pos);
            pos++;
        }
        pos++;
        max = stoi(num);
        
        letra = cad.at(pos);
        pos++;
        
        int suma = 0;
        while (pos<cad.size()) {
            if (cad.at(pos) == letra) {
                suma++;
            }
            pos++;
        }
        
        if (suma>=min && suma<=max) {
            correctas++;
        }
    }
    
    cout << correctas;
    

    return 0;
}
