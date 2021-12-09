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
    
    int arboles[5] = {0};
    
    for (int i=1; i<323; i++) {
        if (mapa[i][i%31]=='#') {
            arboles[0]++;
        }
    }
    
    int j=3;
    for (int i=1; i<323; i++) {
        if (mapa[i][j%31]=='#') {
            arboles[1]++;
        }
        j+=3;
    }
    
    j=5;
    for (int i=1; i<323; i++) {
        if (mapa[i][j%31]=='#') {
            arboles[2]++;
        }
        j+=5;
    }
    
    j=7;
    for (int i=1; i<323; i++) {
        if (mapa[i][j%31]=='#') {
            arboles[3]++;
        }
        j+=7;
    }
    
    j=1;
    for (int i=2; i<323; i+=2) {
        if (mapa[i][j%31]=='#') {
            arboles[4]++;
        }
        j++;
    }
    
    int total = 1;
    for (int i=0; i<5; i++) {
        total *= arboles[i];
    }
    
    cout << total;
    

    return 0;
}
