/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>
using namespace std;

int main() {
    int a=5, x, y=2 , z=1;
    
    for (int i=1;i<7;i++){
        x=7-a;
        a--;
        for (int b=0;b<y;b++){
            cout<<z+b;
        }
        for (int j=0;j<=a;j++){
            cout<<"*";}
            
        y++;
        cout<<"\n";
        
        
    }


    return 0;
}
