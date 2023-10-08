#include <vector> 
#include "Estudiant.hh"
#include <algorithm> 
#include <iostream>
using namespace std; 

double media(int nas, int tam_sub, const vector<bool>& subcj) {
    double suma = 0;
    for (int i = 0; i < nas; ++i) {
        double a; 
        cin >> a; 
        if (subcj[i]) suma += a; 
    }
    return suma/tam_sub; 
}

int main () {
    
 int nest; // número de estudiantes
 int nas; // número de asignaturas
 int tam_sub; // tamaño del subconjunto de asignaturas
 cin >> nest >> nas >> tam_sub; 
 
 //Lectura del conjunto de asignaturas
 //para el cual leemos la media. 
 vector<bool> subconjunto(nas, false); // subconjunto vacío del conjunto de asignaturas
 // Leemos las asignaturas que perteneces al subconjunto
 for (int i = 0; i < tam_sub; ++i) {
     int as; 
     cin >> as; 
     subconjunto[as - 1] = true; 
 }
 
 for (int i = 0; i < nest; ++i) {
     int dni; 
     cin >> dni; 
     Estudiant e (dni); 
     e.afegir_nota(media(nas, tam_sub, subconjunto)); 
     e.escriure(); 
 }
 
}
