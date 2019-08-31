#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int moda(vector<int> &lista);
vector<int> leerConsole();

vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    float calcularModa(vector<int> &lista) {
    unordered_map<int, int> map;
    for (int i = 0; i < lista.size(); i++) {
        map[lista[i]]++;
    }
    int moda, max = -10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
}
}


int moda(vector<int> &lista) {
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    float calcularModa(vector<int> &lista) {
    unordered_map<int, int> map;
    for (int i = 0; i < lista.size(); i++) {
        map[lista[i]]++;
    }
    int moda, max = -10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
}
    
    return null;
}



int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsole();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
