#include <iostream>

using namespace std;

int main()
{
    int vector[200];
    
    for (int i=0; i<200; i++) {
        cin >> vector[i];
    }
    
    for (int i=0; i<200; i++) {
        for (int j=i; j<200; j++) {
            if (vector[i]+vector[j] == 2020)
                cout << vector[i]*vector[j];
        }
    }
    
    

    return 0;
}
