#include <iostream> 
#include <stack> 
#include "BinTree.hh" 
using namespace std; 

typedef BinTree<int> Bt; 

int elements(const Bt& c) {
    if (c.empty()) return 0; 
    else {
        Bt d1 = c.right(); 
        Bt i1 = c.left();
        return 1 + elements(d1) + elements(i1); 
    }
}

 void cami_preferent(const BinTree<int>& a, stack<int>& c) {
 /* Pre: c es buida */
 /* Post: c conte el cami preferent d'a; si no es buit, el primer element
    del cami es al cim de c */
 if (not a.empty()) {
     
     Bt dre = a.right();
     Bt izq = a.left(); 
     
     if (dre.empty()) cami_preferent(izq, c); 
     
     else if (izq.empty()) cami_preferent(dre, c); 
     
     else {
         
         int dresize = elements(dre); 
         int izqsize = elements(izq); 
         
         if (dresize > izqsize) cami_preferent(dre, c); 
         else cami_preferent(izq,c); 
     }
     
     c.push(a.value());
 }
 
 }
