/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30
 
 */
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int x, y, z;
  cout<<"Hallar el numero mayor\n";
  cout<<"***********************\n";
  cout<<"Ingresar tres numeros\n";
  cin>>x>>y>>z;

  if (x>y or x==y)
    if (x>z or z==x)
      cout<<"El numero mayor es:"<<x;
    else
      cout<<"El numero mayor es:"<<z;
  else
    if (y>z or z==y)
      cout<<"El numero mayor es:"<<y;
    else
      cout<<"El numero mayor es:"<<z;

}
