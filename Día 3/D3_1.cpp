#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    char mapa[323][31];
    
    
    string cad;
    for (int i=0; i<323; i++) {
        cin >> cad;
        for (int j=0; j<31; j++) {
            mapa[i][j] = cad.at(j);
        }
    }
    
    int arboles = 0;
    int j=3;
    for (int i=1; i<323; i++) {
        if (mapa[i][j%31]=='#') {
            arboles++;
        }
        j+=3;
    }
    
    cout << arboles;
    

    return 0;
}
