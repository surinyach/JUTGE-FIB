#include <iostream> 
#include <stack> 
#include "BinTree.hh" 
using namespace std; 

typedef BinTree<int> Bt; 

int nombre_elements(const Bt& a) {
    if (a.empty()) return 0; 
    else {
        Bt dre = a.right(); 
        Bt izq = a.left(); 
        return 1 + nombre_elements(dre) + nombre_elements(izq);
    }
}

 void cami_preferent(const BinTree<int>& a, stack<int>& c) {
 /* Pre: c es buida */
 /* Post: c conte el cami preferent d'a; si no es buit, el primer element
    del cami es al cim de c */
 if (not a.empty()) {
     
     c.push(a.value()); 
     
     Bt dre = a.right();
     Bt izq = a.left(); 
     
     if (dre.empty()) cami_preferent(izq, c); 
     
     else if (izq.empty()) cami_preferent(dre, c); 
     
     else {
         int dresize = nombre_elements(dre); 
         int izqsize = nombre_elements(izq); 
         
         if (dresize > izqsize) cami_preferent(dre, c); 
         else cami_preferent(izq,c); 
     }
     
 }
 
 }
