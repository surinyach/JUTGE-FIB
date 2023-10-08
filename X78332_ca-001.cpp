#include <iostream> 
#include <stack> 
#include "BinTree.hh" 
using namespace std; 

typedef BinTree<int> Bt; 

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
         
        Bt dre2 = dre.right(); 
        Bt dre1 = dre.left(); 
        Bt izq2 = izq.right(); 
        Bt izq1 = izq.left(); 
        
        if ((izq1.empty() and izq2.empty()) and (not dre1.empty() or not dre2.empty())) cami_preferent(dre, c); 
        else if ((izq1.empty() or izq2.empty()) and (not dre1.empty() and not dre2.empty())) cami_preferent(dre, c); 
        else cami_preferent(izq, c); 
     }
     
 }
 
 }
