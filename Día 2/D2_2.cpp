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
        pos+=2;
        
        if (((cad.at(pos+min) == letra) || (cad.at(pos+max) == letra)) && (cad.at(pos+min) != cad.at(pos+max)))
            correctas++;
    }
    
    cout << correctas;
    

    return 0;
}
