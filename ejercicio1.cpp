#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

float promedio(vector<int> &lista);
vector<int> leerConsola();


    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
vector<int> leerConsola() {
vector<int> lista;
int num;
while (true) {
  cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
  cin>>num;
  if (num<0) {
    break;
  }
  lista.push_back(num);
 }
 return lista;
}


int promedio(vector<int> &lista) {
    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
float calcularPromedio(vector<int> &v) {
int suma = 0;
for (int i = 0; i < v.size(); i++) {
  suma += v[i];
}
return (float)suma/v.size();
}
    return null;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}
