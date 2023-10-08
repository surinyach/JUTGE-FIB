#include <iostream> 
#include "BinTree.hh" 
using namespace std; 

typedef BinTree<int> Bt; 

int altura (const Bt& c) {
    
    if (c.empty()) return -1; 
    else {
        int alturadre = 1 + altura(c.right()); 
        int alturaesq = 1 + altura(c.left()); 
        if (alturadre > alturaesq) return 1 + alturadre; 
        else return 1 + alturaesq; 
    }
}

void arbre_graus_desequilibri(const BinTree<int> &a, BinTree<int> &agd) {
 /* Pre: a=A */
 /* Post: agd es un arbre amb la mateixa estructura que A on cada
    node conte el grau de desequilibri del subarbre d'A corresponent */
 
    if (a.empty()) return; 
    
    else {
        
        Bt dre = a.right(); 
        Bt esq = a.left(); 
        
        int dreh = altura(dre); 
        int esqh = altura(esq); 
        
        int vagd = esqh - dreh; 

        arbre_graus_desequilibri(esq, agd); 
        arbre_graus_desequilibri(dre, agd); 
        
        agd = Bt (vagd, Bt (), Bt());
    
    }
}
 
