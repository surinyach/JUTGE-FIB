#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

void arrodonir_vector(vector<Estudiant>& v)
/* Pre: cert */
/* Post: els estudiants de v amb nota passen a tenir la seva nota arrodonida
a la decima mes propera */
{
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].te_nota()) {
            double n = v[i].consultar_nota();
            n = ((int)(10.*(n+.05)))/10.;
            v[i].modificar_nota(n);
        }
    }
}