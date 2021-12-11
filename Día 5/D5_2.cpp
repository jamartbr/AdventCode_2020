#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int matriz[8][128] = {0};
    
    for (int k=0; k<945; k++) {
        string cad;
        cin >> cad;
        
        int fila = 0;
        for (int i=0; i<7; i++) {
            if (cad.at(i)=='B') {
                fila += pow(2,6-i);
            }
        }
        
        int col = 0;
        for (int i=7; i<10; i++) {
            if (cad.at(i)=='R') {
                col += pow(2,9-i);
            }
        }
        
        matriz[col][fila] = fila*8+col;
    }
    
    for (int i=0; i<8; i++) {
        for (int j=0; j<128; j++) {
            if (matriz[i][j]==0)
                cout << i << ", " << j << endl;
        }
    }
    
    return 0;
}
