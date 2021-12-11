#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int max_id = 0;
    
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
        
        if (max_id < fila*8+col)
            max_id = fila*8+col;
    }
    
    cout << max_id;
    
    return 0;
}
