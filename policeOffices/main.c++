#include <iostream>
using namespace std;
 
 
int main() {
 
    int n, police = 0, untreated = 0; 
    cin >> n;                     
                                   
    while(n--) {
        int v;
        cin >> v;
         
         //if input value is +ve
        if(v > 0) {                
            police = police + v;
        }else if(v < 0){   
             //if input value is -1 and        
            if(police > 0) {          
                police--;          
            }
            else {                 
                untreated++;           
            }                     
        }
    }
     
    cout << untreated << endl;         
     
    return 0;
}

