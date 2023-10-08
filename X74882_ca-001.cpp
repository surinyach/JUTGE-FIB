#include <iostream> 
#include <vector>
#include "Estudiant.hh" 
#include "Cjt_estudiants.hh"
using namespace std;

void notesmillors (Cjt_estudiants& c1, const Cjt_estudiants& c2) {
    
    for (int i = 1; i <= c1.mida(); ++i) {
        
        Estudiant e1 = c1.consultar_iessim(i);
        Estudiant e2 = c2.consultar_estudiant(e1.consultar_DNI()); 
        
        if (e1.te_nota() and e2.te_nota()) {
            if (e1.consultar_nota() < e2.consultar_nota()) c1.modificar_iessim(i, e2);
        }
        
        else if(e2.te_nota() and not e1.te_nota()) {
            c1.modificar_iessim(i, e2); 
        }
    }
}
        
int main () {
    
    Cjt_estudiants c1; 
    Cjt_estudiants c2; 
    
    c1.llegir();
    c2.llegir(); 
    
    notesmillors(c1,c2);  

    c1.escriure(); 
}


