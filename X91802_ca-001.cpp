#include <iostream> 
#include <vector> 
#include "Estudiant.hh"
using namespace std; 

 pair<int,int>  max_min_vest(const vector<Estudiant>& v)
 /* Pre: v no conte repeticions de dni  */
 /* Post: si existeix a v algun estudiant amb nota, la primera component del
    resultat es la posicio de l'estudiant de nota maxima de v i la segona
    component es la posicio de l'estudiant de nota minima de v (si hi ha
    empats, s'obte en cada cas la posicio de l'estudiant amb minim DNI); si no
    hi ha cap estudiant amb nota, totes dues components valen -1 */
 {
    pair<int, int> p; 
    p.first = -1; 
    p.second = -1; 
    bool primer = true; 
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].te_nota() and primer) {
            p.first = v[i].consultar_nota(); 
            p.second = v[i].consultar_nota();
            primer = false; 
        }
        else if (v[i].te_nota() and not primer) {
            if (v[i].consultar_nota() > p.first) p.first = v[i].consultar_nota(); 
            if (v[i].consultar_nota() < p.second) p.second = v[i].consultar_nota(); 
        }
    }
    return p; 
 }
